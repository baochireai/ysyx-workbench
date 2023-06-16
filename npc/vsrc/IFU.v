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

assign ifu_ready=1'b1;

wire popline_wen=((ifu_valid&idu_ready)|(!ifu_valid));

wire flush_pipeline=is_jump;
//pre-fetch

wire nextpc_valid=((ifu_valid&!idu_ready)|
                    ((!ifu_valid)|(ifu_valid&idu_ready)));
reg nextpc_valid_r;
Reg #(1,'d0) nextpc_valid_reg(clk,rst,nextpc_valid,nextpc_valid_r,1'b1);
    //give inst fetch signals
wire [`RegWidth-1:0]  dpc=isIntrPC?IntrPC:(is_jump?JumpPc:NextPC+4);

wire [`RegWidth-1:0] NextPC;

    //give inst request every cycle,expect idu is not ready & ifu_valid
assign ARVALID=((ifu_valid&idu_ready)|(!ifu_valid));
assign ARADDR=dpc[`MemAddrBus-1:0];
assign  RREADY=1'b1;

Reg #(`RegWidth, 64'h000000007ffffffc) if_pre_pc_reg(.clk(clk),.rst(rst),.din(dpc),.dout(NextPC),.wen(popline_wen));

//store inst
wire [`INSTWide-1:0] inst=(NextPC[2:0]==3'd0)?inst_i[31:0]:inst_i[63:32];

Reg #(1,'d0) ifu_valid_reg(clk,rst|flush_pipeline,nextpc_valid_r,ifu_valid,1'b1);

Reg #(`RegWidth, 64'h000000007ffffff8) id_pc_reg(.clk(clk),.rst(rst),.din(NextPC),.dout(pc_o),.wen(popline_wen));

Reg #(`INSTWide, 32'd0) if_inst_reg(.clk(clk),.rst(rst),.din(inst),.dout(inst_o),.wen(popline_wen));


//ARADDR
// always @(posedge clk ) begin
//     if(rst) begin
//         ARVALID<=1'b0;
//         ARADDR<=32'd0;
//     end 
//     else begin
//         ARVALID<=1'b1;//组合给出读取地址
//         ARADDR<=dpc[`MemAddrBus-1:0];
//     end
// end


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