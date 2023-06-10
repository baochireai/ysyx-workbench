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
    //input pipeline_hold,

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
    input idu_ready,
    //handshake to wb
    output ifu_ready,
    input wb_valid
);

// assign ifu_valid_next=popline_wen;

// assign ifu_ready=1'b1;

// wire popline_wen=idu_ready;

assign ifu_ready=1'b1;
//reg有数据且没被读取读|reg没有数据
//reg有数据且没被读取|reg没有数据或者有数据且将被读取但有新数据到来
wire ifu_valid_next=(ifu_valid&!idu_ready)|
                    ((!ifu_valid)|(ifu_valid&idu_ready));

Reg #(1,'d0) ifu_valid_reg(clk,rst,ifu_valid_next,ifu_valid,1'b1);
//（reg有数据且将被读取|reg没有数据）&（有新数据）
wire popline_wen=((ifu_valid&idu_ready)|(!ifu_valid));

wire [`RegWidth-1:0]  dpc=isIntrPC?IntrPC:(is_jump?JumpPc:NextPC+4);
wire [`RegWidth-1:0] NextPC;

wire [`INSTWide-1:0] inst=inst_i[31:0];//(NextPC[2:0]==3'd0)?inst_i[31:0]:inst_i[63:32];
//需要寄存的数据（Inst,pc）

//什么时候将新数据写入寄存器（ID读取了寄存器有效，写入新数据有失效）
//wire popline_wen=ifu_valid&id_ready;
//什么时候可以接收新数据(写入寄存器)

Reg #(`RegWidth, 64'h000000007ffffffc) if_pre_pc_reg(.clk(clk),.rst(rst),.din(dpc),.dout(NextPC),.wen(popline_wen));
Reg #(`RegWidth, 64'h000000007ffffff8) id_pc_reg(.clk(clk),.rst(rst),.din(NextPC),.dout(pc_o),.wen(popline_wen));

Reg #(`INSTWide, 32'd0) if_inst_reg(.clk(clk),.rst(rst),.din(inst),.dout(inst_o),.wen(popline_wen));

Reg #(1, 'd0) if_valid_reg(.clk(clk),.rst(rst),.din(ifu_valid_next),.dout(ifu_valid),.wen(1'b1));


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

// always @(posedge clk ) begin
//     if(rst) begin
//         inst<='d0;
//     end
//     else if(RVALID&RREADY) begin
//         inst<=;
//     end
//     else begin
//         inst<=inst;
//     end
// end




endmodule