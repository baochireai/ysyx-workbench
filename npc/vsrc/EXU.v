module EXU(
    input clk,
    input rst,
    
    input[`INSTWide-1:0] exu_inst,
    input [`RegWidth-1:0] exu_pc,
    //ctrl from id to ALU
    input ALUAsr,
    input [1:0] ALUBsr,
    input [4:0] ALUct,
    input isTuncate,
    input isSext,
    input Regwr_i,
    input [1:0] RegSrc,//写回地址    
    //ctrl from id to Mem
    input [2:0] MemOP_i,
    input MemWr_i,
    input IntrEn,    
    //ctrl from id to Branch
    input [2:0] Branch,
    //data    
    input [`RegWidth-1:0] R_rs1,
    input [`RegWidth-1:0] R_rs2,
    input [`RegWidth-1:0] Imm,
    //decache
    output req,
    output op,
    output [1:0] size,
    output [63:0] addr,
    output [63:0] wdata,
    output [7:0] wstrb,
    input cache_ready,
    //to WB
    output [`RegWidth-1:0] wb_ALUres,
    output Regwr_o,
    //to Mem
    output [`RegWidth-1:0] R_rs2_o,
    output [`RegWidth-1:0] R_rs1_o,
    output [2:0] MemOP_o,
    output MemWr_o,
    output IntrEn_o,

    output [`RegWidth-1:0] NextPC,
    output is_jump,

    output [1:0] RegSrc_o,

    output[`INSTWide-1:0] inst_o,
    output [`RegWidth-1:0] pc_o,
    //handshakes
    input exu_valid,
    output exu_allowin,
    input wb_allowin,
    output wb_valid
);


//dcache_rw_ctrl
// wire req_r;

// wire req_set=idu_valid&&(|MemOP);

// wire req_clr=req && cache_ready;

// wire req_we = req_set || req_clr;

// assign req = req_set || req_r;

// wire req_next = req && ( ~cache_ready );

// Reg #(1,'d0) exu_req_buffer(clk,rst,req_next,req_r,req_we);//标志req尚未处理
assign req=idu_valid&&(|MemOP);
assign op=MemWr_i;
assign size=~MemOP[1:0];//0->8 1->4  2->2 3->1   -->  3->8 2->4 1->2 0->1
assign addr=ALUres;
assign wdata=R_rs2;

MuxKeyInternal #(4,2,8, 1) MemWstrb_decode (.out(wstrb),.key(MemOP[1:0]),.default_out(8'd0),.lut({
    2'd3,8'b0000_0001,
    2'd2,8'b0000_0011,
    2'd1,8'b0000_1111,
    2'd0,8'b1111_1111
}));

wire exu_ready_go=(~req)||req&&cache_ready;//没有访存请求或者有且cache接收请求

//(当前没有数据)||(有数据且处理完将送往下一级)
assign exu_allowin= ! exu_valid || exu_ready_go && wb_allowin;

wire exu2wb_valid = exu_valid&&exu_ready_go;

Reg #(1,'d0) exu_valid_reg(clk,rst,exu2wb_valid,wb_valid,wb_allowin);

wire popline_wen=exu2wb_valid&&wb_allowin;

wire [`RegWidth-1:0] ALUres;
wire Less,Zero;

// pipeline regs
Reg #(`RegWidth,'d0) wb_ALUres_reg(clk,rst,ALUres,wb_ALUres,popline_wen);
Reg #(`RegWidth,'d0) wb_R_rs2_reg(clk,rst,R_rs2,R_rs2_o,popline_wen);
Reg #(`RegWidth,'d0) wb_R_rs1_reg(clk,rst,R_rs1,R_rs1_o,popline_wen);

Reg #(3,'d0) wb_MemOP_reg(clk,rst,MemOP_i,MemOP_o,popline_wen);
Reg #(1,'d0) wb_MemWr_reg(clk,rst,MemWr_i,MemWr_o,popline_wen);
Reg #(1,'d0) wb_IntrEn_reg(clk,rst,IntrEn,IntrEn_o,popline_wen);

Reg #(`INSTWide,'d0) mem_Inst_reg(clk,rst,exu_inst,inst_o,popline_wen);
Reg #(`RegWidth,'d0) mem_pc_reg(clk,rst,exu_pc,pc_o,popline_wen);

Reg #(2,'d0) wb_RegSrc_reg(clk,rst,RegSrc,RegSrc_o,popline_wen);
Reg #(1,'d0) wb_Regwr_reg(clk,rst,Regwr_i,Regwr_o,popline_wen);



ALU ex_alu(.ALUAsr(ALUAsr),.PC(exu_pc),.R_rs1(R_rs1),.ALUBsr(ALUBsr), .Imm(Imm),.R_rs2(R_rs2),
    .ALUct(ALUct),.isTuncate(isTuncate),.isSext(isSext),.ALUres(ALUres),.Less(Less),.Zero(Zero)
);

wire is_jump_d;
GenNextPC GenNextPC(.Branch(Branch),.imm(Imm),.PC(exu_pc),.R_rs1(R_rs1),.NextPC(NextPC),.Less(Less),.Zero(Zero),.is_jump(is_jump_d));

assign is_jump=is_jump_d&idu_valid&exu_ready;

endmodule