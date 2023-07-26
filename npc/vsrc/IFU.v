`include "defines.v"

module IFU(
    input clk,
    input rst,
    //from ex
    input isIntrPC,
    input is_jump,
    input [`RegWidth-1:0] JumpPc,
    input [`RegWidth-1:0] IntrPC,
    input isebreak,
    //frome ctrl 
    //input pipeline_hold,

//ifu <--> icache
    output req,
    output ['MemAddrBus-1:0] addr_inst,
    input Cache_ready,

    input inst_valid,
    input ['INSTWide-1:0] inst_i,
    output inst_fetch_ready,

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

    wire [`RegWidth-1:0] prefetch_pc;
    wire [`RegWidth-1:0] NextPC;

    //inst fetch req
    assign req=1'b1;
    assign addr_inst=prefetch_pc[31:0];
        
    wire Cache_req_handshake=req&&Cache_ready;

    //PC Generate
    assign prefetch_pc=isIntrPC?IntrPC:(is_jump?JumpPc:NextPC+4);

    Reg #(`RegWidth, 64'h000000007ffffffc) if_pre_pc_reg(.clk(clk),.rst(rst),.din(prefetch_pc),.dout(NextPC),.wen(Cache_req_handshake));

    Reg #(`RegWidth, 64'h000000007ffffff8) id_pc_reg(.clk(clk),.rst(rst),.din(NextPC),.dout(pc_o),.wen(popline_wen));

    //inst fetch
    assign inst_fetch_ready=ifu_valid&&idu_ready||~ifu_valid;

    wire [`INSTWide-1:0] inst=(NextPC[2:0]==3'd0)?inst_i[31:0]:inst_i[63:32];

    Reg #(`INSTWide, 32'd0) if_inst_reg(.clk(clk),.rst(rst),.din(inst),.dout(inst_o),.wen(popline_wen));


    wire valid_next=inst_valid&&(ifu_valid&&idu_ready||~ifu_valid)||(ifu_valid&&(~idu_ready));

    Reg #(1,'d0) ifu_valid_reg(clk,rst|flush_pipeline|isebreak,valid_next,ifu_valid,1'b1);


    assign ifu_ready=1'b1;

    wire popline_wen=(inst_valid&&(ifu_valid&&idu_ready||~ifu_valid))&&(~isebreak);

    wire flush_pipeline=is_jump;


endmodule