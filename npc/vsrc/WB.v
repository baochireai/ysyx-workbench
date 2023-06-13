module WB(
    input clk,
    input rst,

    //ctrl
    input IntrEn,
    input clint_mtip,
    input [1:0] Wdata_src,
    input RegWr,
    //data
    input[`RegWidth-1:0] wb_pc,
    input[`INSTWide-1:0] wb_inst,
    input[`RegWidth-1:0] ALUres,
    input[`RegWidth-1:0] MemOut,
    input[`RegWidth-1:0] R_rs1_i,

    //dout
    output isIntrPC,
    output [`RegWidth-1:0] IntrPC,

    //reg read
    input[4:0] rs1,
    input[4:0] rs2,
    output[`RegWidth-1:0] R_rs1,
    output[`RegWidth-1:0] R_rs2,
    //handshakes
    input lsu_valid,
    output wb_ready,
    output wb_valid,
    input ifu_ready
);

assign wb_ready=1'b1;
assign wb_valid=1'b1;

wire [`RegWidth-1:0] IntrOut,RegWdata,IntrPC_next;
wire isIntrPC_next;
Intr IntrUnit(.clk(clk),.IntrEn(IntrEn),.clint_mtip(clint_mtip),.pc(wb_pc),.R_rs1(R_rs1_i),.zimm(wb_inst[19:15]),.csr(wb_inst[31:20]),.func3(wb_inst[14:12]),
    .isIntrPC(isIntrPC_next),.IntrPC(IntrPC_next),.dout(IntrOut));


MuxKeyInternal #(3,2,64,1) RegWsrcMux(.out(RegWdata),.key(Wdata_src),.default_out(64'd0),.lut({
    2'd0,ALUres,
    2'd1,MemOut,//clint memory map
    2'd2,IntrOut
}));

RegisterFile RegisterFile(.rs1(rs1),.rs2(rs2),.waddr(wb_inst[11:7]),.R_rs1(R_rs1),.R_rs2(R_rs2),
            .clk(clk),.wdata(RegWdata),.wen(RegWr));

Reg #(1,'d0) wb_isIntrPC_reg(clk,rst,isIntrPC_next,isIntrPC,1'b1);
Reg #(`RegWidth,'d0) wb_IntrPC_reg(clk,rst,IntrPC_next,IntrPC,1'b1);

endmodule