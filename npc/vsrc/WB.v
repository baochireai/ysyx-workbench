module WB(
    input clk,
    input rst,

    //dcache
    input[2:0] MemOP,
    input [63:0] mrdata,
    input cache_valid,

    //ctrl
    input IntrEn,
    input clint_mtip,
    input [1:0] Wdata_src,
    input RegWr,
    //data
    input[`RegWidth-1:0] wb_pc,
    input[`INSTWide-1:0] wb_inst,
    input[`RegWidth-1:0] ALUres,
    // input[`RegWidth-1:0] MemOut,
    input[`RegWidth-1:0] R_rs1_i,
    //to witf
    output wb_en,
    //dout
    output isIntrPC,
    output [`RegWidth-1:0] IntrPC,

    //reg read
    input[4:0] rs1,
    input[4:0] rs2,
    output[`RegWidth-1:0] R_rs1,
    output[`RegWidth-1:0] R_rs2,
    //handshakes
    input wb_valid,
    output wb_allowin,
    output wb_valid,
    input ifu_ready
);

wire [63:0] MemOut;

MuxKeyInternal #(4,2,64, 1) sext (.out(MemOut),.key(MemOP[1:0]),.default_out(64'd0),.lut({
    2'd0,mrdata[63:0],
    2'd1,(isSign==1'b1)?({{32{mrdata[31]}},mrdata[31:0]}):{32'd0,mrdata[31:0]},
    2'd2,(isSign==1'b1)?({{48{mrdata[15]}},mrdata[15:0]}):{48'd0,mrdata[15:0]},
    2'd3,(isSign==1'b1)?({{56{mrdata[7]}},mrdata[7:0]}):{56'd0,mrdata[7:0]}
}));

wire wb_ready_go = ~(|MemOP) | cache_valid ;

assign wb_allowin = !wb_valid | wb_ready_go ;

assign wb_en = wb_valid && wb_ready_go && RegWr && ( wb_inst[11:7] != 5'd0 );

wire [`RegWidth-1:0] IntrOut,RegWdata,IntrPC_next;

wire isIntrPC_next;

Intr IntrUnit(.clk(
    clk),.IntrEn(IntrEn),.clint_mtip(clint_mtip),.pc(wb_pc),.R_rs1(R_rs1_i),.zimm(wb_inst[19:15]),.csr(wb_inst[31:20]),.func3(wb_inst[14:12]),
    .isIntrPC(isIntrPC_next),.IntrPC(IntrPC_next),.dout(IntrOut));


MuxKeyInternal #(3,2,64,1) RegWsrcMux(.out(RegWdata),.key(Wdata_src),.default_out(64'd0),.lut({
    2'd0,ALUres,
    2'd1,MemOut,//clint memory map
    2'd2,IntrOut
}));

wire regfile_we = wb_valid && RegWr && ( ~(|MemOP) || cache_valid );

RegisterFile RegisterFile(.rs1(rs1),.rs2(rs2),.waddr(wb_inst[11:7]),.R_rs1(R_rs1),.R_rs2(R_rs2),
            .clk(clk),.wdata(RegWdata),.wen(regfile_we));

Reg #(1,'d0) wb_isIntrPC_reg(clk,rst,isIntrPC_next,isIntrPC,1'b1);
Reg #(`RegWidth,'d0) wb_IntrPC_reg(clk,rst,IntrPC_next,IntrPC,1'b1);


endmodule