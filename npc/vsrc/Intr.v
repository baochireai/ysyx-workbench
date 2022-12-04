import "DPI-C" function void timerIntr_raise(input reg [63:0] mcauseRegp);
module Intr(
    input clk,
    input IntrEn,
    input clint_mtip,
    input [63:0] pc,
    input [63:0] R_rs1,
    input [4:0] zimm,
    input [11:0] csr,
    input [2:0] func3,
    output isIntrPC,
    output [63:0] IntrPC,
    output reg [63:0] dout
);

    reg [63:0] mepc,mtvec,mstatus,mie,mip;
    reg [63:0] mcase /*verilator public*/;
    reg isCSRw;
    
    // /* verilator lint_off UNUSED */
    // reg readme   /*verilator public_flat_rd*/; 
    // /* verilator lint_on UNUSED */
    // initial begin
    //   readme=1'b1;
    // end

    always @(*) begin
        if(timer_irq) 
            timerIntr_raise(mcaseIn);
    end

    initial begin
        mip=64'd0;
    end

    //timer intr
    wire mstatus_MIE=mstatus[3];
    wire mie_MTIE=mie[7];
    wire timer_irq=clint_mtip&mstatus_MIE&mie_MTIE;

    wire irq_raise=isecall|timer_irq;

    wire mip_MTIP=mip[7];
    assign mip_MTIP=clint_mtip;//只有有外部中断、软件中断和定时器中断 mip就置位（即使全局中断和局部中断屏蔽mie）

    //ecall mret
    wire isecall=(!((|csr)|(|func3)))&IntrEn;

    reg [63:0] eNo;

    MuxKeyInternal #(2,2,64,1) CSRwEn(.out(eNo),.key({timer_irq,isecall}),.default_out(64'd0),.lut({
    2'b01,64'd11,//ecall
    2'b10,64'h8000_0000_0000_0007//timer
    }));    

    wire ismret=(!(|func3))&(csr==12'b0011000_00010);

    assign IntrPC=irq_raise?mtvec:(ismret?mepc:pc);

    assign isIntrPC=(IntrEn&ismret)|irq_raise;

    //decode csr
    wire ismtvec=(csr==12'h305)?1'b1:1'b0;
    wire ismepc=(csr==12'h341|isecall|timer_irq)?1'b1:1'b0;
    wire ismcase=(csr==12'h342|isecall|timer_irq)?1'b1:1'b0;
    wire ismstatus=(csr==12'h300|ismret)?1'b1:1'b0;
    wire ismie=(csr==12'h304)?1'b1:1'b0;
    wire ismip=(csr==12'h344)?1'b1:1'b0;


    assign dout=ismtvec?mtvec:(ismepc?mepc:(ismcase?mcase:(ismstatus?mstatus:(ismie?mie:(ismip?mip:64'd0)))));//改成查找表形式

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
                          ismret?{mstatus[63:8],1'b1,mstatus[6:4],mstatus_MPIE,mstatus[2:0]}:                       
                          csrWData;

    Reg #(64,64'd0) mtvecReg(.clk(clk),.rst(1'b0),.din(csrWData),.dout(mtvec),.wen(ismtvec&IntrEn));
    Reg #(64,64'd0) mepcReg(.clk(clk),.rst(1'b0),.din(mepcIn),.dout(mepc),.wen((ismepc&IntrEn)|irq_raise));
    Reg #(64,64'd0) mcaseReg(.clk(clk),.rst(1'b0),.din(mcaseIn),.dout(mcase),.wen((ismcase&IntrEn)|irq_raise));
    Reg #(64,64'ha00001800) mstatusReg(.clk(clk),.rst(1'b0),.din(mstatusIn),.dout(mstatus),.wen((ismstatus&IntrEn)|irq_raise));
    Reg #(64,64'd0) mieReg(.clk(clk),.rst(1'b0),.din(csrWData),.dout(mie),.wen(ismie&IntrEn));

endmodule    



    // //csrrw csrrs
    // MuxKeyInternal #(7,3,1,1) CSRwEn(.out(isCSRw),.key(func3),.default_out(1'b0),.lut({
    // 3'b001,1'b1,//csrrw
    // 3'b010,1'b1,//csrrs
    // 3'b000,1'b1,//ecall ebreak(没有ismepc)
    // 3'b011,1'b1,//csrrc
    // 3'b101,1'b1,//scrrwi
    // 3'b110,1'b1,//scrrsi
    // 3'b111,1'b1//scrrci
    // }));
    
    // MuxKeyInternal #(6,3,64,1) mcaseDataSrc(.out(mcaseWData),.key(func3),.default_out(eNo),.lut({//default  ecall timer
    // 3'b001,R_rs1,
    // 3'b010,dout|R_rs1,
    // 3'b011,dout&(~R_rs1),//csrrc
    // 3'b101,{dout[63:5],zimm},//csrrwi
    // 3'b110,dout|{59'd0,zimm,},//csrrsi
    // 3'b111,dout&(~{59'd0,zimm,})//scrrci
    // }));

    // MuxKeyInternal #(6,3,64,1) mepcDataSrc(.out(mepcWData),.key(func3),.default_out(pc),.lut({
    // 3'b001,R_rs1,
    // 3'b010,dout|R_rs1,
    // 3'b011,dout&(~R_rs1),//csrrc
    // 3'b101,{dout[63:5],zimm},//csrrwi
    // 3'b110,dout|{59'd0,zimm,},//csrrsi
    // 3'b111,dout&(~{59'd0,zimm,})//scrrci
    // }));