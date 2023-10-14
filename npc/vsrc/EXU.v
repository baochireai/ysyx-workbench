module EXU(
    input clk,
    input rst,

    // 1. inputs from pre stage 

    // 1.1 ctrl from id to ALU
    input                   ALUAsr      ,
    input [1:0]             ALUBsr      ,
    input [4:0]             ALUct       ,
    input                   isTuncate   ,
    input                   isSext      ,

    // 1.2 branch ctrl 
    input [2:0]             Branch,

    // 1.3 mem op    
    input [2:0]             MemOP_i,
    input                   MemWr_i,

    // 1.4 regs wb    
    input                   RegWr_i,
    input [1:0]             RegSrc_i,//写回地址 

    // 1.5 intr inst
    input                   i_isecall ,
    input                   i_ismret  ,
    input                   i_iscsr   ,    

    // pipeline ctrl
    input                   stall_exu_store ,
    // 1.6 operate data    
    input [`RegWidth-1:0]   R_rs1,
    input [`RegWidth-1:0]   R_rs2,//mem wdata
    input [`RegWidth-1:0]   Imm,
    input [`INSTWide-1:0]   exu_inst,
    input [`RegWidth-1:0]   exu_pc,  

    // 2. dcache req
    output                  req,
    output                  op,
    output [1:0]            size,
    output [63:0]           addr,
    output [63:0]           wdata,
    output [7:0]            wstrb,
    input                   cache_ready,

    // 3. outputs for next stage 
    // 3.1 mem op(cache rdata process)
    output [2:0]            MemOP,
    output                  MemWr,
    output [`RegWidth-1:0]  o_R_rs2,
    // 3.2 alu res for reg wb(mem addr->cache req)
    output [`RegWidth-1:0] ALUres,
    // 3.3 reg wb
    output                  Regwr,
    output [1:0]            RegSrc,
    // 3.4 inst&pc
    output[`INSTWide-1:0]   inst,
    output [`RegWidth-1:0]  pc,
    // 3.5 intr/csr
    output                   o_isecall ,
    output                   o_ismret  ,
    output                   o_iscsr   ,
    // 3.6 csr wdata
    output [`RegWidth-1:0]  o_R_rs1, 

    // 4. outputs for pre stage
    // 4.1 for ifu 
    output [`RegWidth-1:0]  NextPC,
    // 4.2 flush pipe
    output                  is_jump,

    // 5. handshakes
    input                   exu_valid,
    output                  exu_ready,
    input                   lsu_allow_in,
    output                  exu_to_lsu_valid,

    input pipeline_flush 
);
    // 1. shake hands
    wire exu_ready_go = (~isMem) || req && cache_ready;
    assign exu_ready = (~exu_valid) | exu_ready_go & lsu_allow_in;
    assign exu_to_lsu_valid = exu_valid && exu_ready_go ;
    
    // 2. Cache req
    wire isMem = (MemOP != 3'b011 ) && (~isclint) && exu_valid ; 
    wire isclint = (addr>=64'h2000000&addr<=64'h200BFFF)?1'b1:1'b0;
    assign req = isMem && (!stall_exu_store) && (!pipeline_flush) ;
    assign op = MemWr_i;
    assign size = MemOP_i[1:0];//0->8 1->4  2->2 3->1   -->  3->8 2->4 1->2 0->1
    assign addr = ALUres;
    assign wdata = R_rs2;
    MuxKeyInternal #(4,2,8, 1) MemWstrb_decode (.out(wstrb),.key(MemOP_i[1:0]),.default_out(8'd0),.lut({
        2'd0,8'b0000_0001,
        2'd1,8'b0000_0011,
        2'd2,8'b0000_1111,
        2'd3,8'b1111_1111
    }));

    // 3. ALU 

    wire Less,Zero;
    ALU ex_alu( .ALUct(ALUct),.isTuncate(isTuncate),.isSext(isSext),.ALUAsr(ALUAsr),.ALUBsr(ALUBsr),
                .PC(exu_pc),.R_rs1(R_rs1),.Imm(Imm),.R_rs2(R_rs2),
                .ALUres(ALUres),.Less(Less),.Zero(Zero) );

    // 4. Branch for ifu
    wire is_jump_d;
    GenNextPC GenNextPC(    .Branch(Branch),
                            .Less(Less),.Zero(Zero),
                            .imm(Imm),.PC(exu_pc),.R_rs1(R_rs1),
                            .NextPC(NextPC),.is_jump(is_jump_d) );

    assign is_jump = is_jump_d & exu_to_lsu_valid & lsu_allow_in;

    // 5. pipeline forward
    // 5.1 mem ctrl
    assign MemOP = MemOP_i;
    assign MemWr = MemWr_i;
    assign o_R_rs2 = R_rs2 ;
    // 5.2 regsfile wb
    assign Regwr = RegWr_i;
    assign RegSrc = RegSrc_i;
    // 5.3 inst&pc
    assign inst = exu_inst;
    assign pc = exu_pc;
    // 5.4 csr wdata
    assign o_R_rs1 =R_rs1;
    // 5.5 intr/csr
    assign o_isecall = i_isecall;
    assign o_ismret  = i_ismret ;
    assign o_iscsr   = i_iscsr  ;

endmodule