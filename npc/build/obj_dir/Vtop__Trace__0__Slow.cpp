// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+981,"Inst", false,-1, 31,0);
    tracep->declQuad(c+982,"pc", false,-1, 63,0);
    tracep->declBit(c+984,"valid", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+234,"Inst", false,-1, 31,0);
    tracep->declQuad(c+235,"pc", false,-1, 63,0);
    tracep->declBit(c+237,"valid", false,-1);
    tracep->declQuad(c+238,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+240,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+989,"Extop", false,-1, 2,0);
    tracep->declQuad(c+242,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+990,"waddr", false,-1, 63,0);
    tracep->declBit(c+992,"Less", false,-1);
    tracep->declBit(c+993,"Zero", false,-1);
    tracep->declQuad(c+994,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+996,"RegWdata", false,-1, 63,0);
    tracep->declBit(c+998,"IntrEn", false,-1);
    tracep->declQuad(c+999,"IntrOut", false,-1, 63,0);
    tracep->declBit(c+244,"clint_mtip", false,-1);
    tracep->declBit(c+1001,"clint_we", false,-1);
    tracep->declBit(c+1002,"clint_re", false,-1);
    tracep->declQuad(c+1003,"clint_dout", false,-1, 63,0);
    tracep->declBus(c+245,"rs1", false,-1, 4,0);
    tracep->declBus(c+246,"rs2", false,-1, 4,0);
    tracep->declBus(c+247,"rd", false,-1, 4,0);
    tracep->declBit(c+248,"RegWr_d", false,-1);
    tracep->declBit(c+249,"is_jump", false,-1);
    tracep->declQuad(c+250,"ifu_JumpPc", false,-1, 63,0);
    tracep->declBit(c+252,"ifu_isIntrPC", false,-1);
    tracep->declQuad(c+253,"ifu_IntrPC", false,-1, 63,0);
    tracep->declBit(c+255,"ifu_arvalid", false,-1);
    tracep->declBus(c+256,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+1005,"ram_arready", false,-1);
    tracep->declQuad(c+257,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+259,"ram_rvalid", false,-1);
    tracep->declBus(c+260,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+1006,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+1007,"AWVALID", false,-1);
    tracep->declBit(c+261,"AWREADY", false,-1);
    tracep->declQuad(c+1008,"WDATA", false,-1, 63,0);
    tracep->declBit(c+1010,"WVALID", false,-1);
    tracep->declBit(c+262,"WREADY", false,-1);
    tracep->declBus(c+1011,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+263,"BVALID", false,-1);
    tracep->declBus(c+264,"BRESP", false,-1, 1,0);
    tracep->declBit(c+1012,"BREADY", false,-1);
    tracep->declQuad(c+265,"id_pc", false,-1, 63,0);
    tracep->declBus(c+267,"id_inst", false,-1, 31,0);
    tracep->declBit(c+268,"ifu_valid", false,-1);
    tracep->declBit(c+269,"idu_valid", false,-1);
    tracep->declBit(c+270,"idu_ready", false,-1);
    tracep->declBit(c+271,"exu_valid", false,-1);
    tracep->declBit(c+272,"exu_ready", false,-1);
    tracep->declBit(c+237,"lsu_valid", false,-1);
    tracep->declBit(c+273,"lsu_ready", false,-1);
    tracep->declBit(c+274,"wb_valid", false,-1);
    tracep->declBit(c+275,"wb_ready", false,-1);
    tracep->declBit(c+276,"exu_isTuncate", false,-1);
    tracep->declBit(c+277,"exu_isSext", false,-1);
    tracep->declQuad(c+278,"ex_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+280,"ex_Rrs2", false,-1, 63,0);
    tracep->declBit(c+282,"exu_IntrEn", false,-1);
    tracep->declBus(c+283,"exu_ALUct", false,-1, 4,0);
    tracep->declQuad(c+284,"exu_Imm", false,-1, 63,0);
    tracep->declBit(c+286,"exu_ALUAsr", false,-1);
    tracep->declBus(c+287,"exu_ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+288,"ex_pc", false,-1, 63,0);
    tracep->declBus(c+290,"ex_inst", false,-1, 31,0);
    tracep->declBit(c+291,"exu_RegWr", false,-1);
    tracep->declBus(c+292,"exu_Branch", false,-1, 2,0);
    tracep->declBus(c+293,"exu_MemOP", false,-1, 2,0);
    tracep->declBit(c+294,"exu_MemWr", false,-1);
    tracep->declBus(c+295,"exu_RegSrc", false,-1, 1,0);
    tracep->declBit(c+296,"isRAW", false,-1);
    tracep->declBit(c+297,"witf_full", false,-1);
    tracep->declBit(c+298,"witf_empty", false,-1);
    tracep->declBit(c+299,"idu_isebreak", false,-1);
    tracep->declQuad(c+300,"mem_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+302,"mem_Rrs2", false,-1, 63,0);
    tracep->declBus(c+304,"mem_MemOP", false,-1, 2,0);
    tracep->declBit(c+305,"mem_MemWr", false,-1);
    tracep->declBit(c+306,"mem_IntrEn", false,-1);
    tracep->declBus(c+307,"lsu_RegSrc", false,-1, 1,0);
    tracep->declBit(c+308,"lsu_Regwr", false,-1);
    tracep->declQuad(c+309,"lsu_pc", false,-1, 63,0);
    tracep->declBus(c+311,"lsu_inst", false,-1, 31,0);
    tracep->declBit(c+312,"wb_IntrEn", false,-1);
    tracep->declBus(c+313,"wb_RegSrc", false,-1, 1,0);
    tracep->declBit(c+314,"wb_RegWr", false,-1);
    tracep->declQuad(c+235,"wb_pc", false,-1, 63,0);
    tracep->declBus(c+234,"wb_inst", false,-1, 31,0);
    tracep->declQuad(c+315,"wb_ALUres", false,-1, 63,0);
    tracep->declQuad(c+317,"memout", false,-1, 63,0);
    tracep->declQuad(c+319,"wb_Rrs1", false,-1, 63,0);
    tracep->declBit(c+321,"witf_wb_en", false,-1);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+290,"exu_inst", false,-1, 31,0);
    tracep->declQuad(c+288,"exu_pc", false,-1, 63,0);
    tracep->declBit(c+286,"ALUAsr", false,-1);
    tracep->declBus(c+287,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+283,"ALUct", false,-1, 4,0);
    tracep->declBit(c+276,"isTuncate", false,-1);
    tracep->declBit(c+277,"isSext", false,-1);
    tracep->declBit(c+291,"Regwr_i", false,-1);
    tracep->declBus(c+293,"MemOP_i", false,-1, 2,0);
    tracep->declBit(c+294,"MemWr_i", false,-1);
    tracep->declBit(c+282,"IntrEn", false,-1);
    tracep->declBus(c+292,"Branch", false,-1, 2,0);
    tracep->declBus(c+295,"RegSrc", false,-1, 1,0);
    tracep->declQuad(c+278,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+280,"R_rs2", false,-1, 63,0);
    tracep->declQuad(c+284,"Imm", false,-1, 63,0);
    tracep->declQuad(c+242,"wb_ALUres", false,-1, 63,0);
    tracep->declBit(c+308,"Regwr_o", false,-1);
    tracep->declQuad(c+302,"R_rs2_o", false,-1, 63,0);
    tracep->declQuad(c+300,"R_rs1_o", false,-1, 63,0);
    tracep->declBus(c+304,"MemOP_o", false,-1, 2,0);
    tracep->declBit(c+305,"MemWr_o", false,-1);
    tracep->declBit(c+306,"IntrEn_o", false,-1);
    tracep->declQuad(c+250,"NextPC", false,-1, 63,0);
    tracep->declBit(c+249,"is_jump", false,-1);
    tracep->declBus(c+307,"RegSrc_o", false,-1, 1,0);
    tracep->declBus(c+311,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+309,"pc_o", false,-1, 63,0);
    tracep->declBit(c+269,"idu_valid", false,-1);
    tracep->declBit(c+272,"exu_ready", false,-1);
    tracep->declBit(c+273,"lsu_ready", false,-1);
    tracep->declBit(c+271,"exu_valid", false,-1);
    tracep->declBit(c+322,"exu_valid_next", false,-1);
    tracep->declBit(c+323,"popline_wen", false,-1);
    tracep->declQuad(c+324,"ALUres", false,-1, 63,0);
    tracep->declBit(c+326,"Less", false,-1);
    tracep->declBit(c+327,"Zero", false,-1);
    tracep->declBit(c+328,"is_jump_d", false,-1);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+292,"Branch", false,-1, 2,0);
    tracep->declQuad(c+284,"imm", false,-1, 63,0);
    tracep->declQuad(c+288,"PC", false,-1, 63,0);
    tracep->declQuad(c+278,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+326,"Less", false,-1);
    tracep->declBit(c+327,"Zero", false,-1);
    tracep->declQuad(c+250,"NextPC", false,-1, 63,0);
    tracep->declBit(c+328,"is_jump", false,-1);
    tracep->declBit(c+329,"PCAsrc", false,-1);
    tracep->declBit(c+330,"PCBsrc", false,-1);
    tracep->declQuad(c+331,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+333,"Bsrc", false,-1, 63,0);
    tracep->declQuad(c+335,"NextPCp", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+1013,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1014,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1015,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+337,"out", false,-1, 1,0);
    tracep->declBus(c+292,"key", false,-1, 2,0);
    tracep->declBus(c+1017,"default_out", false,-1, 1,0);
    tracep->declQuad(c+338,"lut", false,-1, 34,0);
    tracep->declBus(c+1018,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+340+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+2+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+347+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+354,"lut_out", false,-1, 1,0);
    tracep->declBit(c+355,"hit", false,-1);
    tracep->declBus(c+1019,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("jump_check ");
    tracep->declBus(c+1013,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1014,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+328,"out", false,-1, 0,0);
    tracep->declBus(c+292,"key", false,-1, 2,0);
    tracep->declBus(c+1020,"default_out", false,-1, 0,0);
    tracep->declBus(c+356,"lut", false,-1, 27,0);
    tracep->declBus(c+1021,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+357+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+364+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+371,"lut_out", false,-1, 0,0);
    tracep->declBit(c+372,"hit", false,-1);
    tracep->declBus(c+1019,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBit(c+286,"ALUAsr", false,-1);
    tracep->declQuad(c+288,"PC", false,-1, 63,0);
    tracep->declQuad(c+278,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+287,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+284,"Imm", false,-1, 63,0);
    tracep->declQuad(c+280,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+283,"ALUct", false,-1, 4,0);
    tracep->declBit(c+276,"isTuncate", false,-1);
    tracep->declBit(c+277,"isSext", false,-1);
    tracep->declQuad(c+324,"ALUres", false,-1, 63,0);
    tracep->declBit(c+326,"Less", false,-1);
    tracep->declBit(c+327,"Zero", false,-1);
    tracep->declQuad(c+373,"ALUA", false,-1, 63,0);
    tracep->declQuad(c+375,"ALUB", false,-1, 63,0);
    tracep->declBit(c+377,"US_S", false,-1);
    tracep->declBit(c+378,"Sub_Add", false,-1);
    tracep->declBit(c+377,"A_L", false,-1);
    tracep->declBit(c+379,"L_R", false,-1);
    tracep->declQuad(c+380,"adder", false,-1, 63,0);
    tracep->declBit(c+382,"Carry", false,-1);
    tracep->declBit(c+383,"Overflow", false,-1);
    tracep->declBit(c+384,"lessS", false,-1);
    tracep->declBit(c+385,"lessUS", false,-1);
    tracep->declQuad(c+386,"shift", false,-1, 63,0);
    tracep->declQuad(c+388,"XOR", false,-1, 63,0);
    tracep->declQuad(c+390,"OR", false,-1, 63,0);
    tracep->declQuad(c+392,"AND", false,-1, 63,0);
    tracep->declQuad(c+394,"MUL", false,-1, 63,0);
    tracep->declQuad(c+396,"DIV", false,-1, 63,0);
    tracep->declQuad(c+398,"REM", false,-1, 63,0);
    tracep->declQuad(c+400,"ALUout", false,-1, 63,0);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+373,"A", false,-1, 63,0);
    tracep->declQuad(c+375,"B", false,-1, 63,0);
    tracep->declBit(c+378,"Cin", false,-1);
    tracep->declQuad(c+380,"Result", false,-1, 63,0);
    tracep->declBit(c+382,"Carry", false,-1);
    tracep->declBit(c+383,"Overflow", false,-1);
    tracep->declBit(c+327,"zero", false,-1);
    tracep->declQuad(c+402,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1023,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+373,"din", false,-1, 63,0);
    tracep->declBus(c+404,"shamtin", false,-1, 5,0);
    tracep->declBit(c+377,"A_L", false,-1);
    tracep->declBit(c+379,"L_R", false,-1);
    tracep->declBit(c+276,"isTuncate", false,-1);
    tracep->declQuad(c+386,"dout", false,-1, 63,0);
    tracep->declBus(c+405,"shamt", false,-1, 5,0);
    tracep->declQuad(c+406,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+1021,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1015,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+386,"out", false,-1, 63,0);
    tracep->declBus(c+408,"key", false,-1, 1,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+409,"lut", false,-1, 263,0);
    tracep->declBus(c+1026,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+418+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+430+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+438,"lut_out", false,-1, 63,0);
    tracep->declBit(c+440,"hit", false,-1);
    tracep->declBus(c+1027,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+1014,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1015,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+375,"out", false,-1, 63,0);
    tracep->declBus(c+287,"key", false,-1, 1,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+441,"lut", false,-1, 197,0);
    tracep->declBus(c+1026,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+448+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+457+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+463,"lut_out", false,-1, 63,0);
    tracep->declBit(c+465,"hit", false,-1);
    tracep->declBus(c+1028,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+1029,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1021,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+400,"out", false,-1, 63,0);
    tracep->declBus(c+466,"key", false,-1, 3,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+467,"lut", false,-1, 1087,0);
    tracep->declBus(c+1030,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+501+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+549+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+581,"lut_out", false,-1, 63,0);
    tracep->declBit(c+583,"hit", false,-1);
    tracep->declBus(c+1031,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+1021,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1015,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+396,"out", false,-1, 63,0);
    tracep->declBus(c+584,"key", false,-1, 1,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+585,"lut", false,-1, 263,0);
    tracep->declBus(c+1026,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+594+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+39+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+606+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+614,"lut_out", false,-1, 63,0);
    tracep->declBit(c+616,"hit", false,-1);
    tracep->declBus(c+1027,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+1021,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1015,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+398,"out", false,-1, 63,0);
    tracep->declBus(c+584,"key", false,-1, 1,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+617,"lut", false,-1, 263,0);
    tracep->declBus(c+1026,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+626+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+638+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+646,"lut_out", false,-1, 63,0);
    tracep->declBit(c+648,"hit", false,-1);
    tracep->declBus(c+1027,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("exu_valid_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+322,"din", false,-1, 0,0);
    tracep->declBus(c+271,"dout", false,-1, 0,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_Inst_reg ");
    tracep->declBus(c+1033,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+290,"din", false,-1, 31,0);
    tracep->declBus(c+311,"dout", false,-1, 31,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_pc_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+288,"din", false,-1, 63,0);
    tracep->declQuad(c+309,"dout", false,-1, 63,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_ALUres_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+324,"din", false,-1, 63,0);
    tracep->declQuad(c+242,"dout", false,-1, 63,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+282,"din", false,-1, 0,0);
    tracep->declBus(c+306,"dout", false,-1, 0,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemOP_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 2,0);
    tracep->declBus(c+304,"dout", false,-1, 2,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemWr_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+294,"din", false,-1, 0,0);
    tracep->declBus(c+305,"dout", false,-1, 0,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs1_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+278,"din", false,-1, 63,0);
    tracep->declQuad(c+300,"dout", false,-1, 63,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs2_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+280,"din", false,-1, 63,0);
    tracep->declQuad(c+302,"dout", false,-1, 63,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_RegSrc_reg ");
    tracep->declBus(c+1015,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+295,"din", false,-1, 1,0);
    tracep->declBus(c+307,"dout", false,-1, 1,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_Regwr_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+291,"din", false,-1, 0,0);
    tracep->declBus(c+308,"dout", false,-1, 0,0);
    tracep->declBit(c+323,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBit(c+249,"flush_pipeline", false,-1);
    tracep->declBus(c+267,"id_inst", false,-1, 31,0);
    tracep->declQuad(c+265,"id_pc", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs1_i", false,-1, 63,0);
    tracep->declQuad(c+240,"R_rs2_i", false,-1, 63,0);
    tracep->declBit(c+296,"isRAW", false,-1);
    tracep->declBit(c+297,"witf_full", false,-1);
    tracep->declBus(c+283,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+284,"Imm", false,-1, 63,0);
    tracep->declBit(c+286,"ALUAsr", false,-1);
    tracep->declBus(c+287,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+290,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+288,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+278,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+280,"R_rs2_o", false,-1, 63,0);
    tracep->declBus(c+292,"Branch", false,-1, 2,0);
    tracep->declBit(c+294,"MemWr", false,-1);
    tracep->declBus(c+293,"MemOP", false,-1, 2,0);
    tracep->declBus(c+295,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+276,"isTuncate", false,-1);
    tracep->declBit(c+277,"isSext", false,-1);
    tracep->declBit(c+282,"IntrEn", false,-1);
    tracep->declBit(c+291,"RegWr", false,-1);
    tracep->declBus(c+245,"rs1", false,-1, 4,0);
    tracep->declBus(c+246,"rs2", false,-1, 4,0);
    tracep->declBus(c+247,"rd", false,-1, 4,0);
    tracep->declBit(c+248,"disp_en", false,-1);
    tracep->declBit(c+299,"isebreak", false,-1);
    tracep->declBit(c+268,"ifu_valid", false,-1);
    tracep->declBit(c+270,"idu_ready", false,-1);
    tracep->declBit(c+269,"idu_valid", false,-1);
    tracep->declBit(c+272,"exu_ready", false,-1);
    tracep->declBit(c+649,"idu_valid_next", false,-1);
    tracep->declBit(c+650,"popline_wen", false,-1);
    tracep->declBus(c+651,"ALUct_d", false,-1, 4,0);
    tracep->declQuad(c+652,"Imm_d", false,-1, 63,0);
    tracep->declBit(c+654,"ALUAsr_d", false,-1);
    tracep->declBus(c+655,"ALUBsr_d", false,-1, 1,0);
    tracep->declBus(c+656,"Branch_d", false,-1, 2,0);
    tracep->declBit(c+657,"MemWr_d", false,-1);
    tracep->declBus(c+658,"MemOP_d", false,-1, 2,0);
    tracep->declBus(c+659,"RegSrc_d", false,-1, 1,0);
    tracep->declBit(c+660,"isTuncate_d", false,-1);
    tracep->declBit(c+661,"isSext_d", false,-1);
    tracep->declBit(c+662,"IntrEn_d", false,-1);
    tracep->declBit(c+663,"RegWr_d", false,-1);
    tracep->declBit(c+664,"isebreak_d", false,-1);
    tracep->pushNamePrefix("ContrGenU ");
    tracep->declBus(c+267,"id_inst", false,-1, 31,0);
    tracep->declBus(c+651,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+652,"Imm", false,-1, 63,0);
    tracep->declBit(c+654,"ALUAsr", false,-1);
    tracep->declBus(c+655,"ALUBsr", false,-1, 1,0);
    tracep->declBit(c+663,"RegWr", false,-1);
    tracep->declBus(c+656,"Branch", false,-1, 2,0);
    tracep->declBit(c+657,"MemWr", false,-1);
    tracep->declBus(c+658,"MemOP", false,-1, 2,0);
    tracep->declBus(c+659,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+660,"isTuncate", false,-1);
    tracep->declBit(c+661,"isSext", false,-1);
    tracep->declBit(c+662,"IntrEn", false,-1);
    tracep->declBit(c+664,"isebreak", false,-1);
    tracep->declBus(c+665,"Extop", false,-1, 2,0);
    tracep->declBus(c+666,"opcode", false,-1, 6,0);
    tracep->declBus(c+667,"func3", false,-1, 2,0);
    tracep->declBus(c+668,"func7", false,-1, 6,0);
    tracep->declBit(c+669,"isconditionalJump", false,-1);
    tracep->declBus(c+670,"BranchOpt", false,-1, 2,0);
    tracep->declBit(c+671,"isJal", false,-1);
    tracep->declBit(c+672,"isJalr", false,-1);
    tracep->declBit(c+673,"isMul", false,-1);
    tracep->declBus(c+674,"IntALUct", false,-1, 4,0);
    tracep->declBus(c+675,"MulALUct", false,-1, 4,0);
    tracep->declBit(c+676,"islui", false,-1);
    tracep->declBit(c+677,"isauipc", false,-1);
    tracep->declBit(c+678,"isMemW", false,-1);
    tracep->declBit(c+679,"isMemR", false,-1);
    tracep->pushNamePrefix("ImmGenU ");
    tracep->declBus(c+680,"Inst", false,-1, 31,7);
    tracep->declBus(c+665,"Extop", false,-1, 2,0);
    tracep->declQuad(c+652,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+1018,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1014,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+652,"out", false,-1, 63,0);
    tracep->declBus(c+665,"key", false,-1, 2,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+681,"lut", false,-1, 334,0);
    tracep->declBus(c+1034,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+692+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+47+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+707+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+717,"lut_out", false,-1, 63,0);
    tracep->declBit(c+719,"hit", false,-1);
    tracep->declBus(c+1035,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+1015,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1015,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+659,"out", false,-1, 1,0);
    tracep->declBus(c+666,"key", false,-1, 6,0);
    tracep->declBus(c+1036,"default_out", false,-1, 1,0);
    tracep->declBus(c+1037,"lut", false,-1, 17,0);
    tracep->declBus(c+1038,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+52+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+54+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+720,"lut_out", false,-1, 1,0);
    tracep->declBit(c+721,"hit", false,-1);
    tracep->declBus(c+1039,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+1040,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+665,"out", false,-1, 2,0);
    tracep->declBus(c+666,"key", false,-1, 6,0);
    tracep->declBus(c+1041,"default_out", false,-1, 2,0);
    tracep->declArray(c+1042,"lut", false,-1, 119,0);
    tracep->declBus(c+1046,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+70+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+82+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+722,"lut_out", false,-1, 2,0);
    tracep->declBit(c+723,"hit", false,-1);
    tracep->declBus(c+1047,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+1016,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+662,"out", false,-1, 0,0);
    tracep->declBus(c+666,"key", false,-1, 6,0);
    tracep->declBus(c+1020,"default_out", false,-1, 0,0);
    tracep->declBus(c+1048,"lut", false,-1, 7,0);
    tracep->declBus(c+1049,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+94+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+95+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+96+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+724,"lut_out", false,-1, 0,0);
    tracep->declBit(c+725,"hit", false,-1);
    tracep->declBus(c+1050,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+1021,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1014,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+663,"out", false,-1, 0,0);
    tracep->declBus(c+665,"key", false,-1, 2,0);
    tracep->declBus(c+1020,"default_out", false,-1, 0,0);
    tracep->declBus(c+1051,"lut", false,-1, 15,0);
    tracep->declBus(c+1021,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+97+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+101+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+105+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+726,"lut_out", false,-1, 0,0);
    tracep->declBit(c+727,"hit", false,-1);
    tracep->declBus(c+1027,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_ALUAsr_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+654,"din", false,-1, 0,0);
    tracep->declBus(c+286,"dout", false,-1, 0,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUBsr_reg ");
    tracep->declBus(c+1015,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+655,"din", false,-1, 1,0);
    tracep->declBus(c+287,"dout", false,-1, 1,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUct_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1052,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+651,"din", false,-1, 4,0);
    tracep->declBus(c+283,"dout", false,-1, 4,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Branch_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1053,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+656,"din", false,-1, 2,0);
    tracep->declBus(c+292,"dout", false,-1, 2,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Imm_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+652,"din", false,-1, 63,0);
    tracep->declQuad(c+284,"dout", false,-1, 63,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Inst_reg ");
    tracep->declBus(c+1033,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+267,"din", false,-1, 31,0);
    tracep->declBus(c+290,"dout", false,-1, 31,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_IntrEn_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+662,"din", false,-1, 0,0);
    tracep->declBus(c+282,"dout", false,-1, 0,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemOP_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+658,"din", false,-1, 2,0);
    tracep->declBus(c+293,"dout", false,-1, 2,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemWr_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+657,"din", false,-1, 0,0);
    tracep->declBus(c+294,"dout", false,-1, 0,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegSrc_reg ");
    tracep->declBus(c+1015,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+659,"din", false,-1, 1,0);
    tracep->declBus(c+295,"dout", false,-1, 1,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegWr_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1054,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+663,"din", false,-1, 0,0);
    tracep->declBus(c+291,"dout", false,-1, 0,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs1_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+238,"din", false,-1, 63,0);
    tracep->declQuad(c+278,"dout", false,-1, 63,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs2_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+240,"din", false,-1, 63,0);
    tracep->declQuad(c+280,"dout", false,-1, 63,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isSext_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+661,"din", false,-1, 0,0);
    tracep->declBus(c+277,"dout", false,-1, 0,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isTuncate_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1054,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+660,"din", false,-1, 0,0);
    tracep->declBus(c+276,"dout", false,-1, 0,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isebreak_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+664,"din", false,-1, 0,0);
    tracep->declBus(c+299,"dout", false,-1, 0,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_pc_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+265,"din", false,-1, 63,0);
    tracep->declQuad(c+288,"dout", false,-1, 63,0);
    tracep->declBit(c+650,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_valid_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+985,"rst", false,-1);
    tracep->declBus(c+649,"din", false,-1, 0,0);
    tracep->declBus(c+269,"dout", false,-1, 0,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBit(c+252,"isIntrPC", false,-1);
    tracep->declBit(c+249,"is_jump", false,-1);
    tracep->declQuad(c+250,"JumpPc", false,-1, 63,0);
    tracep->declQuad(c+253,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+299,"isebreak", false,-1);
    tracep->declBit(c+255,"ARVALID", false,-1);
    tracep->declBus(c+256,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+1005,"ARREADY", false,-1);
    tracep->declBit(c+1,"RREADY", false,-1);
    tracep->declQuad(c+257,"inst_i", false,-1, 63,0);
    tracep->declBit(c+259,"RVALID", false,-1);
    tracep->declBus(c+267,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+265,"pc_o", false,-1, 63,0);
    tracep->declBit(c+268,"ifu_valid", false,-1);
    tracep->declBit(c+270,"idu_ready", false,-1);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+274,"wb_valid", false,-1);
    tracep->declBit(c+728,"popline_wen", false,-1);
    tracep->declBit(c+249,"flush_pipeline", false,-1);
    tracep->declBit(c+729,"nextpc_valid", false,-1);
    tracep->declBit(c+730,"nextpc_valid_r", false,-1);
    tracep->declQuad(c+731,"dpc", false,-1, 63,0);
    tracep->declQuad(c+733,"NextPC", false,-1, 63,0);
    tracep->declBus(c+735,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("id_pc_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1055,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+733,"din", false,-1, 63,0);
    tracep->declQuad(c+265,"dout", false,-1, 63,0);
    tracep->declBit(c+728,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_inst_reg ");
    tracep->declBus(c+1033,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+735,"din", false,-1, 31,0);
    tracep->declBus(c+267,"dout", false,-1, 31,0);
    tracep->declBit(c+728,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pre_pc_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1057,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+731,"din", false,-1, 63,0);
    tracep->declQuad(c+733,"dout", false,-1, 63,0);
    tracep->declBit(c+728,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_valid_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+986,"rst", false,-1);
    tracep->declBus(c+730,"din", false,-1, 0,0);
    tracep->declBus(c+268,"dout", false,-1, 0,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("nextpc_valid_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+729,"din", false,-1, 0,0);
    tracep->declBus(c+730,"dout", false,-1, 0,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+242,"addr", false,-1, 63,0);
    tracep->declQuad(c+302,"wdata", false,-1, 63,0);
    tracep->declBus(c+304,"MemOP", false,-1, 2,0);
    tracep->declBit(c+305,"we", false,-1);
    tracep->declQuad(c+317,"dataout", false,-1, 63,0);
    tracep->declBit(c+244,"clint_mtip", false,-1);
    tracep->declBit(c+306,"IntrEn_i", false,-1);
    tracep->declBus(c+307,"RegWdata_src_i", false,-1, 1,0);
    tracep->declBit(c+308,"RegWr_i", false,-1);
    tracep->declBus(c+311,"lsu_inst", false,-1, 31,0);
    tracep->declQuad(c+309,"lsu_pc", false,-1, 63,0);
    tracep->declQuad(c+300,"R_rs1_i", false,-1, 63,0);
    tracep->declBit(c+312,"IntrEn_o", false,-1);
    tracep->declBus(c+313,"RegWdata_src_o", false,-1, 1,0);
    tracep->declBit(c+314,"RegWr_o", false,-1);
    tracep->declBus(c+234,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+235,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+319,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+315,"ALUres_o", false,-1, 63,0);
    tracep->declBit(c+271,"exu_valid", false,-1);
    tracep->declBit(c+273,"lsu_ready", false,-1);
    tracep->declBit(c+237,"lsu_valid", false,-1);
    tracep->declBit(c+275,"wb_ready", false,-1);
    tracep->declBit(c+736,"lsu_valid_next", false,-1);
    tracep->declBit(c+737,"popline_wen", false,-1);
    tracep->declBit(c+738,"isclint", false,-1);
    tracep->declBit(c+739,"RdEn", false,-1);
    tracep->declBit(c+740,"Datamem_we", false,-1);
    tracep->declBit(c+741,"clint_we", false,-1);
    tracep->declBit(c+742,"clint_re", false,-1);
    tracep->declQuad(c+743,"dataMem_out", false,-1, 63,0);
    tracep->declQuad(c+745,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+747,"clint_mtip_next", false,-1);
    tracep->declQuad(c+748,"dataout_d", false,-1, 63,0);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declQuad(c+242,"Addr", false,-1, 63,0);
    tracep->declBus(c+304,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+302,"DataIn", false,-1, 63,0);
    tracep->declBit(c+740,"WrEn", false,-1);
    tracep->declQuad(c+743,"DataOut", false,-1, 63,0);
    tracep->declBus(c+750,"wmask", false,-1, 7,0);
    tracep->declBit(c+751,"isSign", false,-1);
    tracep->declBit(c+752,"RdEn", false,-1);
    tracep->declBus(c+753,"shift", false,-1, 5,0);
    tracep->declArray(c+754,"data", false,-1, 127,0);
    tracep->declBus(c+758,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+1021,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1015,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1049,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+750,"out", false,-1, 7,0);
    tracep->declBus(c+759,"key", false,-1, 1,0);
    tracep->declBus(c+1059,"default_out", false,-1, 7,0);
    tracep->declQuad(c+1060,"lut", false,-1, 39,0);
    tracep->declBus(c+1046,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+109+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+113+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+117+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+760,"lut_out", false,-1, 7,0);
    tracep->declBit(c+761,"hit", false,-1);
    tracep->declBus(c+1027,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+1021,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1015,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+743,"out", false,-1, 63,0);
    tracep->declBus(c+759,"key", false,-1, 1,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+762,"lut", false,-1, 263,0);
    tracep->declBus(c+1026,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+771+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+121+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+783+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+791,"lut_out", false,-1, 63,0);
    tracep->declBit(c+793,"hit", false,-1);
    tracep->declBus(c+1027,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declQuad(c+302,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+242,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+741,"we", false,-1);
    tracep->declBit(c+742,"re", false,-1);
    tracep->declBit(c+747,"clint_mtip", false,-1);
    tracep->declQuad(c+745,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+794,"mtime", false,-1, 63,0);
    tracep->declQuad(c+796,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+798,"ismtimecmp", false,-1);
    tracep->declBit(c+799,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1062,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+1020,"rst", false,-1);
    tracep->declQuad(c+302,"din", false,-1, 63,0);
    tracep->declQuad(c+796,"dout", false,-1, 63,0);
    tracep->declBit(c+800,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu_valid_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+736,"din", false,-1, 0,0);
    tracep->declBus(c+237,"dout", false,-1, 0,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+306,"din", false,-1, 0,0);
    tracep->declBus(c+312,"dout", false,-1, 0,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_Rrs1_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+300,"din", false,-1, 63,0);
    tracep->declQuad(c+319,"dout", false,-1, 63,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_alures_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+242,"din", false,-1, 63,0);
    tracep->declQuad(c+315,"dout", false,-1, 63,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_dataout_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+748,"din", false,-1, 63,0);
    tracep->declQuad(c+317,"dout", false,-1, 63,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst_reg ");
    tracep->declBus(c+1033,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+311,"din", false,-1, 31,0);
    tracep->declBus(c+234,"dout", false,-1, 31,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mtip_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+747,"din", false,-1, 0,0);
    tracep->declBus(c+244,"dout", false,-1, 0,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_pc_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+309,"din", false,-1, 63,0);
    tracep->declQuad(c+235,"dout", false,-1, 63,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_regdataSrc_reg ");
    tracep->declBus(c+1015,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+307,"din", false,-1, 1,0);
    tracep->declBus(c+313,"dout", false,-1, 1,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_regwr_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+308,"din", false,-1, 0,0);
    tracep->declBus(c+314,"dout", false,-1, 0,0);
    tracep->declBit(c+737,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_axi_lite_u ");
    tracep->declBus(c+1033,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+1022,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+1049,"DSIZE", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"resetn", false,-1);
    tracep->declBus(c+1006,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+1007,"AWVALID", false,-1);
    tracep->declBit(c+261,"AWREADY", false,-1);
    tracep->declQuad(c+1008,"WDATA", false,-1, 63,0);
    tracep->declBit(c+1010,"WVALID", false,-1);
    tracep->declBit(c+262,"WREADY", false,-1);
    tracep->declBus(c+1011,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+263,"BVALID", false,-1);
    tracep->declBus(c+264,"BRESP", false,-1, 1,0);
    tracep->declBit(c+1012,"BREADY", false,-1);
    tracep->declBus(c+256,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+255,"ARVALID", false,-1);
    tracep->declBit(c+1005,"ARREADY", false,-1);
    tracep->declQuad(c+257,"RDATA", false,-1, 63,0);
    tracep->declBus(c+260,"RRESP", false,-1, 1,0);
    tracep->declBit(c+259,"RVALID", false,-1);
    tracep->declBit(c+1,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+125+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+801,"waddr", false,-1, 31,0);
    tracep->declBus(c+802,"raddr", false,-1, 31,0);
    tracep->declBus(c+803,"wstrb", false,-1, 7,0);
    tracep->declBit(c+804,"wdata_done", false,-1);
    tracep->declBit(c+1064,"raddr_done", false,-1);
    tracep->declBus(c+129,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("witf ");
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+245,"rs1", false,-1, 4,0);
    tracep->declBus(c+246,"rs2", false,-1, 4,0);
    tracep->declBus(c+247,"rd", false,-1, 4,0);
    tracep->declBit(c+296,"isRAW", false,-1);
    tracep->declBit(c+248,"disp_en", false,-1);
    tracep->declBit(c+321,"wb_en", false,-1);
    tracep->declBit(c+297,"witf_full", false,-1);
    tracep->declBit(c+298,"witf_empty", false,-1);
    tracep->declBus(c+805,"wptr_r", false,-1, 2,0);
    tracep->declBus(c+806,"rptr_r", false,-1, 2,0);
    tracep->declBus(c+807,"vld_r", false,-1, 7,0);
    tracep->declBus(c+808,"vld_set", false,-1, 7,0);
    tracep->declBus(c+809,"vld_clr", false,-1, 7,0);
    tracep->declBus(c+810,"vld_ena", false,-1, 7,0);
    tracep->declBus(c+811,"vld_nxt", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+812+i*1,"rdidx_r", true,(i+0), 4,0);
    }
    tracep->declBus(c+820,"rd_match_rs1idx", false,-1, 7,0);
    tracep->declBus(c+821,"rd_match_rs2idx", false,-1, 7,0);
    tracep->declBit(c+822,"witfrd_match_disprs1", false,-1);
    tracep->declBit(c+823,"witfrd_match_disprs2", false,-1);
    tracep->pushNamePrefix("depth_gt1 ");
    tracep->declBit(c+824,"wptr_flg_r", false,-1);
    tracep->declBit(c+825,"wptr_flg_nxt", false,-1);
    tracep->declBit(c+826,"wptr_flg_ena", false,-1);
    tracep->declBus(c+827,"wptr_nxt", false,-1, 2,0);
    tracep->declBit(c+828,"rptr_flg_r", false,-1);
    tracep->declBit(c+829,"rptr_flg_nxt", false,-1);
    tracep->declBit(c+830,"rptr_flg_ena", false,-1);
    tracep->declBus(c+831,"rptr_nxt", false,-1, 2,0);
    tracep->pushNamePrefix("rptr_flg_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+829,"din", false,-1, 0,0);
    tracep->declBus(c+828,"dout", false,-1, 0,0);
    tracep->declBit(c+830,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rptr_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+831,"din", false,-1, 2,0);
    tracep->declBus(c+806,"dout", false,-1, 2,0);
    tracep->declBit(c+321,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wptr_flg_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+825,"din", false,-1, 0,0);
    tracep->declBus(c+824,"dout", false,-1, 0,0);
    tracep->declBit(c+826,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wptr_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+827,"din", false,-1, 2,0);
    tracep->declBus(c+805,"dout", false,-1, 2,0);
    tracep->declBit(c+832,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[0] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 4,0);
    tracep->declBus(c+833,"dout", false,-1, 4,0);
    tracep->declBit(c+834,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+835,"din", false,-1, 0,0);
    tracep->declBus(c+836,"dout", false,-1, 0,0);
    tracep->declBit(c+837,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[1] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 4,0);
    tracep->declBus(c+838,"dout", false,-1, 4,0);
    tracep->declBit(c+839,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+840,"din", false,-1, 0,0);
    tracep->declBus(c+841,"dout", false,-1, 0,0);
    tracep->declBit(c+842,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[2] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 4,0);
    tracep->declBus(c+843,"dout", false,-1, 4,0);
    tracep->declBit(c+844,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+845,"din", false,-1, 0,0);
    tracep->declBus(c+846,"dout", false,-1, 0,0);
    tracep->declBit(c+847,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[3] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 4,0);
    tracep->declBus(c+848,"dout", false,-1, 4,0);
    tracep->declBit(c+849,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+850,"din", false,-1, 0,0);
    tracep->declBus(c+851,"dout", false,-1, 0,0);
    tracep->declBit(c+852,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[4] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 4,0);
    tracep->declBus(c+853,"dout", false,-1, 4,0);
    tracep->declBit(c+854,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+855,"din", false,-1, 0,0);
    tracep->declBus(c+856,"dout", false,-1, 0,0);
    tracep->declBit(c+857,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[5] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 4,0);
    tracep->declBus(c+858,"dout", false,-1, 4,0);
    tracep->declBit(c+859,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+860,"din", false,-1, 0,0);
    tracep->declBus(c+861,"dout", false,-1, 0,0);
    tracep->declBit(c+862,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[6] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 4,0);
    tracep->declBus(c+863,"dout", false,-1, 4,0);
    tracep->declBit(c+864,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+865,"din", false,-1, 0,0);
    tracep->declBus(c+866,"dout", false,-1, 0,0);
    tracep->declBit(c+867,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[7] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1018,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 4,0);
    tracep->declBus(c+868,"dout", false,-1, 4,0);
    tracep->declBit(c+869,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+870,"din", false,-1, 0,0);
    tracep->declBus(c+871,"dout", false,-1, 0,0);
    tracep->declBit(c+872,"wen", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__WB__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__WB__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBit(c+312,"IntrEn", false,-1);
    tracep->declBit(c+244,"clint_mtip", false,-1);
    tracep->declBus(c+313,"Wdata_src", false,-1, 1,0);
    tracep->declBit(c+314,"RegWr", false,-1);
    tracep->declQuad(c+235,"wb_pc", false,-1, 63,0);
    tracep->declBus(c+234,"wb_inst", false,-1, 31,0);
    tracep->declQuad(c+315,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+317,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+319,"R_rs1_i", false,-1, 63,0);
    tracep->declBit(c+321,"wb_en", false,-1);
    tracep->declBit(c+252,"isIntrPC", false,-1);
    tracep->declQuad(c+253,"IntrPC", false,-1, 63,0);
    tracep->declBus(c+245,"rs1", false,-1, 4,0);
    tracep->declBus(c+246,"rs2", false,-1, 4,0);
    tracep->declQuad(c+238,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+240,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+237,"lsu_valid", false,-1);
    tracep->declBit(c+275,"wb_ready", false,-1);
    tracep->declBit(c+274,"wb_valid", false,-1);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+873,"wb_valid_next", false,-1);
    tracep->declBit(c+874,"popline_wen", false,-1);
    tracep->declQuad(c+151,"IntrOut", false,-1, 63,0);
    tracep->declQuad(c+153,"RegWdata", false,-1, 63,0);
    tracep->declQuad(c+875,"IntrPC_next", false,-1, 63,0);
    tracep->declBit(c+877,"isIntrPC_next", false,-1);
    tracep->pushNamePrefix("RegWsrcMux ");
    tracep->declBus(c+1014,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1015,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+153,"out", false,-1, 63,0);
    tracep->declBus(c+313,"key", false,-1, 1,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+155,"lut", false,-1, 197,0);
    tracep->declBus(c+1026,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+162+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+130+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+171+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+177,"lut_out", false,-1, 63,0);
    tracep->declBit(c+179,"hit", false,-1);
    tracep->declBus(c+1028,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+1018,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+245,"rs1", false,-1, 4,0);
    tracep->declBus(c+246,"rs2", false,-1, 4,0);
    tracep->declBus(c+878,"waddr", false,-1, 4,0);
    tracep->declQuad(c+238,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+240,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declQuad(c+153,"wdata", false,-1, 63,0);
    tracep->declBit(c+314,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+879+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+943,"isw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrPC_reg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declQuad(c+875,"din", false,-1, 63,0);
    tracep->declQuad(c+253,"dout", false,-1, 63,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_isIntrPC_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+877,"din", false,-1, 0,0);
    tracep->declBus(c+252,"dout", false,-1, 0,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_valid_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1032,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+980,"rst", false,-1);
    tracep->declBus(c+873,"din", false,-1, 0,0);
    tracep->declBus(c+274,"dout", false,-1, 0,0);
    tracep->declBit(c+1005,"wen", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__WB__IntrUnit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__WB__IntrUnit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+312,"IntrEn", false,-1);
    tracep->declBit(c+244,"clint_mtip", false,-1);
    tracep->declQuad(c+235,"pc", false,-1, 63,0);
    tracep->declQuad(c+319,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+944,"zimm", false,-1, 4,0);
    tracep->declBus(c+945,"csr", false,-1, 11,0);
    tracep->declBus(c+946,"func3", false,-1, 2,0);
    tracep->declBit(c+877,"isIntrPC", false,-1);
    tracep->declQuad(c+875,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+151,"dout", false,-1, 63,0);
    tracep->declQuad(c+947,"mepc", false,-1, 63,0);
    tracep->declQuad(c+949,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+951,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+953,"mie", false,-1, 63,0);
    tracep->declQuad(c+1024,"mip", false,-1, 63,0);
    tracep->declQuad(c+987,"mcase", false,-1, 63,0);
    tracep->declBit(c+1065,"isCSRw", false,-1);
    tracep->declBit(c+955,"mstatus_MIE", false,-1);
    tracep->declBit(c+956,"mie_MTIE", false,-1);
    tracep->declBit(c+957,"timer_irq", false,-1);
    tracep->declBit(c+958,"irq_raise", false,-1);
    tracep->declBit(c+1020,"mip_MTIP", false,-1);
    tracep->declBit(c+959,"isecall", false,-1);
    tracep->declQuad(c+960,"eNo", false,-1, 63,0);
    tracep->declBit(c+962,"ismret", false,-1);
    tracep->declBit(c+963,"ismtvec", false,-1);
    tracep->declBit(c+964,"ismepc", false,-1);
    tracep->declBit(c+965,"ismcase", false,-1);
    tracep->declBit(c+966,"ismstatus", false,-1);
    tracep->declBit(c+967,"ismie", false,-1);
    tracep->declBit(c+968,"ismip", false,-1);
    tracep->declQuad(c+180,"csrWData", false,-1, 63,0);
    tracep->declQuad(c+182,"mepcIn", false,-1, 63,0);
    tracep->declQuad(c+184,"mcaseIn", false,-1, 63,0);
    tracep->declBit(c+969,"mstatus_MPIE", false,-1);
    tracep->declQuad(c+186,"mstatusIn", false,-1, 63,0);
    tracep->pushNamePrefix("CSRwEn ");
    tracep->declBus(c+1015,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1015,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+960,"out", false,-1, 63,0);
    tracep->declBus(c+970,"key", false,-1, 1,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+1066,"lut", false,-1, 131,0);
    tracep->declBus(c+1026,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+133+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+139+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+141+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+971,"lut_out", false,-1, 63,0);
    tracep->declBit(c+973,"hit", false,-1);
    tracep->declBus(c+1039,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcaseReg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1024,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+1020,"rst", false,-1);
    tracep->declQuad(c+184,"din", false,-1, 63,0);
    tracep->declQuad(c+987,"dout", false,-1, 63,0);
    tracep->declBit(c+974,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcReg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1024,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+1020,"rst", false,-1);
    tracep->declQuad(c+182,"din", false,-1, 63,0);
    tracep->declQuad(c+947,"dout", false,-1, 63,0);
    tracep->declBit(c+975,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mieReg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1024,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+1020,"rst", false,-1);
    tracep->declQuad(c+180,"din", false,-1, 63,0);
    tracep->declQuad(c+953,"dout", false,-1, 63,0);
    tracep->declBit(c+976,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatusReg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1071,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+1020,"rst", false,-1);
    tracep->declQuad(c+186,"din", false,-1, 63,0);
    tracep->declQuad(c+951,"dout", false,-1, 63,0);
    tracep->declBit(c+977,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvecReg ");
    tracep->declBus(c+1022,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1024,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+979,"clk", false,-1);
    tracep->declBit(c+1020,"rst", false,-1);
    tracep->declQuad(c+180,"din", false,-1, 63,0);
    tracep->declQuad(c+949,"dout", false,-1, 63,0);
    tracep->declBit(c+978,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scrDataSrc ");
    tracep->declBus(c+1023,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1014,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1022,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1016,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+180,"out", false,-1, 63,0);
    tracep->declBus(c+946,"key", false,-1, 2,0);
    tracep->declQuad(c+1024,"default_out", false,-1, 63,0);
    tracep->declArray(c+188,"lut", false,-1, 401,0);
    tracep->declBus(c+1034,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declArray(c+201+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+145+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+219+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+231,"lut_out", false,-1, 63,0);
    tracep->declBit(c+233,"hit", false,-1);
    tracep->declBus(c+1073,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("top ");
    Vtop___024root__trace_init_sub__TOP__top__0(vlSelf, tracep);
    tracep->pushNamePrefix("WB ");
    Vtop___024root__trace_init_sub__TOP__top__WB__0(vlSelf, tracep);
    tracep->pushNamePrefix("IntrUnit ");
    Vtop___024root__trace_init_sub__TOP__top__WB__IntrUnit__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<7>/*223:0*/ __Vtemp_h8ea2cfd7__0;
    VlWide<13>/*415:0*/ __Vtemp_h1699453b__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f2e9b02__0;
    VlWide<3>/*95:0*/ __Vtemp_h7583f5cb__0;
    VlWide<3>/*95:0*/ __Vtemp_hc27bab0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b84e3f2__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd5810e3__0;
    VlWide<9>/*287:0*/ __Vtemp_h2d6007f7__0;
    VlWide<7>/*223:0*/ __Vtemp_hef6aeef8__0;
    VlWide<34>/*1087:0*/ __Vtemp_h9798c001__0;
    VlWide<9>/*287:0*/ __Vtemp_hdf62be76__0;
    VlWide<9>/*287:0*/ __Vtemp_hbbbb0901__0;
    VlWide<11>/*351:0*/ __Vtemp_hf0d68bd5__0;
    VlWide<9>/*287:0*/ __Vtemp_h76b581e7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd6f60a5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h058c0b04__0;
    // Body
    bufp->fullBit(oldp+1,(vlSymsp->TOP__top.__PVT__ifu_ready));
    bufp->fullCData(oldp+2,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
    bufp->fullCData(oldp+6,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[0]),3);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[1]),3);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[2]),3);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[3]),3);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[4]),3);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[5]),3);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[6]),3);
    bufp->fullCData(oldp+16,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
    bufp->fullCData(oldp+19,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[0]),2);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[1]),2);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[2]),2);
    bufp->fullCData(oldp+23,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0]),4);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[1]),4);
    bufp->fullCData(oldp+25,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[2]),4);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[3]),4);
    bufp->fullCData(oldp+27,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[4]),4);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[5]),4);
    bufp->fullCData(oldp+29,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[6]),4);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[7]),4);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[8]),4);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[9]),4);
    bufp->fullCData(oldp+33,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[10]),4);
    bufp->fullCData(oldp+34,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[11]),4);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[12]),4);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[13]),4);
    bufp->fullCData(oldp+37,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[14]),4);
    bufp->fullCData(oldp+38,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[15]),4);
    bufp->fullCData(oldp+39,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[0]),2);
    bufp->fullCData(oldp+40,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[1]),2);
    bufp->fullCData(oldp+41,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[2]),2);
    bufp->fullCData(oldp+42,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[3]),2);
    bufp->fullCData(oldp+43,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[0]),2);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[1]),2);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[2]),2);
    bufp->fullCData(oldp+46,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[3]),2);
    bufp->fullCData(oldp+47,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+48,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+49,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+50,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullCData(oldp+51,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[4]),3);
    bufp->fullSData(oldp+52,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+53,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[1]),9);
    bufp->fullCData(oldp+54,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[0]),7);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[1]),7);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[0]),2);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[1]),2);
    bufp->fullSData(oldp+58,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+59,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+60,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+61,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+62,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+63,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+64,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+65,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+66,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[8]),10);
    bufp->fullSData(oldp+67,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[9]),10);
    bufp->fullSData(oldp+68,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[10]),10);
    bufp->fullSData(oldp+69,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[11]),10);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[0]),7);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[1]),7);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[2]),7);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[3]),7);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[4]),7);
    bufp->fullCData(oldp+75,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[5]),7);
    bufp->fullCData(oldp+76,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[6]),7);
    bufp->fullCData(oldp+77,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[7]),7);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[8]),7);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[9]),7);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[10]),7);
    bufp->fullCData(oldp+81,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[11]),7);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[0]),3);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[1]),3);
    bufp->fullCData(oldp+84,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[2]),3);
    bufp->fullCData(oldp+85,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[3]),3);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[4]),3);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[5]),3);
    bufp->fullCData(oldp+88,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[6]),3);
    bufp->fullCData(oldp+89,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[7]),3);
    bufp->fullCData(oldp+90,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[8]),3);
    bufp->fullCData(oldp+91,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[9]),3);
    bufp->fullCData(oldp+92,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[10]),3);
    bufp->fullCData(oldp+93,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[11]),3);
    bufp->fullCData(oldp+94,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list[0]),7);
    bufp->fullBit(oldp+96,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__data_list[0]));
    bufp->fullCData(oldp+97,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+101,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+103,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+104,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullBit(oldp+105,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[0]));
    bufp->fullBit(oldp+106,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[1]));
    bufp->fullBit(oldp+107,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[2]));
    bufp->fullBit(oldp+108,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[3]));
    bufp->fullSData(oldp+109,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+110,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+111,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+112,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
    bufp->fullCData(oldp+113,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
    bufp->fullCData(oldp+120,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
    bufp->fullCData(oldp+121,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[0]),2);
    bufp->fullCData(oldp+122,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[1]),2);
    bufp->fullCData(oldp+123,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[2]),2);
    bufp->fullCData(oldp+124,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__key_list[3]),2);
    bufp->fullQData(oldp+125,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[0]),64);
    bufp->fullQData(oldp+127,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[1]),64);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__i),32);
    bufp->fullCData(oldp+130,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__key_list[0]),2);
    bufp->fullCData(oldp+131,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__key_list[1]),2);
    bufp->fullCData(oldp+132,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__key_list[2]),2);
    bufp->fullWData(oldp+133,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+136,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
    bufp->fullCData(oldp+139,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
    bufp->fullCData(oldp+140,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
    bufp->fullQData(oldp+141,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
    bufp->fullQData(oldp+143,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
    bufp->fullCData(oldp+145,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
    bufp->fullCData(oldp+146,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
    bufp->fullCData(oldp+147,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
    bufp->fullCData(oldp+150,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
    bufp->fullQData(oldp+151,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout),64);
    bufp->fullQData(oldp+153,(vlSymsp->TOP__top__WB.__PVT__RegWdata),64);
    __Vtemp_h8ea2cfd7__0[0U] = (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout);
    __Vtemp_h8ea2cfd7__0[1U] = (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                        >> 0x20U));
    __Vtemp_h8ea2cfd7__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.__PVT__memout) 
                                      << 2U));
    __Vtemp_h8ea2cfd7__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__memout) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__memout 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h8ea2cfd7__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__wb_ALUres) 
                                       << 4U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__memout 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_h8ea2cfd7__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__wb_ALUres) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__wb_ALUres 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h8ea2cfd7__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__wb_ALUres 
                                         >> 0x20U)) 
                                >> 0x1cU);
    bufp->fullWData(oldp+155,(__Vtemp_h8ea2cfd7__0),198);
    bufp->fullWData(oldp+162,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+165,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+168,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+171,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+173,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+175,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+177,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__lut_out),64);
    bufp->fullBit(oldp+179,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__hit));
    bufp->fullQData(oldp+180,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData),64);
    bufp->fullQData(oldp+182,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top.__PVT__wb_pc
                                : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData)),64);
    bufp->fullQData(oldp+184,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo
                                : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData)),64);
    bufp->fullQData(oldp+186,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                ? ((0xffffffffffffff00ULL 
                                    & vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus) 
                                   | (QData)((IData)(
                                                     ((0x80U 
                                                       & ((IData)(
                                                                  (vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                                   >> 3U)) 
                                                          << 7U)) 
                                                      | ((0x70U 
                                                          & ((IData)(
                                                                     (vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                                      >> 4U)) 
                                                             << 4U)) 
                                                         | (7U 
                                                            & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus)))))))
                                : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)
                                    ? ((0xffffffffffffff00ULL 
                                        & vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus) 
                                       | (QData)((IData)(
                                                         (0x80U 
                                                          | ((0x70U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                                          >> 4U)) 
                                                                 << 4U)) 
                                                             | ((8U 
                                                                 & ((IData)(
                                                                            (vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                                                             >> 7U)) 
                                                                    << 3U)) 
                                                                | (7U 
                                                                   & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus))))))))
                                    : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData))),64);
    __Vtemp_h1699453b__0[0U] = (IData)(((~ (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                               >> 0xfU))))) 
                                        & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout));
    __Vtemp_h1699453b__0[1U] = (IData)((((~ (QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                >> 0xfU))))) 
                                         & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                        >> 0x20U));
    __Vtemp_h1699453b__0[2U] = (7U | ((IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                     >> 0xfU)))))) 
                                      << 3U));
    __Vtemp_h1699453b__0[3U] = (((IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                          | (QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                >> 0xfU)))))) 
                                 >> 0x1dU) | ((IData)(
                                                      ((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                        | (QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                              >> 0xfU))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h1699453b__0[4U] = (0x30U | (((IData)((
                                                   (0xffffffffffffffe0ULL 
                                                    & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                         >> 0xfU)))))) 
                                          << 6U) | 
                                         ((IData)((
                                                   (vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                          >> 0xfU))))) 
                                                   >> 0x20U)) 
                                          >> 0x1dU)));
    __Vtemp_h1699453b__0[5U] = (((IData)(((0xffffffffffffffe0ULL 
                                           & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                          | (QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                >> 0xfU)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      (((0xffffffffffffffe0ULL 
                                                         & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                        | (QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                              >> 0xfU))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h1699453b__0[6U] = (0x140U | (((IData)(
                                                   ((~ vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                    & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout)) 
                                           << 9U) | 
                                          ((IData)(
                                                   (((0xffffffffffffffe0ULL 
                                                      & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                     | (QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                                           >> 0xfU))))) 
                                                    >> 0x20U)) 
                                           >> 0x1aU)));
    __Vtemp_h1699453b__0[7U] = (((IData)(((~ vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                          & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout)) 
                                 >> 0x17U) | ((IData)(
                                                      (((~ vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                        & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_h1699453b__0[8U] = (0x600U | (((IData)(
                                                   (vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                    | vlSymsp->TOP__top.__PVT__wb_Rrs1)) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (((~ vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                       & vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout) 
                                                      >> 0x20U)) 
                                             >> 0x17U)));
    __Vtemp_h1699453b__0[9U] = (((IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                          | vlSymsp->TOP__top.__PVT__wb_Rrs1)) 
                                 >> 0x14U) | ((IData)(
                                                      ((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                        | vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h1699453b__0[0xaU] = (0x2000U | (((IData)(vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                              << 0xfU) 
                                             | ((IData)(
                                                        ((vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout 
                                                          | vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                                         >> 0x20U)) 
                                                >> 0x14U)));
    __Vtemp_h1699453b__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__wb_Rrs1) 
                                   >> 0x11U) | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__wb_Rrs1 
                                                         >> 0x20U)) 
                                                << 0xfU));
    __Vtemp_h1699453b__0[0xcU] = (0x8000U | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__wb_Rrs1 
                                                      >> 0x20U)) 
                                             >> 0x11U));
    bufp->fullWData(oldp+188,(__Vtemp_h1699453b__0),402);
    bufp->fullWData(oldp+201,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+204,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+207,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+210,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+213,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
    bufp->fullWData(oldp+216,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
    bufp->fullQData(oldp+219,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
    bufp->fullQData(oldp+221,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
    bufp->fullQData(oldp+223,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
    bufp->fullQData(oldp+225,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
    bufp->fullQData(oldp+227,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
    bufp->fullQData(oldp+229,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
    bufp->fullQData(oldp+231,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
    bufp->fullBit(oldp+233,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__hit));
    bufp->fullIData(oldp+234,(vlSymsp->TOP__top.__PVT__wb_inst),32);
    bufp->fullQData(oldp+235,(vlSymsp->TOP__top.__PVT__wb_pc),64);
    bufp->fullBit(oldp+237,(vlSymsp->TOP__top.__PVT__lsu_valid));
    bufp->fullQData(oldp+238,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                              [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+240,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                              [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+242,(vlSymsp->TOP__top.__PVT__ALUres),64);
    bufp->fullBit(oldp+244,(vlSymsp->TOP__top.__PVT__clint_mtip));
    bufp->fullCData(oldp+245,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+246,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+247,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+248,(((IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__RegWr_d) 
                             & ((~ (IData)(vlSymsp->TOP__top.__PVT__is_jump)) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__popline_wen) 
                                   & (0U != (0x1fU 
                                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                                >> 7U))))))));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__top.__PVT__is_jump));
    bufp->fullQData(oldp+250,(((0ULL == vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)),64);
    bufp->fullBit(oldp+252,(vlSymsp->TOP__top__WB.__PVT__isIntrPC));
    bufp->fullQData(oldp+253,(vlSymsp->TOP__top__WB.__PVT__IntrPC),64);
    bufp->fullBit(oldp+255,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
    bufp->fullIData(oldp+256,((IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc)),32);
    bufp->fullQData(oldp+257,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+259,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+260,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+261,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+264,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullQData(oldp+265,(vlSymsp->TOP__top.__PVT__id_pc),64);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__top.__PVT__id_inst),32);
    bufp->fullBit(oldp+268,(vlSymsp->TOP__top.__PVT__ifu_valid));
    bufp->fullBit(oldp+269,(vlSymsp->TOP__top.__PVT__idu_valid));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__top.__PVT__idu_ready));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__top.__PVT__exu_valid));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top.__PVT__exu_ready));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__top.__PVT__lsu_ready));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__top__WB.__PVT__wb_valid));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top__WB.__PVT__wb_ready));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__top.__PVT__exu_isTuncate));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__top.__PVT__exu_isSext));
    bufp->fullQData(oldp+278,(vlSymsp->TOP__top.__PVT__ex_Rrs1),64);
    bufp->fullQData(oldp+280,(vlSymsp->TOP__top.__PVT__ex_Rrs2),64);
    bufp->fullBit(oldp+282,(vlSymsp->TOP__top.__PVT__exu_IntrEn));
    bufp->fullCData(oldp+283,(vlSymsp->TOP__top.__PVT__exu_ALUct),5);
    bufp->fullQData(oldp+284,(vlSymsp->TOP__top.__PVT__exu_Imm),64);
    bufp->fullBit(oldp+286,(vlSymsp->TOP__top.__PVT__exu_ALUAsr));
    bufp->fullCData(oldp+287,(vlSymsp->TOP__top.__PVT__exu_ALUBsr),2);
    bufp->fullQData(oldp+288,(vlSymsp->TOP__top.__PVT__ex_pc),64);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__top.__PVT__ex_inst),32);
    bufp->fullBit(oldp+291,(vlSymsp->TOP__top.__PVT__exu_RegWr));
    bufp->fullCData(oldp+292,(vlSymsp->TOP__top.__PVT__exu_Branch),3);
    bufp->fullCData(oldp+293,(vlSymsp->TOP__top.__PVT__exu_MemOP),3);
    bufp->fullBit(oldp+294,(vlSymsp->TOP__top.__PVT__exu_MemWr));
    bufp->fullCData(oldp+295,(vlSymsp->TOP__top.__PVT__exu_RegSrc),2);
    bufp->fullBit(oldp+296,(vlSymsp->TOP__top.__PVT__isRAW));
    bufp->fullBit(oldp+297,(vlSymsp->TOP__top.__PVT__witf_full));
    bufp->fullBit(oldp+298,((((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r) 
                              == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r)) 
                             & ((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r) 
                                == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
    bufp->fullBit(oldp+299,(vlSymsp->TOP__top.__PVT__idu_isebreak));
    bufp->fullQData(oldp+300,(vlSymsp->TOP__top.__PVT__mem_Rrs1),64);
    bufp->fullQData(oldp+302,(vlSymsp->TOP__top.__PVT__mem_Rrs2),64);
    bufp->fullCData(oldp+304,(vlSymsp->TOP__top.__PVT__mem_MemOP),3);
    bufp->fullBit(oldp+305,(vlSymsp->TOP__top.__PVT__mem_MemWr));
    bufp->fullBit(oldp+306,(vlSymsp->TOP__top.__PVT__mem_IntrEn));
    bufp->fullCData(oldp+307,(vlSymsp->TOP__top.__PVT__lsu_RegSrc),2);
    bufp->fullBit(oldp+308,(vlSymsp->TOP__top.__PVT__lsu_Regwr));
    bufp->fullQData(oldp+309,(vlSymsp->TOP__top.__PVT__lsu_pc),64);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__top.__PVT__lsu_inst),32);
    bufp->fullBit(oldp+312,(vlSymsp->TOP__top.__PVT__wb_IntrEn));
    bufp->fullCData(oldp+313,(vlSymsp->TOP__top.__PVT__wb_RegSrc),2);
    bufp->fullBit(oldp+314,(vlSymsp->TOP__top.__PVT__wb_RegWr));
    bufp->fullQData(oldp+315,(vlSymsp->TOP__top.__PVT__wb_ALUres),64);
    bufp->fullQData(oldp+317,(vlSymsp->TOP__top.__PVT__memout),64);
    bufp->fullQData(oldp+319,(vlSymsp->TOP__top.__PVT__wb_Rrs1),64);
    bufp->fullBit(oldp+321,(vlSymsp->TOP__top__WB.__PVT__wb_en));
    bufp->fullBit(oldp+322,((((~ (IData)(vlSymsp->TOP__top.__PVT__lsu_ready)) 
                              & (IData)(vlSymsp->TOP__top.__PVT__exu_valid)) 
                             | ((IData)(vlSymsp->TOP__top.__PVT__exu_ready) 
                                & (IData)(vlSymsp->TOP__top.__VdfgTmp_h6b23342a__0)))));
    bufp->fullBit(oldp+323,(vlSymsp->TOP__top.__PVT__EXU__DOT__popline_wen));
    bufp->fullQData(oldp+324,(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
                                ? ((IData)(vlSymsp->TOP__top.__PVT__exu_isSext)
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)))
                                    : (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)))
                                : vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)),64);
    bufp->fullBit(oldp+326,(vlSymsp->TOP__top.__PVT__EXU__DOT__Less));
    bufp->fullBit(oldp+327,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))))));
    bufp->fullBit(oldp+328,(vlSymsp->TOP__top.__PVT__EXU__DOT__is_jump_d));
    bufp->fullBit(oldp+329,((1U & ((IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+330,((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+331,(((2U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__exu_Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+333,(((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__ex_pc
                                : vlSymsp->TOP__top.__PVT__ex_Rrs1)),64);
    bufp->fullQData(oldp+335,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp),64);
    bufp->fullCData(oldp+337,(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+338,((QData)((IData)((0x898537eU 
                                               | ((((0U 
                                                     != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder)
                                                     ? 1U
                                                     : 3U) 
                                                   << 0x1eU) 
                                                  | ((((0U 
                                                        != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder)
                                                        ? 3U
                                                        : 1U) 
                                                      << 0x19U) 
                                                     | ((((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less)
                                                           ? 3U
                                                           : 1U) 
                                                         << 0xfU) 
                                                        | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less)
                                                             ? 1U
                                                             : 3U) 
                                                           << 0xaU)))))))),35);
    bufp->fullCData(oldp+340,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+344,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+345,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+346,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+347,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+348,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+349,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+350,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+351,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+352,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+353,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+354,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+355,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+356,((0x248adfU | ((0x1000000U 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))) 
                                                << 0x18U)) 
                                            | (((IData)(
                                                        (0U 
                                                         != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder)) 
                                                << 0x14U) 
                                               | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less) 
                                                   << 0xcU) 
                                                  | (0x100U 
                                                     & ((~ (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less)) 
                                                        << 8U))))))),28);
    bufp->fullCData(oldp+357,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+358,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+359,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+360,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+361,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+362,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+363,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
    bufp->fullBit(oldp+364,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
    bufp->fullBit(oldp+365,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
    bufp->fullBit(oldp+366,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
    bufp->fullBit(oldp+367,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
    bufp->fullBit(oldp+368,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
    bufp->fullBit(oldp+369,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
    bufp->fullBit(oldp+370,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
    bufp->fullBit(oldp+371,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
    bufp->fullBit(oldp+372,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit));
    bufp->fullQData(oldp+373,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA),64);
    bufp->fullQData(oldp+375,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB),64);
    bufp->fullBit(oldp+377,((1U & ((IData)(vlSymsp->TOP__top.__PVT__exu_ALUct) 
                                   >> 3U))));
    bufp->fullBit(oldp+378,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add));
    bufp->fullBit(oldp+379,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__exu_ALUct)))));
    bufp->fullQData(oldp+380,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder),64);
    __Vtemp_h0f2e9b02__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA);
    __Vtemp_h0f2e9b02__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                        >> 0x20U));
    __Vtemp_h0f2e9b02__0[2U] = 0U;
    __Vtemp_h7583f5cb__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin);
    __Vtemp_h7583f5cb__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                        >> 0x20U));
    __Vtemp_h7583f5cb__0[2U] = 0U;
    __Vtemp_hc27bab0e__0[0U] = vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add;
    __Vtemp_hc27bab0e__0[1U] = 0U;
    __Vtemp_hc27bab0e__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h2b84e3f2__0, __Vtemp_h7583f5cb__0, __Vtemp_hc27bab0e__0);
    VL_ADD_W(3, __Vtemp_hdd5810e3__0, __Vtemp_h0f2e9b02__0, __Vtemp_h2b84e3f2__0);
    bufp->fullBit(oldp+382,((1U & __Vtemp_hdd5810e3__0[2U])));
    bufp->fullBit(oldp+383,((((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                >> 0x3fU)))) 
                             & ((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                               >> 0x3fU))) 
                                != (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+384,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessS));
    bufp->fullBit(oldp+385,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessUS));
    bufp->fullQData(oldp+386,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift),64);
    bufp->fullQData(oldp+388,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR),64);
    bufp->fullQData(oldp+390,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR),64);
    bufp->fullQData(oldp+392,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND),64);
    bufp->fullQData(oldp+394,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL),64);
    bufp->fullQData(oldp+396,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV),64);
    bufp->fullQData(oldp+398,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM),64);
    bufp->fullQData(oldp+400,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout),64);
    bufp->fullQData(oldp+402,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin),64);
    bufp->fullCData(oldp+404,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB))),6);
    bufp->fullCData(oldp+405,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt),6);
    bufp->fullQData(oldp+406,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra),64);
    bufp->fullCData(oldp+408,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
    __Vtemp_h2d6007f7__0[0U] = (IData)(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
                                         ? ((((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
                                            >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                         : vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra));
    __Vtemp_h2d6007f7__0[1U] = (IData)((((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
                                          ? ((((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA))) 
                                             >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                          : vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra) 
                                        >> 0x20U));
    __Vtemp_h2d6007f7__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                      << 2U));
    __Vtemp_h2d6007f7__0[3U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h2d6007f7__0[4U] = (0xcU | (((IData)(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
                                                   ? (QData)((IData)(
                                                                     ((0x1fU 
                                                                       >= (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                       ? 
                                                                      ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                                       >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                       : 0U)))
                                                   : 
                                                  (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                   >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt)))) 
                                         << 4U) | ((IData)(
                                                           (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                            >> 0x20U)) 
                                                   >> 0x1eU)));
    __Vtemp_h2d6007f7__0[5U] = (((IData)(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
                                           ? (QData)((IData)(
                                                             ((0x1fU 
                                                               >= (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                               >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                               : 0U)))
                                           : (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                              >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt)))) 
                                 >> 0x1cU) | ((IData)(
                                                      (((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
                                                         ? (QData)((IData)(
                                                                           ((0x1fU 
                                                                             >= (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                             ? 
                                                                            ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                                             >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                             : 0U)))
                                                         : 
                                                        (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                         >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h2d6007f7__0[6U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 << 6U) | ((IData)(
                                                   (((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
                                                      ? (QData)((IData)(
                                                                        ((0x1fU 
                                                                          >= (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                          ? 
                                                                         ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                                          >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))
                                                                          : 0U)))
                                                      : 
                                                     (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                      >> (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt))) 
                                                    >> 0x20U)) 
                                           >> 0x1cU));
    __Vtemp_h2d6007f7__0[7U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 >> 0x1aU) | ((IData)(
                                                      (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h2d6007f7__0[8U] = (0x40U | ((IData)((vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+409,(__Vtemp_h2d6007f7__0),264);
    bufp->fullWData(oldp+418,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+421,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+424,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+427,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+430,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+432,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+434,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+436,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
    bufp->fullQData(oldp+438,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
    bufp->fullBit(oldp+440,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
    __Vtemp_hef6aeef8__0[0U] = 4U;
    __Vtemp_hef6aeef8__0[1U] = 0U;
    __Vtemp_hef6aeef8__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.__PVT__ex_Rrs2) 
                                      << 2U));
    __Vtemp_hef6aeef8__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__ex_Rrs2) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ex_Rrs2 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_hef6aeef8__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__exu_Imm) 
                                       << 4U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ex_Rrs2 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_hef6aeef8__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__exu_Imm) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__exu_Imm 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_hef6aeef8__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__exu_Imm 
                                         >> 0x20U)) 
                                >> 0x1cU);
    bufp->fullWData(oldp+441,(__Vtemp_hef6aeef8__0),198);
    bufp->fullWData(oldp+448,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+451,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+454,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+457,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+459,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+461,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+463,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out),64);
    bufp->fullBit(oldp+465,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit));
    bufp->fullCData(oldp+466,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key),4);
    __Vtemp_h9798c001__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM);
    __Vtemp_h9798c001__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM 
                                        >> 0x20U));
    __Vtemp_h9798c001__0[2U] = (0xfU | ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM) 
                                        << 4U));
    __Vtemp_h9798c001__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h9798c001__0[4U] = (0xe0U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV) 
                                          << 8U) | 
                                         ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp_h9798c001__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h9798c001__0[6U] = (0xd00U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV 
                                                      >> 0x20U)) 
                                             >> 0x18U)));
    __Vtemp_h9798c001__0[7U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV) 
                                 >> 0x14U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h9798c001__0[8U] = (0xc000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                            << 0x10U) 
                                           | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV 
                                                       >> 0x20U)) 
                                              >> 0x14U)));
    __Vtemp_h9798c001__0[9U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h9798c001__0[0xaU] = (0xb0000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                               << 0x14U) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_h9798c001__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                   >> 0xcU) | ((IData)(
                                                       (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                        >> 0x20U)) 
                                               << 0x14U));
    __Vtemp_h9798c001__0[0xcU] = (0xa00000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                                << 0x18U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp_h9798c001__0[0xdU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                   >> 8U) | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                      >> 0x20U)) 
                                             << 0x18U));
    __Vtemp_h9798c001__0[0xeU] = (0x9000000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                                 << 0x1cU) 
                                                | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                            >> 0x20U)) 
                                                   >> 8U)));
    __Vtemp_h9798c001__0[0xfU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL) 
                                   >> 4U) | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h9798c001__0[0x10U] = (0x80000000U | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL 
                                                           >> 0x20U)) 
                                                  >> 4U));
    __Vtemp_h9798c001__0[0x11U] = (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND);
    __Vtemp_h9798c001__0[0x12U] = (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND 
                                           >> 0x20U));
    __Vtemp_h9798c001__0[0x13U] = (7U | ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR) 
                                         << 4U));
    __Vtemp_h9798c001__0[0x14U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_h9798c001__0[0x15U] = (0x60U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift) 
                                             << 8U) 
                                            | ((IData)(
                                                       (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR 
                                                        >> 0x20U)) 
                                               >> 0x1cU)));
    __Vtemp_h9798c001__0[0x16U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h9798c001__0[0x17U] = (0x500U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR) 
                                              << 0xcU) 
                                             | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp_h9798c001__0[0x18U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_h9798c001__0[0x19U] = (0x4000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                               << 0x10U) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR 
                                                          >> 0x20U)) 
                                                 >> 0x14U)));
    __Vtemp_h9798c001__0[0x1aU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h9798c001__0[0x1bU] = (0x30000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__Less) 
                                                << 0x14U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB 
                                                           >> 0x20U)) 
                                                  >> 0x10U)));
    __Vtemp_h9798c001__0[0x1cU] = 0U;
    __Vtemp_h9798c001__0[0x1dU] = (0x200000U | ((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift) 
                                                << 0x18U));
    __Vtemp_h9798c001__0[0x1eU] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift) 
                                    >> 8U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h9798c001__0[0x1fU] = (0x1000000U | (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder) 
                                                  << 0x1cU) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift 
                                                             >> 0x20U)) 
                                                    >> 8U)));
    __Vtemp_h9798c001__0[0x20U] = (((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder) 
                                    >> 4U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h9798c001__0[0x21U] = ((IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                            >> 0x20U)) 
                                   >> 4U);
    bufp->fullWData(oldp+467,(__Vtemp_h9798c001__0),1088);
    bufp->fullWData(oldp+501,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+504,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+507,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+510,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+513,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+516,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+519,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+522,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+525,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+528,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+531,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[10]),68);
    bufp->fullWData(oldp+534,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[11]),68);
    bufp->fullWData(oldp+537,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[12]),68);
    bufp->fullWData(oldp+540,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[13]),68);
    bufp->fullWData(oldp+543,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[14]),68);
    bufp->fullWData(oldp+546,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[15]),68);
    bufp->fullQData(oldp+549,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0]),64);
    bufp->fullQData(oldp+551,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1]),64);
    bufp->fullQData(oldp+553,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2]),64);
    bufp->fullQData(oldp+555,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3]),64);
    bufp->fullQData(oldp+557,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4]),64);
    bufp->fullQData(oldp+559,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5]),64);
    bufp->fullQData(oldp+561,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6]),64);
    bufp->fullQData(oldp+563,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7]),64);
    bufp->fullQData(oldp+565,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8]),64);
    bufp->fullQData(oldp+567,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9]),64);
    bufp->fullQData(oldp+569,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[10]),64);
    bufp->fullQData(oldp+571,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[11]),64);
    bufp->fullQData(oldp+573,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[12]),64);
    bufp->fullQData(oldp+575,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[13]),64);
    bufp->fullQData(oldp+577,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[14]),64);
    bufp->fullQData(oldp+579,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[15]),64);
    bufp->fullQData(oldp+581,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out),64);
    bufp->fullBit(oldp+583,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit));
    bufp->fullCData(oldp+584,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__diver__key),2);
    __Vtemp_hdf62be76__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h77a512b4__0;
    __Vtemp_hdf62be76__0[1U] = 0U;
    __Vtemp_hdf62be76__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h7418121e__0 
                                      << 2U));
    __Vtemp_hdf62be76__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h7418121e__0 
                                >> 0x1eU);
    __Vtemp_hdf62be76__0[4U] = 0x14U;
    __Vtemp_hdf62be76__0[5U] = 0U;
    __Vtemp_hdf62be76__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                << 6U);
    __Vtemp_hdf62be76__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hdf62be76__0[8U] = (0x80U | ((IData)((VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+585,(__Vtemp_hdf62be76__0),264);
    bufp->fullWData(oldp+594,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+597,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+600,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+603,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+606,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0]),64);
    bufp->fullQData(oldp+608,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1]),64);
    bufp->fullQData(oldp+610,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2]),64);
    bufp->fullQData(oldp+612,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3]),64);
    bufp->fullQData(oldp+614,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out),64);
    bufp->fullBit(oldp+616,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit));
    __Vtemp_hbbbb0901__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h749ef897__0;
    __Vtemp_hbbbb0901__0[1U] = 0U;
    __Vtemp_hbbbb0901__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h7492a8f3__0 
                                      << 2U));
    __Vtemp_hbbbb0901__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h7492a8f3__0 
                                >> 0x1eU);
    __Vtemp_hbbbb0901__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA)) 
                                      << 4U));
    __Vtemp_hbbbb0901__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA)) 
                                 >> 0x1cU) | ((IData)(
                                                      (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_hbbbb0901__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                 << 6U) | ((IData)(
                                                   (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                    >> 0x20U)) 
                                           >> 0x1cU));
    __Vtemp_hbbbb0901__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hbbbb0901__0[8U] = (0x80U | ((IData)((VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+617,(__Vtemp_hbbbb0901__0),264);
    bufp->fullWData(oldp+626,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+629,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+632,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+635,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+638,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0]),64);
    bufp->fullQData(oldp+640,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1]),64);
    bufp->fullQData(oldp+642,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2]),64);
    bufp->fullQData(oldp+644,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3]),64);
    bufp->fullQData(oldp+646,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out),64);
    bufp->fullBit(oldp+648,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit));
    bufp->fullBit(oldp+649,((((~ (IData)(vlSymsp->TOP__top.__PVT__exu_ready)) 
                              & (IData)(vlSymsp->TOP__top.__PVT__idu_valid)) 
                             | ((IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_hd66fa622__0) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__idu_ready) 
                                   & ((IData)(vlSymsp->TOP__top.__PVT__ifu_valid) 
                                      & (IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_h23869681__0)))))));
    bufp->fullBit(oldp+650,(vlSymsp->TOP__top.__PVT__IDU__DOT__popline_wen));
    bufp->fullCData(oldp+651,((((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                                | ((0x23U == (0x7fU 
                                              & vlSymsp->TOP__top.__PVT__id_inst)) 
                                   | ((3U == (0x7fU 
                                              & vlSymsp->TOP__top.__PVT__id_inst)) 
                                      | (IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0))))
                                ? 0U : ((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                         ? (2U | (8U 
                                                  & (vlSymsp->TOP__top.__PVT__id_inst 
                                                     >> 0xaU)))
                                         : ((0x37U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__top.__PVT__id_inst))
                                             ? 3U : 
                                            ((((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__top.__PVT__id_inst)) 
                                               | (0x3bU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__top.__PVT__id_inst))) 
                                              & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0x19U))
                                              ? (0x10U 
                                                 | ((8U 
                                                     & (vlSymsp->TOP__top.__PVT__id_inst 
                                                        >> 9U)) 
                                                    | (7U 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 0xcU))))
                                              : ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                      >> 0xcU)))
                                                  ? 0xaU
                                                  : 
                                                 ((((vlSymsp->TOP__top.__PVT__id_inst 
                                                     >> 0x1eU) 
                                                    & (0U 
                                                       != 
                                                       (0x7020U 
                                                        & vlSymsp->TOP__top.__PVT__id_inst))) 
                                                   << 3U) 
                                                  | (7U 
                                                     & (vlSymsp->TOP__top.__PVT__id_inst 
                                                        >> 0xcU))))))))),5);
    bufp->fullQData(oldp+652,(vlSymsp->TOP__top.__PVT__IDU__DOT__Imm_d),64);
    bufp->fullBit(oldp+654,((((0x67U != (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))));
    bufp->fullCData(oldp+655,(((IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
                                ? 2U : ((1U & ((2U 
                                                == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                               | ((0xdU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       >> 2U))) 
                                                  | ((5U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 2U))) 
                                                     | ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                        >> 2U))))) 
                                                        | (3U 
                                                           == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))))
                                         ? 0U : (((1U 
                                                   == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                                  | (4U 
                                                     == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))
                                                  ? 1U
                                                  : 3U)))),2);
    bufp->fullCData(oldp+656,(((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                ? (5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xcU)) : 
                               ((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                 ? 6U : ((0x67U == 
                                          (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))
                                          ? 7U : 2U)))),3);
    bufp->fullBit(oldp+657,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemWr_d));
    bufp->fullCData(oldp+658,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemOP_d),3);
    bufp->fullCData(oldp+659,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegSrc_d),2);
    bufp->fullBit(oldp+660,(vlSymsp->TOP__top.__PVT__IDU__DOT__isTuncate_d));
    bufp->fullBit(oldp+661,(vlSymsp->TOP__top.__PVT__IDU__DOT__isSext_d));
    bufp->fullBit(oldp+662,(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d));
    bufp->fullBit(oldp+663,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegWr_d));
    bufp->fullBit(oldp+664,(((IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d) 
                             & (IData)(((0x100000U 
                                         == (0x1f00000U 
                                             & vlSymsp->TOP__top.__PVT__id_inst)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (7U 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 0xcU))))))))));
    bufp->fullCData(oldp+665,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop),3);
    bufp->fullCData(oldp+666,((0x7fU & vlSymsp->TOP__top.__PVT__id_inst)),7);
    bufp->fullCData(oldp+667,((7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+668,((vlSymsp->TOP__top.__PVT__id_inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+669,((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullCData(oldp+670,((5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+671,((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullBit(oldp+672,((0x67U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+673,((((0x33U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))) 
                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+674,(((3U == (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0xcU)))
                                ? 0xaU : ((((vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x7020U 
                                                & vlSymsp->TOP__top.__PVT__id_inst))) 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullCData(oldp+675,((0x10U | ((8U & (vlSymsp->TOP__top.__PVT__id_inst 
                                               >> 9U)) 
                                        | (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullBit(oldp+676,((0x37U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+677,((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+678,((0x23U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+679,((3U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullIData(oldp+680,((vlSymsp->TOP__top.__PVT__id_inst 
                               >> 7U)),25);
    __Vtemp_hf0d68bd5__0[0U] = (IData)((((- (QData)((IData)(
                                                            (vlSymsp->TOP__top.__PVT__id_inst 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlSymsp->TOP__top.__PVT__id_inst 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSymsp->TOP__top.__PVT__id_inst) 
                                                              | ((0x800U 
                                                                  & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                       >> 0x14U)))))))));
    __Vtemp_hf0d68bd5__0[1U] = (IData)(((((- (QData)((IData)(
                                                             (vlSymsp->TOP__top.__PVT__id_inst 
                                                              >> 0x1fU)))) 
                                          << 0x15U) 
                                         | (QData)((IData)(
                                                           ((0x100000U 
                                                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                >> 0xbU)) 
                                                            | ((0xff000U 
                                                                & vlSymsp->TOP__top.__PVT__id_inst) 
                                                               | ((0x800U 
                                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                        >> 0x14U)))))))) 
                                        >> 0x20U));
    __Vtemp_hf0d68bd5__0[2U] = (6U | (0xffff8000U & 
                                      (vlSymsp->TOP__top.__PVT__id_inst 
                                       << 3U)));
    __Vtemp_hf0d68bd5__0[3U] = (((- (IData)((vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0x1fU))) 
                                 << 3U) | (0x7fffU 
                                           & (vlSymsp->TOP__top.__PVT__id_inst 
                                              >> 0x1dU)));
    __Vtemp_hf0d68bd5__0[4U] = (0x28U | (((IData)((0x7ffffffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (vlSymsp->TOP__top.__PVT__id_inst 
                                                                         >> 0x1fU)))))) 
                                          << 0x13U) 
                                         | ((0x40000U 
                                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                                >> 0xdU)) 
                                            | ((0x20000U 
                                                & (vlSymsp->TOP__top.__PVT__id_inst 
                                                   << 0xaU)) 
                                               | ((0x1f800U 
                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                      >> 0xeU)) 
                                                  | ((0x780U 
                                                      & (vlSymsp->TOP__top.__PVT__id_inst 
                                                         >> 1U)) 
                                                     | ((- (IData)(
                                                                   (vlSymsp->TOP__top.__PVT__id_inst 
                                                                    >> 0x1fU))) 
                                                        >> 0x1dU)))))));
    __Vtemp_hf0d68bd5__0[5U] = (((IData)((0x7ffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSymsp->TOP__top.__PVT__id_inst 
                                                                >> 0x1fU)))))) 
                                 >> 0xdU) | ((IData)(
                                                     ((0x7ffffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.__PVT__id_inst 
                                                                             >> 0x1fU))))) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_hf0d68bd5__0[6U] = (0x100U | (((IData)(
                                                   (0xfffffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (vlSymsp->TOP__top.__PVT__id_inst 
                                                                          >> 0x1fU)))))) 
                                           << 0x15U) 
                                          | ((0x1fc000U 
                                              & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xbU)) 
                                             | ((0x3e00U 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    << 2U)) 
                                                | ((IData)(
                                                           ((0x7ffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.__PVT__id_inst 
                                                                                >> 0x1fU))))) 
                                                            >> 0x20U)) 
                                                   >> 0xdU)))));
    __Vtemp_hf0d68bd5__0[7U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSymsp->TOP__top.__PVT__id_inst 
                                                                >> 0x1fU)))))) 
                                 >> 0xbU) | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.__PVT__id_inst 
                                                                             >> 0x1fU))))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_hf0d68bd5__0[8U] = (0x600U | (((IData)(
                                                   (((- (QData)((IData)(
                                                                        (vlSymsp->TOP__top.__PVT__id_inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSymsp->TOP__top.__PVT__id_inst 
                                                                       >> 0x14U))))) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.__PVT__id_inst 
                                                                             >> 0x1fU))))) 
                                                      >> 0x20U)) 
                                             >> 0xbU)));
    __Vtemp_hf0d68bd5__0[9U] = (((IData)((((- (QData)((IData)(
                                                              (vlSymsp->TOP__top.__PVT__id_inst 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (vlSymsp->TOP__top.__PVT__id_inst 
                                                             >> 0x14U))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.__PVT__id_inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP__top.__PVT__id_inst 
                                                                           >> 0x14U)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_hf0d68bd5__0[0xaU] = (0x2000U | ((IData)(
                                                     ((((- (QData)((IData)(
                                                                           (vlSymsp->TOP__top.__PVT__id_inst 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (vlSymsp->TOP__top.__PVT__id_inst 
                                                                          >> 0x14U)))) 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    bufp->fullWData(oldp+681,(__Vtemp_hf0d68bd5__0),335);
    bufp->fullWData(oldp+692,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+695,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+698,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+701,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+704,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+707,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+709,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+711,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+713,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+715,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+717,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+719,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
    bufp->fullCData(oldp+720,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+721,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+722,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+723,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+724,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+725,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+726,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+727,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit));
    bufp->fullBit(oldp+728,(vlSymsp->TOP__top.__PVT__IFU__DOT__popline_wen));
    bufp->fullBit(oldp+729,((((~ (IData)(vlSymsp->TOP__top.__PVT__idu_ready)) 
                              & (IData)(vlSymsp->TOP__top.__PVT__ifu_valid)) 
                             | (IData)(vlSymsp->TOP__top.__PVT__ifu_arvalid))));
    bufp->fullBit(oldp+730,(vlSymsp->TOP__top.__PVT__IFU__DOT__nextpc_valid_r));
    bufp->fullQData(oldp+731,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
    bufp->fullQData(oldp+733,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
    bufp->fullIData(oldp+735,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                           >> 0x20U)))),32);
    bufp->fullBit(oldp+736,((((~ (IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready)) 
                              & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)) 
                             | ((IData)(vlSymsp->TOP__top.__PVT__lsu_ready) 
                                & (IData)(vlSymsp->TOP__top.__PVT__exu_valid)))));
    bufp->fullBit(oldp+737,(vlSymsp->TOP__top.__PVT__LSU__DOT__popline_wen));
    bufp->fullBit(oldp+738,(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint));
    bufp->fullBit(oldp+739,(((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                             & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
    bufp->fullBit(oldp+740,(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we));
    bufp->fullBit(oldp+741,(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we));
    bufp->fullBit(oldp+742,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                             & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))));
    bufp->fullQData(oldp+743,(vlSymsp->TOP__top.__PVT__LSU__DOT__dataMem_out),64);
    bufp->fullQData(oldp+745,(((- (QData)((IData)(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                                   & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                                      & (0U 
                                                         != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))))) 
                               & ((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)
                                   ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime
                                   : ((0x2004000ULL 
                                       == vlSymsp->TOP__top.__PVT__ALUres)
                                       ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                       : 0ULL)))),64);
    bufp->fullBit(oldp+747,((vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp)));
    bufp->fullQData(oldp+748,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint)
                                ? ((- (QData)((IData)(
                                                      ((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                                       & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                                          & (0U 
                                                             != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))))) 
                                   & ((0x200bff8ULL 
                                       == vlSymsp->TOP__top.__PVT__ALUres)
                                       ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime
                                       : ((0x2004000ULL 
                                           == vlSymsp->TOP__top.__PVT__ALUres)
                                           ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                           : 0ULL)))
                                : vlSymsp->TOP__top.__PVT__LSU__DOT__dataMem_out)),64);
    bufp->fullCData(oldp+750,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+751,((1U & ((IData)(vlSymsp->TOP__top.__PVT__mem_MemOP) 
                                   >> 2U))));
    bufp->fullBit(oldp+752,(((~ (IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we)) 
                             & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
    bufp->fullCData(oldp+753,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+754,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+758,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__extmask),16);
    bufp->fullCData(oldp+759,((3U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))),2);
    bufp->fullCData(oldp+760,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+761,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit));
    __Vtemp_h76b581e7__0[0U] = (IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                    >> 7U))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                         : (QData)((IData)(
                                                           (0xffU 
                                                            & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))));
    __Vtemp_h76b581e7__0[1U] = (IData)((((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                     >> 7U))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                          : (QData)((IData)(
                                                            (0xffU 
                                                             & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                        >> 0x20U));
    __Vtemp_h76b581e7__0[2U] = (3U | ((IData)(((4U 
                                                & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                           >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                                : (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))) 
                                      << 2U));
    __Vtemp_h76b581e7__0[3U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                      >> 0xfU))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                           : (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))) 
                                 >> 0x1eU) | ((IData)(
                                                      (((4U 
                                                         & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0xfU))))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           (0xffffU 
                                                                            & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                                         : (QData)((IData)(
                                                                           (0xffffU 
                                                                            & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h76b581e7__0[4U] = (8U | (((IData)(((4U 
                                                 & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                                                 : (QData)((IData)(
                                                                   vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                       << 4U) | ((IData)(
                                                         (((4U 
                                                            & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                            ? 
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0xfU))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))))
                                                            : (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_h76b581e7__0[5U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                           ? (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                                           : (QData)((IData)(
                                                             vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                 >> 0x1cU) | ((IData)(
                                                      (((4U 
                                                         & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                                                         : (QData)((IData)(
                                                                           vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h76b581e7__0[6U] = (0x10U | (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                          << 6U) | 
                                         ((IData)((
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))
                                                     : (QData)((IData)(
                                                                       vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp_h76b581e7__0[7U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U])))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h76b581e7__0[8U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data[0U]))) 
                                         >> 0x20U)) 
                                >> 0x1aU);
    bufp->fullWData(oldp+762,(__Vtemp_h76b581e7__0),264);
    bufp->fullWData(oldp+771,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+774,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+777,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+780,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+783,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+785,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+787,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+789,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+791,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+793,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit));
    bufp->fullQData(oldp+794,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime),64);
    bufp->fullQData(oldp+796,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp),64);
    bufp->fullBit(oldp+798,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+799,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+800,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we) 
                             & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
    bufp->fullIData(oldp+801,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
    bufp->fullIData(oldp+802,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullCData(oldp+803,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
    bufp->fullBit(oldp+804,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    bufp->fullCData(oldp+805,(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r),3);
    bufp->fullCData(oldp+806,(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r),3);
    bufp->fullCData(oldp+807,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                << 7U) | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4))))))))),8);
    bufp->fullCData(oldp+808,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                                << 7U) | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5))))))))),8);
    bufp->fullCData(oldp+809,((((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0) 
                                << 7U) | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0))))))))),8);
    bufp->fullCData(oldp+810,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                                 | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0)) 
                                << 7U) | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                                            | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0)) 
                                           << 6U) | 
                                          ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0)) 
                                            << 5U) 
                                           | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0)) 
                                               << 4U) 
                                              | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                                                   | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                                                      | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0)) 
                                                     << 2U) 
                                                    | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                                                         | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0)) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                                                          | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0)))))))))),8);
    bufp->fullCData(oldp+811,(((0x80U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0)) 
                                          | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)) 
                                         << 7U)) | 
                               ((0x40U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0)) 
                                           | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)) 
                                          << 6U)) | 
                                ((0x20U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0)) 
                                            | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)) 
                                           << 5U)) 
                                 | ((0x10U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0)) 
                                               | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)) 
                                              << 4U)) 
                                    | ((8U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0)) 
                                               | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)) 
                                              << 3U)) 
                                       | ((4U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0)) 
                                                  | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0)) 
                                                | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0)) 
                                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5))))))))))),8);
    bufp->fullCData(oldp+812,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[0]),5);
    bufp->fullCData(oldp+813,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[1]),5);
    bufp->fullCData(oldp+814,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[2]),5);
    bufp->fullCData(oldp+815,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[3]),5);
    bufp->fullCData(oldp+816,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[4]),5);
    bufp->fullCData(oldp+817,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[5]),5);
    bufp->fullCData(oldp+818,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[6]),5);
    bufp->fullCData(oldp+819,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[7]),5);
    bufp->fullCData(oldp+820,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                 & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                    == (0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xfU)))) 
                                << 7U) | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                            & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                               == (0x1fU 
                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                      >> 0xfU)))) 
                                           << 6U) | 
                                          ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                             & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0xfU)))) 
                                            << 5U) 
                                           | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                                & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       >> 0xfU)))) 
                                               << 4U) 
                                              | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                                   & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 0xfU)))) 
                                                  << 3U) 
                                                 | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                      & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__top.__PVT__id_inst 
                                                             >> 0xfU)))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                         & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                >> 0xfU)))) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                          & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                 >> 0xfU)))))))))))),8);
    bufp->fullCData(oldp+821,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                                 & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                    == (0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0x14U)))) 
                                << 7U) | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                            & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                               == (0x1fU 
                                                   & (vlSymsp->TOP__top.__PVT__id_inst 
                                                      >> 0x14U)))) 
                                           << 6U) | 
                                          ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                             & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0x14U)))) 
                                            << 5U) 
                                           | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                                & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       >> 0x14U)))) 
                                               << 4U) 
                                              | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                                   & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__top.__PVT__id_inst 
                                                          >> 0x14U)))) 
                                                  << 3U) 
                                                 | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                                      & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__top.__PVT__id_inst 
                                                             >> 0x14U)))) 
                                                     << 2U) 
                                                    | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                         & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                >> 0x14U)))) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                          & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__top.__PVT__id_inst 
                                                                 >> 0x14U)))))))))))),8);
    bufp->fullBit(oldp+822,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                              & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                 == (0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                              >> 0xfU)))) 
                             | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                 & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                    == (0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xfU)))) 
                                | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                    & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                       == (0x1fU & 
                                           (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0xfU)))) 
                                   | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                       & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                          == (0x1fU 
                                              & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xfU)))) 
                                      | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                          & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                             == (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0xfU)))) 
                                         | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                             & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0xfU)))) 
                                            | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       >> 0xfU)))) 
                                               | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                  & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__top.__PVT__id_inst 
                                                         >> 0xfU)))))))))))));
    bufp->fullBit(oldp+823,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
                              & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4) 
                                 == (0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                              >> 0x14U)))) 
                             | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4) 
                                 & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4) 
                                    == (0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0x14U)))) 
                                | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4) 
                                    & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4) 
                                       == (0x1fU & 
                                           (vlSymsp->TOP__top.__PVT__id_inst 
                                            >> 0x14U)))) 
                                   | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4) 
                                       & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4) 
                                          == (0x1fU 
                                              & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0x14U)))) 
                                      | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4) 
                                          & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4) 
                                             == (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0x14U)))) 
                                         | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4) 
                                             & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4) 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__top.__PVT__id_inst 
                                                    >> 0x14U)))) 
                                            | (((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4) 
                                                & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__top.__PVT__id_inst 
                                                       >> 0x14U)))) 
                                               | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4) 
                                                  & ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__top.__PVT__id_inst 
                                                         >> 0x14U)))))))))))));
    bufp->fullBit(oldp+824,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r));
    bufp->fullBit(oldp+825,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
    bufp->fullBit(oldp+826,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena));
    bufp->fullCData(oldp+827,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena)
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r))))),3);
    bufp->fullBit(oldp+828,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r));
    bufp->fullBit(oldp+829,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r)))));
    bufp->fullBit(oldp+830,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena));
    bufp->fullCData(oldp+831,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena)
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r))))),3);
    bufp->fullBit(oldp+832,(vlSymsp->TOP__top.witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5));
    bufp->fullCData(oldp+833,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+834,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+835,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+836,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+837,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12fccb8d__0))));
    bufp->fullCData(oldp+838,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+839,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+840,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+841,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+842,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h12e0aba8__0))));
    bufp->fullCData(oldp+843,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+844,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+845,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+846,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+847,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1534ebe7__0))));
    bufp->fullCData(oldp+848,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+849,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+850,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+851,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+852,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1b15740b__0))));
    bufp->fullCData(oldp+853,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+854,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+855,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+856,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+857,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e289ef1__0))));
    bufp->fullCData(oldp+858,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+859,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+860,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+862,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h5e3be3b1__0))));
    bufp->fullCData(oldp+863,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+864,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+865,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+866,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+867,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h1502befe__0))));
    bufp->fullCData(oldp+868,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+869,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+870,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+871,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+872,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h18d0ad63__0))));
    bufp->fullBit(oldp+873,((((~ (IData)(vlSymsp->TOP__top.__PVT__ifu_ready)) 
                              & (IData)(vlSymsp->TOP__top__WB.__PVT__wb_valid)) 
                             | ((IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready) 
                                & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)))));
    bufp->fullBit(oldp+874,(((IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready) 
                             & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid))));
    bufp->fullQData(oldp+875,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec
                                : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)
                                    ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc
                                    : vlSymsp->TOP__top.__PVT__wb_pc))),64);
    bufp->fullBit(oldp+877,((((IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn) 
                              & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullCData(oldp+878,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 7U))),5);
    bufp->fullQData(oldp+879,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[0]),64);
    bufp->fullQData(oldp+881,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[1]),64);
    bufp->fullQData(oldp+883,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[2]),64);
    bufp->fullQData(oldp+885,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[3]),64);
    bufp->fullQData(oldp+887,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[4]),64);
    bufp->fullQData(oldp+889,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[5]),64);
    bufp->fullQData(oldp+891,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[6]),64);
    bufp->fullQData(oldp+893,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[7]),64);
    bufp->fullQData(oldp+895,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[8]),64);
    bufp->fullQData(oldp+897,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[9]),64);
    bufp->fullQData(oldp+899,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[10]),64);
    bufp->fullQData(oldp+901,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[11]),64);
    bufp->fullQData(oldp+903,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[12]),64);
    bufp->fullQData(oldp+905,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[13]),64);
    bufp->fullQData(oldp+907,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[14]),64);
    bufp->fullQData(oldp+909,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[15]),64);
    bufp->fullQData(oldp+911,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[16]),64);
    bufp->fullQData(oldp+913,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[17]),64);
    bufp->fullQData(oldp+915,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[18]),64);
    bufp->fullQData(oldp+917,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[19]),64);
    bufp->fullQData(oldp+919,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[20]),64);
    bufp->fullQData(oldp+921,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[21]),64);
    bufp->fullQData(oldp+923,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[22]),64);
    bufp->fullQData(oldp+925,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[23]),64);
    bufp->fullQData(oldp+927,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[24]),64);
    bufp->fullQData(oldp+929,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[25]),64);
    bufp->fullQData(oldp+931,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[26]),64);
    bufp->fullQData(oldp+933,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[27]),64);
    bufp->fullQData(oldp+935,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[28]),64);
    bufp->fullQData(oldp+937,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[29]),64);
    bufp->fullQData(oldp+939,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[30]),64);
    bufp->fullQData(oldp+941,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[31]),64);
    bufp->fullBit(oldp+943,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__isw));
    bufp->fullCData(oldp+944,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0xfU))),5);
    bufp->fullSData(oldp+945,((vlSymsp->TOP__top.__PVT__wb_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+946,((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                     >> 0xcU))),3);
    bufp->fullQData(oldp+947,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc),64);
    bufp->fullQData(oldp+949,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec),64);
    bufp->fullQData(oldp+951,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus),64);
    bufp->fullQData(oldp+953,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie),64);
    bufp->fullBit(oldp+955,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                           >> 3U)))));
    bufp->fullBit(oldp+956,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie 
                                           >> 7U)))));
    bufp->fullBit(oldp+957,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__timer_irq));
    bufp->fullBit(oldp+958,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise));
    bufp->fullBit(oldp+959,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isecall));
    bufp->fullQData(oldp+960,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo),64);
    bufp->fullBit(oldp+962,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret));
    bufp->fullBit(oldp+963,((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+964,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc));
    bufp->fullBit(oldp+965,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase));
    bufp->fullBit(oldp+966,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus));
    bufp->fullBit(oldp+967,((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+968,((0x344U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+969,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                           >> 7U)))));
    bufp->fullCData(oldp+970,(vlSymsp->TOP__top__WB__IntrUnit.__Vcellinp__CSRwEn__key),2);
    bufp->fullQData(oldp+971,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
    bufp->fullBit(oldp+973,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__hit));
    bufp->fullBit(oldp+974,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+975,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+976,(((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
    bufp->fullBit(oldp+977,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+978,(((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
    bufp->fullBit(oldp+979,(vlSelf->clk));
    bufp->fullBit(oldp+980,(vlSelf->rst));
    bufp->fullIData(oldp+981,(vlSelf->Inst),32);
    bufp->fullQData(oldp+982,(vlSelf->pc),64);
    bufp->fullBit(oldp+984,(vlSelf->valid));
    bufp->fullBit(oldp+985,(((IData)(vlSymsp->TOP__top.__PVT__is_jump) 
                             | (IData)(vlSelf->rst))));
    bufp->fullBit(oldp+986,(((IData)(vlSelf->rst) | 
                             ((IData)(vlSymsp->TOP__top.__PVT__is_jump) 
                              | (IData)(vlSymsp->TOP__top.__PVT__idu_isebreak)))));
    bufp->fullQData(oldp+987,(vlSymsp->TOP__top__WB__IntrUnit.mcase),64);
    bufp->fullCData(oldp+989,(vlSymsp->TOP__top.__PVT__Extop),3);
    bufp->fullQData(oldp+990,(vlSymsp->TOP__top.__PVT__waddr),64);
    bufp->fullBit(oldp+992,(vlSymsp->TOP__top.__PVT__Less));
    bufp->fullBit(oldp+993,(vlSymsp->TOP__top.__PVT__Zero));
    bufp->fullQData(oldp+994,(vlSymsp->TOP__top.__PVT__MemOut),64);
    bufp->fullQData(oldp+996,(vlSymsp->TOP__top.__PVT__RegWdata),64);
    bufp->fullBit(oldp+998,(vlSymsp->TOP__top.__PVT__IntrEn));
    bufp->fullQData(oldp+999,(vlSymsp->TOP__top.__PVT__IntrOut),64);
    bufp->fullBit(oldp+1001,(vlSymsp->TOP__top.__PVT__clint_we));
    bufp->fullBit(oldp+1002,(vlSymsp->TOP__top.__PVT__clint_re));
    bufp->fullQData(oldp+1003,(vlSymsp->TOP__top.__PVT__clint_dout),64);
    bufp->fullBit(oldp+1005,(1U));
    bufp->fullIData(oldp+1006,(vlSymsp->TOP__top.__PVT__AWADDR),32);
    bufp->fullBit(oldp+1007,(vlSymsp->TOP__top.__PVT__AWVALID));
    bufp->fullQData(oldp+1008,(vlSymsp->TOP__top.__PVT__WDATA),64);
    bufp->fullBit(oldp+1010,(vlSymsp->TOP__top.__PVT__WVALID));
    bufp->fullCData(oldp+1011,(vlSymsp->TOP__top.__PVT__WSTRB),8);
    bufp->fullBit(oldp+1012,(vlSymsp->TOP__top.__PVT__BREADY));
    bufp->fullIData(oldp+1013,(7U),32);
    bufp->fullIData(oldp+1014,(3U),32);
    bufp->fullIData(oldp+1015,(2U),32);
    bufp->fullIData(oldp+1016,(1U),32);
    bufp->fullCData(oldp+1017,(1U),2);
    bufp->fullIData(oldp+1018,(5U),32);
    bufp->fullIData(oldp+1019,(7U),32);
    bufp->fullBit(oldp+1020,(0U));
    bufp->fullIData(oldp+1021,(4U),32);
    bufp->fullIData(oldp+1022,(0x40U),32);
    bufp->fullIData(oldp+1023,(6U),32);
    bufp->fullQData(oldp+1024,(0ULL),64);
    bufp->fullIData(oldp+1026,(0x42U),32);
    bufp->fullIData(oldp+1027,(4U),32);
    bufp->fullIData(oldp+1028,(3U),32);
    bufp->fullIData(oldp+1029,(0x10U),32);
    bufp->fullIData(oldp+1030,(0x44U),32);
    bufp->fullIData(oldp+1031,(0x10U),32);
    bufp->fullIData(oldp+1032,(0U),32);
    bufp->fullIData(oldp+1033,(0x20U),32);
    bufp->fullIData(oldp+1034,(0x43U),32);
    bufp->fullIData(oldp+1035,(5U),32);
    bufp->fullCData(oldp+1036,(0U),2);
    bufp->fullIData(oldp+1037,(0x1bceU),18);
    bufp->fullIData(oldp+1038,(9U),32);
    bufp->fullIData(oldp+1039,(2U),32);
    bufp->fullIData(oldp+1040,(0xcU),32);
    bufp->fullCData(oldp+1041,(0U),3);
    __Vtemp_hd6f60a5b__0[0U] = 0x37eceb9aU;
    __Vtemp_hd6f60a5b__0[1U] = 0xd46c1ac7U;
    __Vtemp_hd6f60a5b__0[2U] = 0x65d92f5bU;
    __Vtemp_hd6f60a5b__0[3U] = 0x268da6U;
    bufp->fullWData(oldp+1042,(__Vtemp_hd6f60a5b__0),120);
    bufp->fullIData(oldp+1046,(0xaU),32);
    bufp->fullIData(oldp+1047,(0xcU),32);
    bufp->fullCData(oldp+1048,(0xe7U),8);
    bufp->fullIData(oldp+1049,(8U),32);
    bufp->fullIData(oldp+1050,(1U),32);
    bufp->fullSData(oldp+1051,(0x35bdU),16);
    bufp->fullCData(oldp+1052,(0U),5);
    bufp->fullIData(oldp+1053,(2U),32);
    bufp->fullBit(oldp+1054,(0U));
    bufp->fullQData(oldp+1055,(0x7ffffff8ULL),64);
    bufp->fullQData(oldp+1057,(0x7ffffffcULL),64);
    bufp->fullCData(oldp+1059,(0U),8);
    bufp->fullQData(oldp+1060,(0xc060343cffULL),40);
    bufp->fullQData(oldp+1062,(0xffffffffffffffffULL),64);
    bufp->fullBit(oldp+1064,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr_done));
    bufp->fullBit(oldp+1065,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isCSRw));
    __Vtemp_h058c0b04__0[0U] = 7U;
    __Vtemp_h058c0b04__0[1U] = 0x80000000U;
    __Vtemp_h058c0b04__0[2U] = 0x2eU;
    __Vtemp_h058c0b04__0[3U] = 0U;
    __Vtemp_h058c0b04__0[4U] = 4U;
    bufp->fullWData(oldp+1066,(__Vtemp_h058c0b04__0),132);
    bufp->fullQData(oldp+1071,(0xa00001800ULL),64);
    bufp->fullIData(oldp+1073,(6U),32);
}
