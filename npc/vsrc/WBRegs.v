module WBRegs(
    input
);


//(reg有数据但是将被读取|没有数据)&(当前数据处理完毕)
assign lsu_ready=((lsu_valid&wb_ready)|(!lsu_valid));

wire lsu_valid_next=lsu_valid&(!wb_ready)|//数据没被读取
                    (( (lsu_valid&wb_ready)|(!lsu_valid) )&( lsu_ready&exu_valid));

Reg #(1,'d0) lsu_valid_reg(clk,rst,lsu_valid_next,lsu_valid,1'b1);

//（reg有数据但将被读取|reg没数据）&（有新数据且没有数据冲突）
wire popline_wen=((lsu_valid&wb_ready)|(!lsu_valid))&(exu_valid&lsu_ready);

Reg #(1,'d0) wb_IntrEn_reg(clk,rst,IntrEn_i,IntrEn_o,popline_wen);
Reg #(`RegWidth,'d0) wb_pc_reg(clk,rst,lsu_pc,pc_o,popline_wen);
Reg #(`RegWidth,'d0) wb_Rrs1_reg(clk,rst,R_rs1_i,R_rs1_o,popline_wen);
Reg #(1,'d0) wb_mtip_reg(clk,rst,clint_mtip_next,clint_mtip,popline_wen);
Reg #(`INSTWide,'d0) wb_inst_reg(clk,rst,lsu_inst,inst_o,popline_wen);
Reg #(`RegWidth,'d0) wb_alures_reg(clk,rst,addr,ALUres_o,popline_wen);
Reg #(1,'d0) wb_regwr_reg(clk,rst,RegWr_i,RegWr_o,popline_wen);
Reg #(2,'d0) wb_regdataSrc_reg(clk,rst,RegWdata_src_i,RegWdata_src_o,popline_wen);
Reg #(`RegWidth,'d0) wb_dataout_reg(clk,rst,dataout_d,dataout,popline_wen);

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

endmodule