module Intr(
    input clk,
    input IntrEn,
    input [63:0] pc,
    input [63:0] R_rs1,
    input [11:0] csr,
    input [2:0] func3,
    output isIntrPC,
    output [63:0] IntrPC,
    output reg [63:0] dout
);

    reg [63:0] mepc,mcase,mtvec,mstatus;
    reg isCSRw;

    //ecall mret
    wire isecall=!((|csr)|(|func3));

    reg [63:0] eNo;

    assign eNo=isecall?64'd11:64'hefffffff_ffff_ffff;
    
    wire ismret=(!(|func3))&(csr==12'b0011000_00010);

    assign IntrPC=isecall?mtvec:(ismret?mepc:pc);

    assign isIntrPC=IntrEn&(isecall|ismret);

    //csrrw csrrs
    MuxKeyInternal #(3,3,1,1) CSRwEn(.out(isCSRw),.key(func3),.default_out(1'b0),.lut({
    3'b001,1'b1,//csrrw
    3'b010,1'b1,//csrrs
    3'b000,1'b1//ecall ebreak(没有ismepc)
    }));

    wire ismtvec=(csr==12'h305)?1'b1:1'b0;
    wire ismepc=(csr==12'h341|isecall)?1'b1:1'b0;
    wire ismcase=(csr==12'h342|isecall)?1'b1:1'b0;
    wire ismstatus=(csr==12'h300)?1'b1:1'b0;

    assign dout=ismtvec?mtvec:(ismepc?mepc:(ismcase?mcase:(ismstatus?mstatus:64'd0)));//改成查找表形式

    reg [63:0] mcaseData,mepcData,csrData;

    MuxKeyInternal #(3,3,64,1) mcaseDataSrc(.out(mcaseData),.key(func3),.default_out(64'd0),.lut({
    3'b001,R_rs1,
    3'b010,dout|R_rs1,
    3'b000,eNo
    }));

    MuxKeyInternal #(3,3,64,1) mepcDataSrc(.out(mepcData),.key(func3),.default_out(64'd0),.lut({
    3'b001,R_rs1,
    3'b010,dout|R_rs1,
    3'b000,pc
    }));

    MuxKeyInternal #(2,3,64,1) scrDataSrc(.out(csrData),.key(func3),.default_out(64'd0),.lut({
    3'b001,R_rs1,
    3'b010,dout|R_rs1
    }));

    Reg #(64,0) mtvecReg(.clk(clk),.rst(1'b0),.din(csrData),.dout(mtvec),.wen(ismtvec&isCSRw&IntrEn));
    Reg #(64,0) mepcReg(.clk(clk),.rst(1'b0),.din(mepcData),.dout(mepc),.wen(ismepc&isCSRw&IntrEn));
    Reg #(64,0) mcaseReg(.clk(clk),.rst(1'b0),.din(mcaseData),.dout(mcase),.wen(ismcase&isCSRw&IntrEn));
    Reg #(64,64'ha00001800) mstatusReg(.clk(clk),.rst(1'b0),.din(csrData),.dout(mstatus),.wen(ismstatus&isCSRw&IntrEn));

endmodule    