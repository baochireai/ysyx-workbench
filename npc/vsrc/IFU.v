`include "defines.v"

module IFU(
    input clk,
    input rst,
    //from ex
    input isIntrPC,
    input is_jump,
    input [`RegWidth-1:0] JumpPc,
    input [`RegWidth-1:0] IntrPC,

    //frome ctrl 
    input pipeline_hold,

    //AXI-lite to imem
    output reg ARVALID,
    output reg [`MemAddrBus-1:0] ARADDR,
    input ARREADY,

    output reg RREADY,
    input [`MemDataBus-1:0] inst_i,
    input RVALID,
    
    // data to IDU
    output reg [`INSTWide-1:0] inst_o,
    output reg [63:0] pc_o,

    // handshake to IDU
    output reg ifu_valid,
    input id_ready,
    //handshake to EX
    output ifu_ready,
    input ex_valid
);

wire [`RegWidth-1:0]  dpc=isIntrPC?IntrPC:(is_jump?JumpPc:pc_o+4);
wire [`RegWidth-1:0] NextPC;
reg [`INSTWide-1:0] inst;
//需要寄存的数据（Inst,pc）

//什么时候将新数据写入寄存器（ID读取了寄存器有效，写入新数据有失效）
//wire popline_wen=ifu_valid&id_ready;
//什么时候可以接收新数据(写入寄存器)

Reg #(`RegWidth, 64'h000000007ffffffc) if_pre_pc_reg(.clk(clk),.rst(rst),.din(dpc),.dout(NextPC),.wen(1'b1));
Reg #(`RegWidth, 64'h000000007ffffff8) if_pc_reg(.clk(clk),.rst(rst),.din(NextPC),.dout(pc_o),.wen(1'b1));
Reg #(`INSTWide, 32'd0) if_inst_reg(.clk(clk),.rst(rst),.din(inst),.dout(inst_o),.wen(1'b1));


//ARADDR
always @(posedge clk ) begin
    if(rst) begin
        ARVALID<=1'b1;
        ARADDR<=32'h80000000;
    end 
    else begin
        ARVALID<=1'b1;
        ARADDR<=dpc[`MemAddrBus-1:0];
    end
end

//RDATA
assign  RREADY=1'b1;

always @(posedge clk ) begin
    if(rst) begin
        inst<='d0;
    end
    else if(RVALID&RREADY) begin
        inst<=(NextPC[2:0]==3'd0)?inst_i[31:0]:inst_i[63:32];
    end
    else begin
        inst<=inst;
    end
end


endmodule