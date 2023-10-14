import "DPI-C" function void timerIntr_raise(input reg [63:0] mcauseRegp);

module Intr(
    input clk,
    input rst,

    // 1. ctrs
    input                   i_isecall ,
    input                   i_ismret  ,
    input                   i_iscsr   ,  
    input clint_mtip,
    input [11:0] csr,
    input [2:0] func3,//csr_opcode ecall&mret(3'b000)

    // 2. csr wdata
    input [63:0] pc,//mepc wdata
    input [63:0] R_rs1,
    input [4:0] zimm,

    // 3. outputs
    output isIntrPC,
    output [63:0] IntrPC,
    output reg [63:0] dout,
    output mstatus_MIE 
);
    // csr regs (todo: mip rw when mutli intr happens)
    reg [63:0] mepc,mtvec,mstatus,mie,mip;
    reg [63:0] mcase /*verilator public*/;

    initial begin
        mip=64'd0;
    end

    // 1. intr(mtime ecall mret)

    // 1.1 mtime
    assign mstatus_MIE=mstatus[3];
    wire mie_MTIE=mie[7];
    wire timer_irq=clint_mtip&mstatus_MIE&mie_MTIE;

    // 1.2 ecall mret
    // wire i_isecall=(!( (|csr) && (|func3) ))&IntrEn;
    // wire i_ismret=(!(|func3))&(csr==12'b0011000_00010);
    
    // 1.3 irq_raise
    wire irq_raise=i_isecall|timer_irq;
    
    // 1.4 eNo
    reg [63:0] eNo;
    MuxKeyInternal #(2,2,64,1) CSRwEn(.out(eNo),.key({timer_irq,i_isecall}),.default_out(64'd0),.lut({
    2'b01,64'd11,//ecall
    2'b10,64'h8000_0000_0000_0007//timer
    }));    //目前只支持一种中断timer/一种异常ecall
    
    // 1.5 Intr pc
    assign IntrPC=irq_raise?mtvec:(i_ismret?mepc:pc);
    assign isIntrPC = i_ismret | irq_raise;

    // 2. csr rw (csr inst or intr happens for mepc mcase ...)

    // 2.2 decode csr
    wire ismtvec = (csr==12'h305);
    wire ismepc = (csr==12'h341|i_isecall|timer_irq);
    wire ismcase = (csr==12'h342|i_isecall|timer_irq);
    wire ismstatus = (csr==12'h300|i_ismret);
    wire ismie = (csr==12'h304);
    wire ismip = (csr==12'h344);
    
    // 2.3 csr wdata
    reg [63:0] csrWData;
    MuxKeyInternal #(6,3,64,1) scrDataSrc(.out(csrWData),.key(func3),.default_out(64'd0),.lut({
    3'b001,R_rs1,//csrrw
    3'b010,dout|R_rs1,//csrrs
    3'b011,dout&(~R_rs1),//csrrc
    3'b101,{dout[63:5],zimm},//csrrwi
    3'b110,dout|{59'd0,zimm},//csrrsi
    3'b111,dout&(~{59'd0,zimm})//scrrci
    }));
    wire [63:0] mepcIn=irq_raise?pc:csrWData;
    wire [63:0] mcaseIn=irq_raise?eNo:csrWData;
    wire mstatus_MPIE=mstatus[7];
    wire [63:0] mstatusIn=irq_raise?{mstatus[63:8],mstatus_MIE,mstatus[6:4],1'b0,mstatus[2:0]}:
                          i_ismret?{mstatus[63:8],1'b1,mstatus[6:4],mstatus_MPIE,mstatus[2:0]}:                       
                          csrWData;
    
    Reg #(64,64'd0) mtvecReg(.clk(clk),.rst(rst),.din(csrWData),.dout(mtvec),.wen(ismtvec&i_iscsr));
    Reg #(64,64'd0) mepcReg(.clk(clk),.rst(rst),.din(mepcIn),.dout(mepc),.wen((ismepc&i_iscsr)|irq_raise));
    Reg #(64,64'd0) mcaseReg(.clk(clk),.rst(rst),.din(mcaseIn),.dout(mcase),.wen((ismcase&i_iscsr)|irq_raise));
    Reg #(64,64'ha00001800) mstatusReg(.clk(clk),.rst(rst),.din(mstatusIn),.dout(mstatus),.wen((ismstatus&i_iscsr)|irq_raise|i_ismret));
    Reg #(64,64'd0) mieReg(.clk(clk),.rst(rst),.din(csrWData),.dout(mie),.wen(ismie&i_iscsr));

    // 2.4 csr out
    assign dout=ismtvec?mtvec:(ismepc?mepc:(ismcase?mcase:(ismstatus?mstatus:(ismie?mie:(ismip?mip:64'd0)))));//改成查找表形式
    
    // 3. diffentical test
    always @(posedge clk) begin
        if(timer_irq) 
            timerIntr_raise(mcaseIn);
    end

endmodule    