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
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+960,"Inst", false,-1, 31,0);
    tracep->declQuad(c+961,"pc", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+234,"Inst", false,-1, 31,0);
    tracep->declQuad(c+235,"pc", false,-1, 63,0);
    tracep->declQuad(c+237,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+239,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+965,"Extop", false,-1, 2,0);
    tracep->declQuad(c+241,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+966,"waddr", false,-1, 63,0);
    tracep->declBit(c+968,"Less", false,-1);
    tracep->declBit(c+969,"Zero", false,-1);
    tracep->declQuad(c+970,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+972,"RegWdata", false,-1, 63,0);
    tracep->declBit(c+974,"IntrEn", false,-1);
    tracep->declQuad(c+975,"IntrOut", false,-1, 63,0);
    tracep->declBit(c+243,"clint_mtip", false,-1);
    tracep->declBit(c+977,"clint_we", false,-1);
    tracep->declBit(c+978,"clint_re", false,-1);
    tracep->declQuad(c+979,"clint_dout", false,-1, 63,0);
    tracep->declBus(c+244,"rs1", false,-1, 4,0);
    tracep->declBus(c+245,"rs2", false,-1, 4,0);
    tracep->declBus(c+246,"rd", false,-1, 4,0);
    tracep->declBit(c+247,"RegWr_d", false,-1);
    tracep->declBit(c+248,"ifu_is_jump", false,-1);
    tracep->declQuad(c+249,"ifu_JumpPc", false,-1, 63,0);
    tracep->declBit(c+251,"ifu_isIntrPC", false,-1);
    tracep->declQuad(c+252,"ifu_IntrPC", false,-1, 63,0);
    tracep->declBit(c+981,"ifu_arvalid", false,-1);
    tracep->declBus(c+254,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+981,"ram_arready", false,-1);
    tracep->declQuad(c+255,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+257,"ram_rvalid", false,-1);
    tracep->declBus(c+258,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+982,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+983,"AWVALID", false,-1);
    tracep->declBit(c+259,"AWREADY", false,-1);
    tracep->declQuad(c+984,"WDATA", false,-1, 63,0);
    tracep->declBit(c+986,"WVALID", false,-1);
    tracep->declBit(c+260,"WREADY", false,-1);
    tracep->declBus(c+987,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+261,"BVALID", false,-1);
    tracep->declBus(c+262,"BRESP", false,-1, 1,0);
    tracep->declBit(c+988,"BREADY", false,-1);
    tracep->declQuad(c+263,"id_pc", false,-1, 63,0);
    tracep->declBus(c+265,"id_inst", false,-1, 31,0);
    tracep->declBit(c+266,"ifu_valid", false,-1);
    tracep->declBit(c+267,"idu_valid", false,-1);
    tracep->declBit(c+268,"idu_ready", false,-1);
    tracep->declBit(c+981,"exu_valid", false,-1);
    tracep->declBit(c+981,"exu_ready", false,-1);
    tracep->declBit(c+981,"lsu_valid", false,-1);
    tracep->declBit(c+981,"lsu_ready", false,-1);
    tracep->declBit(c+981,"wb_valid", false,-1);
    tracep->declBit(c+981,"wb_ready", false,-1);
    tracep->declBit(c+269,"exu_isTuncate", false,-1);
    tracep->declBit(c+270,"exu_isSext", false,-1);
    tracep->declQuad(c+271,"ex_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+273,"ex_Rrs2", false,-1, 63,0);
    tracep->declBit(c+275,"exu_IntrEn", false,-1);
    tracep->declBus(c+276,"exu_ALUct", false,-1, 4,0);
    tracep->declQuad(c+277,"exu_Imm", false,-1, 63,0);
    tracep->declBit(c+279,"exu_ALUAsr", false,-1);
    tracep->declBus(c+280,"exu_ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+281,"ex_pc", false,-1, 63,0);
    tracep->declBus(c+283,"ex_inst", false,-1, 31,0);
    tracep->declBit(c+284,"exu_RegWr", false,-1);
    tracep->declBus(c+285,"exu_Branch", false,-1, 2,0);
    tracep->declBus(c+286,"exu_MemOP", false,-1, 2,0);
    tracep->declBit(c+287,"exu_MemWr", false,-1);
    tracep->declBus(c+288,"exu_RegSrc", false,-1, 1,0);
    tracep->declBit(c+289,"isRAW", false,-1);
    tracep->declBit(c+290,"witf_full", false,-1);
    tracep->declBit(c+291,"witf_empty", false,-1);
    tracep->declQuad(c+292,"mem_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+294,"mem_Rrs2", false,-1, 63,0);
    tracep->declBus(c+296,"mem_MemOP", false,-1, 2,0);
    tracep->declBit(c+297,"mem_MemWr", false,-1);
    tracep->declBit(c+298,"mem_IntrEn", false,-1);
    tracep->declBus(c+299,"lsu_RegSrc", false,-1, 1,0);
    tracep->declBit(c+300,"lsu_Regwr", false,-1);
    tracep->declQuad(c+301,"lsu_pc", false,-1, 63,0);
    tracep->declBus(c+303,"lsu_inst", false,-1, 31,0);
    tracep->declBit(c+304,"wb_IntrEn", false,-1);
    tracep->declBus(c+305,"wb_RegSrc", false,-1, 1,0);
    tracep->declBit(c+306,"wb_RegWr", false,-1);
    tracep->declQuad(c+235,"wb_pc", false,-1, 63,0);
    tracep->declBus(c+234,"wb_inst", false,-1, 31,0);
    tracep->declQuad(c+307,"wb_ALUres", false,-1, 63,0);
    tracep->declQuad(c+309,"memout", false,-1, 63,0);
    tracep->declQuad(c+311,"wb_Rrs1", false,-1, 63,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+283,"exu_inst", false,-1, 31,0);
    tracep->declQuad(c+281,"exu_pc", false,-1, 63,0);
    tracep->declBit(c+279,"ALUAsr", false,-1);
    tracep->declBus(c+280,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+276,"ALUct", false,-1, 4,0);
    tracep->declBit(c+269,"isTuncate", false,-1);
    tracep->declBit(c+270,"isSext", false,-1);
    tracep->declBit(c+284,"Regwr_i", false,-1);
    tracep->declBus(c+286,"MemOP_i", false,-1, 2,0);
    tracep->declBit(c+287,"MemWr_i", false,-1);
    tracep->declBit(c+275,"IntrEn", false,-1);
    tracep->declBus(c+285,"Branch", false,-1, 2,0);
    tracep->declBus(c+288,"RegSrc", false,-1, 1,0);
    tracep->declQuad(c+271,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+273,"R_rs2", false,-1, 63,0);
    tracep->declQuad(c+277,"Imm", false,-1, 63,0);
    tracep->declQuad(c+241,"wb_ALUres", false,-1, 63,0);
    tracep->declBit(c+300,"Regwr_o", false,-1);
    tracep->declQuad(c+294,"R_rs2_o", false,-1, 63,0);
    tracep->declQuad(c+292,"R_rs1_o", false,-1, 63,0);
    tracep->declBus(c+296,"MemOP_o", false,-1, 2,0);
    tracep->declBit(c+297,"MemWr_o", false,-1);
    tracep->declBit(c+298,"IntrEn_o", false,-1);
    tracep->declQuad(c+249,"NextPC", false,-1, 63,0);
    tracep->declBit(c+248,"is_jump", false,-1);
    tracep->declBus(c+299,"RegSrc_o", false,-1, 1,0);
    tracep->declBus(c+303,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+301,"pc_o", false,-1, 63,0);
    tracep->declBit(c+267,"idu_valid", false,-1);
    tracep->declBit(c+981,"exu_ready", false,-1);
    tracep->declBit(c+981,"lsu_ready", false,-1);
    tracep->declBit(c+981,"exu_valid", false,-1);
    tracep->declBit(c+981,"popline_wen", false,-1);
    tracep->declQuad(c+313,"ALUres", false,-1, 63,0);
    tracep->declBit(c+315,"Less", false,-1);
    tracep->declBit(c+316,"Zero", false,-1);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+285,"Branch", false,-1, 2,0);
    tracep->declQuad(c+277,"imm", false,-1, 63,0);
    tracep->declQuad(c+281,"PC", false,-1, 63,0);
    tracep->declQuad(c+271,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+315,"Less", false,-1);
    tracep->declBit(c+316,"Zero", false,-1);
    tracep->declQuad(c+249,"NextPC", false,-1, 63,0);
    tracep->declBit(c+248,"is_jump", false,-1);
    tracep->declBit(c+317,"PCAsrc", false,-1);
    tracep->declBit(c+318,"PCBsrc", false,-1);
    tracep->declQuad(c+319,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+321,"Bsrc", false,-1, 63,0);
    tracep->declQuad(c+323,"NextPCp", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+989,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+991,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+325,"out", false,-1, 1,0);
    tracep->declBus(c+285,"key", false,-1, 2,0);
    tracep->declBus(c+993,"default_out", false,-1, 1,0);
    tracep->declQuad(c+326,"lut", false,-1, 34,0);
    tracep->declBus(c+994,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+328+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+2+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+335+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+342,"lut_out", false,-1, 1,0);
    tracep->declBit(c+343,"hit", false,-1);
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("jump_check ");
    tracep->declBus(c+989,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+248,"out", false,-1, 0,0);
    tracep->declBus(c+285,"key", false,-1, 2,0);
    tracep->declBus(c+996,"default_out", false,-1, 0,0);
    tracep->declBus(c+344,"lut", false,-1, 27,0);
    tracep->declBus(c+997,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+345+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+352+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+359,"lut_out", false,-1, 0,0);
    tracep->declBit(c+360,"hit", false,-1);
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBit(c+279,"ALUAsr", false,-1);
    tracep->declQuad(c+281,"PC", false,-1, 63,0);
    tracep->declQuad(c+271,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+280,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+277,"Imm", false,-1, 63,0);
    tracep->declQuad(c+273,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+276,"ALUct", false,-1, 4,0);
    tracep->declBit(c+269,"isTuncate", false,-1);
    tracep->declBit(c+270,"isSext", false,-1);
    tracep->declQuad(c+313,"ALUres", false,-1, 63,0);
    tracep->declBit(c+315,"Less", false,-1);
    tracep->declBit(c+316,"Zero", false,-1);
    tracep->declQuad(c+361,"ALUA", false,-1, 63,0);
    tracep->declQuad(c+363,"ALUB", false,-1, 63,0);
    tracep->declBit(c+365,"US_S", false,-1);
    tracep->declBit(c+366,"Sub_Add", false,-1);
    tracep->declBit(c+365,"A_L", false,-1);
    tracep->declBit(c+367,"L_R", false,-1);
    tracep->declQuad(c+368,"adder", false,-1, 63,0);
    tracep->declBit(c+370,"Carry", false,-1);
    tracep->declBit(c+371,"Overflow", false,-1);
    tracep->declBit(c+372,"lessS", false,-1);
    tracep->declBit(c+373,"lessUS", false,-1);
    tracep->declQuad(c+374,"shift", false,-1, 63,0);
    tracep->declQuad(c+376,"XOR", false,-1, 63,0);
    tracep->declQuad(c+378,"OR", false,-1, 63,0);
    tracep->declQuad(c+380,"AND", false,-1, 63,0);
    tracep->declQuad(c+382,"MUL", false,-1, 63,0);
    tracep->declQuad(c+384,"DIV", false,-1, 63,0);
    tracep->declQuad(c+386,"REM", false,-1, 63,0);
    tracep->declQuad(c+388,"ALUout", false,-1, 63,0);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+361,"A", false,-1, 63,0);
    tracep->declQuad(c+363,"B", false,-1, 63,0);
    tracep->declBit(c+366,"Cin", false,-1);
    tracep->declQuad(c+368,"Result", false,-1, 63,0);
    tracep->declBit(c+370,"Carry", false,-1);
    tracep->declBit(c+371,"Overflow", false,-1);
    tracep->declBit(c+316,"zero", false,-1);
    tracep->declQuad(c+390,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+999,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+361,"din", false,-1, 63,0);
    tracep->declBus(c+392,"shamtin", false,-1, 5,0);
    tracep->declBit(c+365,"A_L", false,-1);
    tracep->declBit(c+367,"L_R", false,-1);
    tracep->declBit(c+269,"isTuncate", false,-1);
    tracep->declQuad(c+374,"dout", false,-1, 63,0);
    tracep->declBus(c+393,"shamt", false,-1, 5,0);
    tracep->declQuad(c+394,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+374,"out", false,-1, 63,0);
    tracep->declBus(c+396,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+397,"lut", false,-1, 263,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+406+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+418+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+426,"lut_out", false,-1, 63,0);
    tracep->declBit(c+428,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+990,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+363,"out", false,-1, 63,0);
    tracep->declBus(c+280,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+429,"lut", false,-1, 197,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+436+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+445+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+451,"lut_out", false,-1, 63,0);
    tracep->declBit(c+453,"hit", false,-1);
    tracep->declBus(c+1004,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+1005,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+997,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+388,"out", false,-1, 63,0);
    tracep->declBus(c+454,"key", false,-1, 3,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+455,"lut", false,-1, 1087,0);
    tracep->declBus(c+1006,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+489+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+537+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+569,"lut_out", false,-1, 63,0);
    tracep->declBit(c+571,"hit", false,-1);
    tracep->declBus(c+1007,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+384,"out", false,-1, 63,0);
    tracep->declBus(c+572,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+573,"lut", false,-1, 263,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+582+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+39+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+594+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+602,"lut_out", false,-1, 63,0);
    tracep->declBit(c+604,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+386,"out", false,-1, 63,0);
    tracep->declBus(c+572,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+605,"lut", false,-1, 263,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+614+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+626+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+634,"lut_out", false,-1, 63,0);
    tracep->declBit(c+636,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem_Inst_reg ");
    tracep->declBus(c+1008,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+283,"din", false,-1, 31,0);
    tracep->declBus(c+303,"dout", false,-1, 31,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+281,"din", false,-1, 63,0);
    tracep->declQuad(c+301,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_ALUres_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+313,"din", false,-1, 63,0);
    tracep->declQuad(c+241,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+275,"din", false,-1, 0,0);
    tracep->declBus(c+298,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemOP_reg ");
    tracep->declBus(c+990,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+286,"din", false,-1, 2,0);
    tracep->declBus(c+296,"dout", false,-1, 2,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemWr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+287,"din", false,-1, 0,0);
    tracep->declBus(c+297,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs1_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+271,"din", false,-1, 63,0);
    tracep->declQuad(c+292,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs2_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+273,"din", false,-1, 63,0);
    tracep->declQuad(c+294,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_RegSrc_reg ");
    tracep->declBus(c+991,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+288,"din", false,-1, 1,0);
    tracep->declBus(c+299,"dout", false,-1, 1,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_Regwr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+284,"din", false,-1, 0,0);
    tracep->declBus(c+300,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+265,"id_inst", false,-1, 31,0);
    tracep->declQuad(c+263,"id_pc", false,-1, 63,0);
    tracep->declQuad(c+237,"R_rs1_i", false,-1, 63,0);
    tracep->declQuad(c+239,"R_rs2_i", false,-1, 63,0);
    tracep->declBit(c+289,"isRAW", false,-1);
    tracep->declBit(c+290,"witf_full", false,-1);
    tracep->declBus(c+276,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+277,"Imm", false,-1, 63,0);
    tracep->declBit(c+279,"ALUAsr", false,-1);
    tracep->declBus(c+280,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+283,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+281,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+271,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+273,"R_rs2_o", false,-1, 63,0);
    tracep->declBus(c+285,"Branch", false,-1, 2,0);
    tracep->declBit(c+287,"MemWr", false,-1);
    tracep->declBus(c+286,"MemOP", false,-1, 2,0);
    tracep->declBus(c+288,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+269,"isTuncate", false,-1);
    tracep->declBit(c+270,"isSext", false,-1);
    tracep->declBit(c+275,"IntrEn", false,-1);
    tracep->declBit(c+284,"RegWr", false,-1);
    tracep->declBus(c+244,"rs1", false,-1, 4,0);
    tracep->declBus(c+245,"rs2", false,-1, 4,0);
    tracep->declBus(c+246,"rd", false,-1, 4,0);
    tracep->declBit(c+247,"RegWr_d", false,-1);
    tracep->declBit(c+266,"ifu_valid", false,-1);
    tracep->declBit(c+268,"idu_ready", false,-1);
    tracep->declBit(c+267,"idu_valid", false,-1);
    tracep->declBit(c+981,"exu_ready", false,-1);
    tracep->declBit(c+637,"idu_valid_next", false,-1);
    tracep->declBit(c+638,"popline_wen", false,-1);
    tracep->declBus(c+639,"ALUct_d", false,-1, 4,0);
    tracep->declQuad(c+640,"Imm_d", false,-1, 63,0);
    tracep->declBit(c+642,"ALUAsr_d", false,-1);
    tracep->declBus(c+643,"ALUBsr_d", false,-1, 1,0);
    tracep->declBus(c+644,"Branch_d", false,-1, 2,0);
    tracep->declBit(c+645,"MemWr_d", false,-1);
    tracep->declBus(c+646,"MemOP_d", false,-1, 2,0);
    tracep->declBus(c+647,"RegSrc_d", false,-1, 1,0);
    tracep->declBit(c+648,"isTuncate_d", false,-1);
    tracep->declBit(c+649,"isSext_d", false,-1);
    tracep->declBit(c+650,"IntrEn_d", false,-1);
    tracep->pushNamePrefix("ContrGenU ");
    tracep->declBus(c+265,"id_inst", false,-1, 31,0);
    tracep->declBus(c+639,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+640,"Imm", false,-1, 63,0);
    tracep->declBit(c+642,"ALUAsr", false,-1);
    tracep->declBus(c+643,"ALUBsr", false,-1, 1,0);
    tracep->declBit(c+247,"RegWr", false,-1);
    tracep->declBus(c+644,"Branch", false,-1, 2,0);
    tracep->declBit(c+645,"MemWr", false,-1);
    tracep->declBus(c+646,"MemOP", false,-1, 2,0);
    tracep->declBus(c+647,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+648,"isTuncate", false,-1);
    tracep->declBit(c+649,"isSext", false,-1);
    tracep->declBit(c+650,"IntrEn", false,-1);
    tracep->declBus(c+651,"Extop", false,-1, 2,0);
    tracep->declBus(c+652,"opcode", false,-1, 6,0);
    tracep->declBus(c+653,"func3", false,-1, 2,0);
    tracep->declBus(c+654,"func7", false,-1, 6,0);
    tracep->declBit(c+655,"isconditionalJump", false,-1);
    tracep->declBus(c+656,"BranchOpt", false,-1, 2,0);
    tracep->declBit(c+657,"isJal", false,-1);
    tracep->declBit(c+658,"isJalr", false,-1);
    tracep->declBit(c+659,"isMul", false,-1);
    tracep->declBus(c+660,"IntALUct", false,-1, 4,0);
    tracep->declBus(c+661,"MulALUct", false,-1, 4,0);
    tracep->declBit(c+662,"islui", false,-1);
    tracep->declBit(c+663,"isauipc", false,-1);
    tracep->declBit(c+664,"isMemW", false,-1);
    tracep->declBit(c+665,"isMemR", false,-1);
    tracep->pushNamePrefix("ImmGenU ");
    tracep->declBus(c+666,"Inst", false,-1, 31,7);
    tracep->declBus(c+651,"Extop", false,-1, 2,0);
    tracep->declQuad(c+640,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+994,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+640,"out", false,-1, 63,0);
    tracep->declBus(c+651,"key", false,-1, 2,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+667,"lut", false,-1, 334,0);
    tracep->declBus(c+1010,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+678+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+47+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+693+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+703,"lut_out", false,-1, 63,0);
    tracep->declBit(c+705,"hit", false,-1);
    tracep->declBus(c+1011,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+991,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+989,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+991,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+647,"out", false,-1, 1,0);
    tracep->declBus(c+652,"key", false,-1, 6,0);
    tracep->declBus(c+1012,"default_out", false,-1, 1,0);
    tracep->declBus(c+1013,"lut", false,-1, 17,0);
    tracep->declBus(c+1014,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+52+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+54+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+706,"lut_out", false,-1, 1,0);
    tracep->declBit(c+707,"hit", false,-1);
    tracep->declBus(c+1015,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+1016,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+989,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+990,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+651,"out", false,-1, 2,0);
    tracep->declBus(c+652,"key", false,-1, 6,0);
    tracep->declBus(c+1017,"default_out", false,-1, 2,0);
    tracep->declArray(c+1018,"lut", false,-1, 119,0);
    tracep->declBus(c+1022,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+70+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+82+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+708,"lut_out", false,-1, 2,0);
    tracep->declBit(c+709,"hit", false,-1);
    tracep->declBus(c+1023,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+992,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+989,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+650,"out", false,-1, 0,0);
    tracep->declBus(c+652,"key", false,-1, 6,0);
    tracep->declBus(c+996,"default_out", false,-1, 0,0);
    tracep->declBus(c+1024,"lut", false,-1, 7,0);
    tracep->declBus(c+1025,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+94+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+95+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+96+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+710,"lut_out", false,-1, 0,0);
    tracep->declBit(c+711,"hit", false,-1);
    tracep->declBus(c+1026,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+247,"out", false,-1, 0,0);
    tracep->declBus(c+651,"key", false,-1, 2,0);
    tracep->declBus(c+996,"default_out", false,-1, 0,0);
    tracep->declBus(c+1027,"lut", false,-1, 15,0);
    tracep->declBus(c+997,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+97+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+101+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+105+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+712,"lut_out", false,-1, 0,0);
    tracep->declBit(c+713,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_ALUAsr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+642,"din", false,-1, 0,0);
    tracep->declBus(c+279,"dout", false,-1, 0,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUBsr_reg ");
    tracep->declBus(c+991,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+643,"din", false,-1, 1,0);
    tracep->declBus(c+280,"dout", false,-1, 1,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUct_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1028,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+639,"din", false,-1, 4,0);
    tracep->declBus(c+276,"dout", false,-1, 4,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Branch_reg ");
    tracep->declBus(c+990,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1029,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+644,"din", false,-1, 2,0);
    tracep->declBus(c+285,"dout", false,-1, 2,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Imm_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+640,"din", false,-1, 63,0);
    tracep->declQuad(c+277,"dout", false,-1, 63,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Inst_reg ");
    tracep->declBus(c+1008,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+265,"din", false,-1, 31,0);
    tracep->declBus(c+283,"dout", false,-1, 31,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_IntrEn_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+650,"din", false,-1, 0,0);
    tracep->declBus(c+275,"dout", false,-1, 0,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemOP_reg ");
    tracep->declBus(c+990,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+646,"din", false,-1, 2,0);
    tracep->declBus(c+286,"dout", false,-1, 2,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemWr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+645,"din", false,-1, 0,0);
    tracep->declBus(c+287,"dout", false,-1, 0,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegSrc_reg ");
    tracep->declBus(c+991,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+647,"din", false,-1, 1,0);
    tracep->declBus(c+288,"dout", false,-1, 1,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegWr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 0,0);
    tracep->declBus(c+284,"dout", false,-1, 0,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs1_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+237,"din", false,-1, 63,0);
    tracep->declQuad(c+271,"dout", false,-1, 63,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs2_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+239,"din", false,-1, 63,0);
    tracep->declQuad(c+273,"dout", false,-1, 63,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isSext_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+649,"din", false,-1, 0,0);
    tracep->declBus(c+270,"dout", false,-1, 0,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isTuncate_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+648,"din", false,-1, 0,0);
    tracep->declBus(c+269,"dout", false,-1, 0,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+263,"din", false,-1, 63,0);
    tracep->declQuad(c+281,"dout", false,-1, 63,0);
    tracep->declBit(c+638,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_valid_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+637,"din", false,-1, 0,0);
    tracep->declBus(c+267,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBit(c+251,"isIntrPC", false,-1);
    tracep->declBit(c+248,"is_jump", false,-1);
    tracep->declQuad(c+249,"JumpPc", false,-1, 63,0);
    tracep->declQuad(c+252,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+981,"ARVALID", false,-1);
    tracep->declBus(c+254,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+981,"ARREADY", false,-1);
    tracep->declBit(c+1,"RREADY", false,-1);
    tracep->declQuad(c+255,"inst_i", false,-1, 63,0);
    tracep->declBit(c+257,"RVALID", false,-1);
    tracep->declBus(c+265,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+263,"pc_o", false,-1, 63,0);
    tracep->declBit(c+266,"ifu_valid", false,-1);
    tracep->declBit(c+268,"idu_ready", false,-1);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+981,"wb_valid", false,-1);
    tracep->declBit(c+714,"ifu_valid_next", false,-1);
    tracep->declBit(c+715,"popline_wen", false,-1);
    tracep->declQuad(c+716,"dpc", false,-1, 63,0);
    tracep->declQuad(c+718,"NextPC", false,-1, 63,0);
    tracep->declBus(c+720,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("id_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1031,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+718,"din", false,-1, 63,0);
    tracep->declQuad(c+263,"dout", false,-1, 63,0);
    tracep->declBit(c+715,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_inst_reg ");
    tracep->declBus(c+1008,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+720,"din", false,-1, 31,0);
    tracep->declBus(c+265,"dout", false,-1, 31,0);
    tracep->declBit(c+715,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pre_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1033,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+716,"din", false,-1, 63,0);
    tracep->declQuad(c+718,"dout", false,-1, 63,0);
    tracep->declBit(c+715,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_valid_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+714,"din", false,-1, 0,0);
    tracep->declBus(c+266,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_valid_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+714,"din", false,-1, 0,0);
    tracep->declBus(c+266,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+241,"addr", false,-1, 63,0);
    tracep->declQuad(c+294,"wdata", false,-1, 63,0);
    tracep->declBus(c+296,"MemOP", false,-1, 2,0);
    tracep->declBit(c+297,"we", false,-1);
    tracep->declQuad(c+309,"dataout", false,-1, 63,0);
    tracep->declBit(c+243,"clint_mtip", false,-1);
    tracep->declBit(c+298,"IntrEn_i", false,-1);
    tracep->declBus(c+299,"RegWdata_src_i", false,-1, 1,0);
    tracep->declBit(c+300,"RegWr_i", false,-1);
    tracep->declBus(c+303,"lsu_inst", false,-1, 31,0);
    tracep->declQuad(c+301,"lsu_pc", false,-1, 63,0);
    tracep->declQuad(c+292,"R_rs1_i", false,-1, 63,0);
    tracep->declBit(c+304,"IntrEn_o", false,-1);
    tracep->declBus(c+305,"RegWdata_src_o", false,-1, 1,0);
    tracep->declBit(c+306,"RegWr_o", false,-1);
    tracep->declBus(c+234,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+235,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+311,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+307,"ALUres_o", false,-1, 63,0);
    tracep->declBit(c+981,"exu_valid", false,-1);
    tracep->declBit(c+981,"lsu_ready", false,-1);
    tracep->declBit(c+981,"lsu_valid", false,-1);
    tracep->declBit(c+981,"wb_ready", false,-1);
    tracep->declBit(c+721,"isclint", false,-1);
    tracep->declBit(c+722,"RdEn", false,-1);
    tracep->declBit(c+723,"Datamem_we", false,-1);
    tracep->declBit(c+724,"clint_we", false,-1);
    tracep->declBit(c+725,"clint_re", false,-1);
    tracep->declQuad(c+726,"dataMem_out", false,-1, 63,0);
    tracep->declQuad(c+728,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+730,"clint_mtip_next", false,-1);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declQuad(c+241,"Addr", false,-1, 63,0);
    tracep->declBus(c+296,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+294,"DataIn", false,-1, 63,0);
    tracep->declBit(c+723,"WrEn", false,-1);
    tracep->declQuad(c+726,"DataOut", false,-1, 63,0);
    tracep->declBus(c+731,"wmask", false,-1, 7,0);
    tracep->declBit(c+732,"isSign", false,-1);
    tracep->declBit(c+733,"RdEn", false,-1);
    tracep->declBus(c+734,"shift", false,-1, 5,0);
    tracep->declArray(c+735,"data", false,-1, 127,0);
    tracep->declBus(c+739,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1025,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+731,"out", false,-1, 7,0);
    tracep->declBus(c+740,"key", false,-1, 1,0);
    tracep->declBus(c+1035,"default_out", false,-1, 7,0);
    tracep->declQuad(c+1036,"lut", false,-1, 39,0);
    tracep->declBus(c+1022,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+109+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+113+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+117+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+741,"lut_out", false,-1, 7,0);
    tracep->declBit(c+742,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+726,"out", false,-1, 63,0);
    tracep->declBus(c+740,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+743,"lut", false,-1, 263,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+752+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+121+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+764+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+772,"lut_out", false,-1, 63,0);
    tracep->declBit(c+774,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declQuad(c+294,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+241,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+724,"we", false,-1);
    tracep->declBit(c+725,"re", false,-1);
    tracep->declBit(c+730,"clint_mtip", false,-1);
    tracep->declQuad(c+728,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+775,"mtime", false,-1, 63,0);
    tracep->declQuad(c+777,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+779,"ismtimecmp", false,-1);
    tracep->declBit(c+780,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1038,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+996,"rst", false,-1);
    tracep->declQuad(c+294,"din", false,-1, 63,0);
    tracep->declQuad(c+777,"dout", false,-1, 63,0);
    tracep->declBit(c+781,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+298,"din", false,-1, 0,0);
    tracep->declBus(c+304,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_Rrs1_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+292,"din", false,-1, 63,0);
    tracep->declQuad(c+311,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_alures_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+241,"din", false,-1, 63,0);
    tracep->declQuad(c+307,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst_reg ");
    tracep->declBus(c+1008,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+303,"din", false,-1, 31,0);
    tracep->declBus(c+234,"dout", false,-1, 31,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mtip_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+730,"din", false,-1, 0,0);
    tracep->declBus(c+243,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+301,"din", false,-1, 63,0);
    tracep->declQuad(c+235,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_regdataSrc_reg ");
    tracep->declBus(c+991,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+299,"din", false,-1, 1,0);
    tracep->declBus(c+305,"dout", false,-1, 1,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_regwr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+300,"din", false,-1, 0,0);
    tracep->declBus(c+306,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_axi_lite_u ");
    tracep->declBus(c+1008,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+998,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+1025,"DSIZE", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"resetn", false,-1);
    tracep->declBus(c+982,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+983,"AWVALID", false,-1);
    tracep->declBit(c+259,"AWREADY", false,-1);
    tracep->declQuad(c+984,"WDATA", false,-1, 63,0);
    tracep->declBit(c+986,"WVALID", false,-1);
    tracep->declBit(c+260,"WREADY", false,-1);
    tracep->declBus(c+987,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+261,"BVALID", false,-1);
    tracep->declBus(c+262,"BRESP", false,-1, 1,0);
    tracep->declBit(c+988,"BREADY", false,-1);
    tracep->declBus(c+254,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+981,"ARVALID", false,-1);
    tracep->declBit(c+981,"ARREADY", false,-1);
    tracep->declQuad(c+255,"RDATA", false,-1, 63,0);
    tracep->declBus(c+258,"RRESP", false,-1, 1,0);
    tracep->declBit(c+257,"RVALID", false,-1);
    tracep->declBit(c+1,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+125+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+782,"waddr", false,-1, 31,0);
    tracep->declBus(c+783,"raddr", false,-1, 31,0);
    tracep->declBus(c+784,"wstrb", false,-1, 7,0);
    tracep->declBit(c+785,"wdata_done", false,-1);
    tracep->declBit(c+1040,"raddr_done", false,-1);
    tracep->declBus(c+129,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("witf ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+244,"rs1", false,-1, 4,0);
    tracep->declBus(c+245,"rs2", false,-1, 4,0);
    tracep->declBus(c+246,"rd", false,-1, 4,0);
    tracep->declBit(c+289,"isRAW", false,-1);
    tracep->declBit(c+247,"Regwr", false,-1);
    tracep->declBit(c+306,"isWB", false,-1);
    tracep->declBit(c+290,"witf_full", false,-1);
    tracep->declBit(c+291,"witf_empty", false,-1);
    tracep->declBus(c+786,"wptr_r", false,-1, 2,0);
    tracep->declBus(c+787,"rptr_r", false,-1, 2,0);
    tracep->declBus(c+788,"vld_r", false,-1, 7,0);
    tracep->declBus(c+789,"vld_set", false,-1, 7,0);
    tracep->declBus(c+790,"vld_clr", false,-1, 7,0);
    tracep->declBus(c+791,"vld_ena", false,-1, 7,0);
    tracep->declBus(c+792,"vld_nxt", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+793+i*1,"rdidx_r", true,(i+0), 4,0);
    }
    tracep->declBus(c+801,"rd_match_rs1idx", false,-1, 7,0);
    tracep->declBus(c+802,"rd_match_rs2idx", false,-1, 7,0);
    tracep->declBit(c+803,"witfrd_match_disprs1", false,-1);
    tracep->declBit(c+804,"witfrd_match_disprs2", false,-1);
    tracep->pushNamePrefix("depth_gt1 ");
    tracep->declBit(c+805,"wptr_flg_r", false,-1);
    tracep->declBit(c+806,"wptr_flg_nxt", false,-1);
    tracep->declBit(c+807,"wptr_flg_ena", false,-1);
    tracep->declBus(c+808,"wptr_nxt", false,-1, 2,0);
    tracep->declBit(c+809,"rptr_flg_r", false,-1);
    tracep->declBit(c+810,"rptr_flg_nxt", false,-1);
    tracep->declBit(c+811,"rptr_flg_ena", false,-1);
    tracep->declBus(c+812,"rptr_nxt", false,-1, 2,0);
    tracep->pushNamePrefix("rptr_flg_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+810,"din", false,-1, 0,0);
    tracep->declBus(c+809,"dout", false,-1, 0,0);
    tracep->declBit(c+811,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rptr_reg ");
    tracep->declBus(c+990,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+812,"din", false,-1, 2,0);
    tracep->declBus(c+787,"dout", false,-1, 2,0);
    tracep->declBit(c+306,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wptr_flg_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+806,"din", false,-1, 0,0);
    tracep->declBus(c+805,"dout", false,-1, 0,0);
    tracep->declBit(c+807,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wptr_reg ");
    tracep->declBus(c+990,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+808,"din", false,-1, 2,0);
    tracep->declBus(c+786,"dout", false,-1, 2,0);
    tracep->declBit(c+813,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[0] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 4,0);
    tracep->declBus(c+814,"dout", false,-1, 4,0);
    tracep->declBit(c+815,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+816,"din", false,-1, 0,0);
    tracep->declBus(c+817,"dout", false,-1, 0,0);
    tracep->declBit(c+818,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[1] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 4,0);
    tracep->declBus(c+819,"dout", false,-1, 4,0);
    tracep->declBit(c+820,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+821,"din", false,-1, 0,0);
    tracep->declBus(c+822,"dout", false,-1, 0,0);
    tracep->declBit(c+823,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[2] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 4,0);
    tracep->declBus(c+824,"dout", false,-1, 4,0);
    tracep->declBit(c+825,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+826,"din", false,-1, 0,0);
    tracep->declBus(c+827,"dout", false,-1, 0,0);
    tracep->declBit(c+828,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[3] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 4,0);
    tracep->declBus(c+829,"dout", false,-1, 4,0);
    tracep->declBit(c+830,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+831,"din", false,-1, 0,0);
    tracep->declBus(c+832,"dout", false,-1, 0,0);
    tracep->declBit(c+833,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[4] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 4,0);
    tracep->declBus(c+834,"dout", false,-1, 4,0);
    tracep->declBit(c+835,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+836,"din", false,-1, 0,0);
    tracep->declBus(c+837,"dout", false,-1, 0,0);
    tracep->declBit(c+838,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[5] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 4,0);
    tracep->declBus(c+839,"dout", false,-1, 4,0);
    tracep->declBit(c+840,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+841,"din", false,-1, 0,0);
    tracep->declBus(c+842,"dout", false,-1, 0,0);
    tracep->declBit(c+843,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[6] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 4,0);
    tracep->declBus(c+844,"dout", false,-1, 4,0);
    tracep->declBit(c+845,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+846,"din", false,-1, 0,0);
    tracep->declBus(c+847,"dout", false,-1, 0,0);
    tracep->declBit(c+848,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[7] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+246,"din", false,-1, 4,0);
    tracep->declBus(c+849,"dout", false,-1, 4,0);
    tracep->declBit(c+850,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+851,"din", false,-1, 0,0);
    tracep->declBus(c+852,"dout", false,-1, 0,0);
    tracep->declBit(c+853,"wen", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__WB__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__WB__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBit(c+304,"IntrEn", false,-1);
    tracep->declBit(c+243,"clint_mtip", false,-1);
    tracep->declBus(c+305,"Wdata_src", false,-1, 1,0);
    tracep->declBit(c+306,"RegWr", false,-1);
    tracep->declQuad(c+235,"wb_pc", false,-1, 63,0);
    tracep->declBus(c+234,"wb_inst", false,-1, 31,0);
    tracep->declQuad(c+307,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+309,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+311,"R_rs1_i", false,-1, 63,0);
    tracep->declBit(c+251,"isIntrPC", false,-1);
    tracep->declQuad(c+252,"IntrPC", false,-1, 63,0);
    tracep->declBus(c+244,"rs1", false,-1, 4,0);
    tracep->declBus(c+245,"rs2", false,-1, 4,0);
    tracep->declQuad(c+237,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+239,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+981,"lsu_valid", false,-1);
    tracep->declBit(c+981,"wb_ready", false,-1);
    tracep->declBit(c+981,"wb_valid", false,-1);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declQuad(c+151,"IntrOut", false,-1, 63,0);
    tracep->declQuad(c+153,"RegWdata", false,-1, 63,0);
    tracep->declQuad(c+854,"IntrPC_next", false,-1, 63,0);
    tracep->declBit(c+856,"isIntrPC_next", false,-1);
    tracep->pushNamePrefix("RegWsrcMux ");
    tracep->declBus(c+990,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+153,"out", false,-1, 63,0);
    tracep->declBus(c+305,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+155,"lut", false,-1, 197,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+1004,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+994,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+244,"rs1", false,-1, 4,0);
    tracep->declBus(c+245,"rs2", false,-1, 4,0);
    tracep->declBus(c+857,"waddr", false,-1, 4,0);
    tracep->declQuad(c+237,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+239,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declQuad(c+153,"wdata", false,-1, 63,0);
    tracep->declBit(c+306,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+858+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+922,"isw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrPC_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+854,"din", false,-1, 63,0);
    tracep->declQuad(c+252,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_isIntrPC_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+856,"din", false,-1, 0,0);
    tracep->declBus(c+251,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__WB__IntrUnit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__WB__IntrUnit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+304,"IntrEn", false,-1);
    tracep->declBit(c+243,"clint_mtip", false,-1);
    tracep->declQuad(c+235,"pc", false,-1, 63,0);
    tracep->declQuad(c+311,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+923,"zimm", false,-1, 4,0);
    tracep->declBus(c+924,"csr", false,-1, 11,0);
    tracep->declBus(c+925,"func3", false,-1, 2,0);
    tracep->declBit(c+856,"isIntrPC", false,-1);
    tracep->declQuad(c+854,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+151,"dout", false,-1, 63,0);
    tracep->declQuad(c+926,"mepc", false,-1, 63,0);
    tracep->declQuad(c+928,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+930,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+932,"mie", false,-1, 63,0);
    tracep->declQuad(c+1000,"mip", false,-1, 63,0);
    tracep->declQuad(c+963,"mcase", false,-1, 63,0);
    tracep->declBit(c+1041,"isCSRw", false,-1);
    tracep->declBit(c+934,"mstatus_MIE", false,-1);
    tracep->declBit(c+935,"mie_MTIE", false,-1);
    tracep->declBit(c+936,"timer_irq", false,-1);
    tracep->declBit(c+937,"irq_raise", false,-1);
    tracep->declBit(c+996,"mip_MTIP", false,-1);
    tracep->declBit(c+938,"isecall", false,-1);
    tracep->declQuad(c+939,"eNo", false,-1, 63,0);
    tracep->declBit(c+941,"ismret", false,-1);
    tracep->declBit(c+942,"ismtvec", false,-1);
    tracep->declBit(c+943,"ismepc", false,-1);
    tracep->declBit(c+944,"ismcase", false,-1);
    tracep->declBit(c+945,"ismstatus", false,-1);
    tracep->declBit(c+946,"ismie", false,-1);
    tracep->declBit(c+947,"ismip", false,-1);
    tracep->declQuad(c+180,"csrWData", false,-1, 63,0);
    tracep->declQuad(c+182,"mepcIn", false,-1, 63,0);
    tracep->declQuad(c+184,"mcaseIn", false,-1, 63,0);
    tracep->declBit(c+948,"mstatus_MPIE", false,-1);
    tracep->declQuad(c+186,"mstatusIn", false,-1, 63,0);
    tracep->pushNamePrefix("CSRwEn ");
    tracep->declBus(c+991,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+939,"out", false,-1, 63,0);
    tracep->declBus(c+949,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+1042,"lut", false,-1, 131,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+133+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+139+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+141+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+950,"lut_out", false,-1, 63,0);
    tracep->declBit(c+952,"hit", false,-1);
    tracep->declBus(c+1015,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcaseReg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1000,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+996,"rst", false,-1);
    tracep->declQuad(c+184,"din", false,-1, 63,0);
    tracep->declQuad(c+963,"dout", false,-1, 63,0);
    tracep->declBit(c+953,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcReg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1000,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+996,"rst", false,-1);
    tracep->declQuad(c+182,"din", false,-1, 63,0);
    tracep->declQuad(c+926,"dout", false,-1, 63,0);
    tracep->declBit(c+954,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mieReg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1000,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+996,"rst", false,-1);
    tracep->declQuad(c+180,"din", false,-1, 63,0);
    tracep->declQuad(c+932,"dout", false,-1, 63,0);
    tracep->declBit(c+955,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatusReg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1047,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+996,"rst", false,-1);
    tracep->declQuad(c+186,"din", false,-1, 63,0);
    tracep->declQuad(c+930,"dout", false,-1, 63,0);
    tracep->declBit(c+956,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvecReg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1000,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+996,"rst", false,-1);
    tracep->declQuad(c+180,"din", false,-1, 63,0);
    tracep->declQuad(c+928,"dout", false,-1, 63,0);
    tracep->declBit(c+957,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scrDataSrc ");
    tracep->declBus(c+999,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+180,"out", false,-1, 63,0);
    tracep->declBus(c+925,"key", false,-1, 2,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+188,"lut", false,-1, 401,0);
    tracep->declBus(c+1010,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+1049,"i", false,-1, 31,0);
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
    bufp->fullQData(oldp+237,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                              [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+239,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                              [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+241,(vlSymsp->TOP__top.__PVT__ALUres),64);
    bufp->fullBit(oldp+243,(vlSymsp->TOP__top.__PVT__clint_mtip));
    bufp->fullCData(oldp+244,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+245,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+246,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+247,(vlSymsp->TOP__top.__PVT__RegWr_d));
    bufp->fullBit(oldp+248,(vlSymsp->TOP__top.__PVT__ifu_is_jump));
    bufp->fullQData(oldp+249,(((0ULL == vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)),64);
    bufp->fullBit(oldp+251,(vlSymsp->TOP__top__WB.__PVT__isIntrPC));
    bufp->fullQData(oldp+252,(vlSymsp->TOP__top__WB.__PVT__IntrPC),64);
    bufp->fullIData(oldp+254,((IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc)),32);
    bufp->fullQData(oldp+255,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+257,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+258,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+259,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+262,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullQData(oldp+263,(vlSymsp->TOP__top.__PVT__id_pc),64);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__top.__PVT__id_inst),32);
    bufp->fullBit(oldp+266,(vlSymsp->TOP__top.__PVT__ifu_valid));
    bufp->fullBit(oldp+267,(vlSymsp->TOP__top.__PVT__idu_valid));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__top.__PVT__idu_ready));
    bufp->fullBit(oldp+269,(vlSymsp->TOP__top.__PVT__exu_isTuncate));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__top.__PVT__exu_isSext));
    bufp->fullQData(oldp+271,(vlSymsp->TOP__top.__PVT__ex_Rrs1),64);
    bufp->fullQData(oldp+273,(vlSymsp->TOP__top.__PVT__ex_Rrs2),64);
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top.__PVT__exu_IntrEn));
    bufp->fullCData(oldp+276,(vlSymsp->TOP__top.__PVT__exu_ALUct),5);
    bufp->fullQData(oldp+277,(vlSymsp->TOP__top.__PVT__exu_Imm),64);
    bufp->fullBit(oldp+279,(vlSymsp->TOP__top.__PVT__exu_ALUAsr));
    bufp->fullCData(oldp+280,(vlSymsp->TOP__top.__PVT__exu_ALUBsr),2);
    bufp->fullQData(oldp+281,(vlSymsp->TOP__top.__PVT__ex_pc),64);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__top.__PVT__ex_inst),32);
    bufp->fullBit(oldp+284,(vlSymsp->TOP__top.__PVT__exu_RegWr));
    bufp->fullCData(oldp+285,(vlSymsp->TOP__top.__PVT__exu_Branch),3);
    bufp->fullCData(oldp+286,(vlSymsp->TOP__top.__PVT__exu_MemOP),3);
    bufp->fullBit(oldp+287,(vlSymsp->TOP__top.__PVT__exu_MemWr));
    bufp->fullCData(oldp+288,(vlSymsp->TOP__top.__PVT__exu_RegSrc),2);
    bufp->fullBit(oldp+289,(vlSymsp->TOP__top.__PVT__isRAW));
    bufp->fullBit(oldp+290,(vlSymsp->TOP__top.__PVT__witf_full));
    bufp->fullBit(oldp+291,((((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r) 
                              == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r)) 
                             & ((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r) 
                                == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
    bufp->fullQData(oldp+292,(vlSymsp->TOP__top.__PVT__mem_Rrs1),64);
    bufp->fullQData(oldp+294,(vlSymsp->TOP__top.__PVT__mem_Rrs2),64);
    bufp->fullCData(oldp+296,(vlSymsp->TOP__top.__PVT__mem_MemOP),3);
    bufp->fullBit(oldp+297,(vlSymsp->TOP__top.__PVT__mem_MemWr));
    bufp->fullBit(oldp+298,(vlSymsp->TOP__top.__PVT__mem_IntrEn));
    bufp->fullCData(oldp+299,(vlSymsp->TOP__top.__PVT__lsu_RegSrc),2);
    bufp->fullBit(oldp+300,(vlSymsp->TOP__top.__PVT__lsu_Regwr));
    bufp->fullQData(oldp+301,(vlSymsp->TOP__top.__PVT__lsu_pc),64);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__top.__PVT__lsu_inst),32);
    bufp->fullBit(oldp+304,(vlSymsp->TOP__top.__PVT__wb_IntrEn));
    bufp->fullCData(oldp+305,(vlSymsp->TOP__top.__PVT__wb_RegSrc),2);
    bufp->fullBit(oldp+306,(vlSymsp->TOP__top.__PVT__wb_RegWr));
    bufp->fullQData(oldp+307,(vlSymsp->TOP__top.__PVT__wb_ALUres),64);
    bufp->fullQData(oldp+309,(vlSymsp->TOP__top.__PVT__memout),64);
    bufp->fullQData(oldp+311,(vlSymsp->TOP__top.__PVT__wb_Rrs1),64);
    bufp->fullQData(oldp+313,(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
    bufp->fullBit(oldp+315,(vlSymsp->TOP__top.__PVT__EXU__DOT__Less));
    bufp->fullBit(oldp+316,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))))));
    bufp->fullBit(oldp+317,((1U & ((IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+318,((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+319,(((2U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__exu_Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+321,(((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__ex_pc
                                : vlSymsp->TOP__top.__PVT__ex_Rrs1)),64);
    bufp->fullQData(oldp+323,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp),64);
    bufp->fullCData(oldp+325,(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+326,((QData)((IData)((0x898537eU 
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
    bufp->fullCData(oldp+328,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+329,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+330,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+331,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+334,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+335,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+336,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+337,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+338,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+339,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+340,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+343,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+344,((0x248adfU | ((0x1000000U 
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
    bufp->fullCData(oldp+345,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+346,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+347,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+348,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+349,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+350,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+351,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
    bufp->fullBit(oldp+352,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
    bufp->fullBit(oldp+353,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
    bufp->fullBit(oldp+354,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
    bufp->fullBit(oldp+355,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
    bufp->fullBit(oldp+356,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
    bufp->fullBit(oldp+357,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
    bufp->fullBit(oldp+358,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit));
    bufp->fullQData(oldp+361,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA),64);
    bufp->fullQData(oldp+363,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB),64);
    bufp->fullBit(oldp+365,((1U & ((IData)(vlSymsp->TOP__top.__PVT__exu_ALUct) 
                                   >> 3U))));
    bufp->fullBit(oldp+366,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add));
    bufp->fullBit(oldp+367,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__exu_ALUct)))));
    bufp->fullQData(oldp+368,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder),64);
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
    bufp->fullBit(oldp+370,((1U & __Vtemp_hdd5810e3__0[2U])));
    bufp->fullBit(oldp+371,((((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                >> 0x3fU)))) 
                             & ((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                               >> 0x3fU))) 
                                != (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+372,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessS));
    bufp->fullBit(oldp+373,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessUS));
    bufp->fullQData(oldp+374,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift),64);
    bufp->fullQData(oldp+376,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR),64);
    bufp->fullQData(oldp+378,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR),64);
    bufp->fullQData(oldp+380,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND),64);
    bufp->fullQData(oldp+382,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL),64);
    bufp->fullQData(oldp+384,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV),64);
    bufp->fullQData(oldp+386,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM),64);
    bufp->fullQData(oldp+388,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout),64);
    bufp->fullQData(oldp+390,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin),64);
    bufp->fullCData(oldp+392,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB))),6);
    bufp->fullCData(oldp+393,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt),6);
    bufp->fullQData(oldp+394,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra),64);
    bufp->fullCData(oldp+396,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
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
    bufp->fullWData(oldp+397,(__Vtemp_h2d6007f7__0),264);
    bufp->fullWData(oldp+406,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+409,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+412,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+415,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+418,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+420,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+422,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+424,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
    bufp->fullQData(oldp+426,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
    bufp->fullBit(oldp+428,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
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
    bufp->fullWData(oldp+429,(__Vtemp_hef6aeef8__0),198);
    bufp->fullWData(oldp+436,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+439,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+442,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+445,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+447,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+449,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+451,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out),64);
    bufp->fullBit(oldp+453,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit));
    bufp->fullCData(oldp+454,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key),4);
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
    bufp->fullWData(oldp+455,(__Vtemp_h9798c001__0),1088);
    bufp->fullWData(oldp+489,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+492,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+495,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+498,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+501,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+504,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+507,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+510,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+513,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+516,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+519,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[10]),68);
    bufp->fullWData(oldp+522,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[11]),68);
    bufp->fullWData(oldp+525,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[12]),68);
    bufp->fullWData(oldp+528,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[13]),68);
    bufp->fullWData(oldp+531,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[14]),68);
    bufp->fullWData(oldp+534,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[15]),68);
    bufp->fullQData(oldp+537,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0]),64);
    bufp->fullQData(oldp+539,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1]),64);
    bufp->fullQData(oldp+541,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2]),64);
    bufp->fullQData(oldp+543,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3]),64);
    bufp->fullQData(oldp+545,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4]),64);
    bufp->fullQData(oldp+547,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5]),64);
    bufp->fullQData(oldp+549,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6]),64);
    bufp->fullQData(oldp+551,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7]),64);
    bufp->fullQData(oldp+553,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8]),64);
    bufp->fullQData(oldp+555,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9]),64);
    bufp->fullQData(oldp+557,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[10]),64);
    bufp->fullQData(oldp+559,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[11]),64);
    bufp->fullQData(oldp+561,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[12]),64);
    bufp->fullQData(oldp+563,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[13]),64);
    bufp->fullQData(oldp+565,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[14]),64);
    bufp->fullQData(oldp+567,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[15]),64);
    bufp->fullQData(oldp+569,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out),64);
    bufp->fullBit(oldp+571,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit));
    bufp->fullCData(oldp+572,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__diver__key),2);
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
    bufp->fullWData(oldp+573,(__Vtemp_hdf62be76__0),264);
    bufp->fullWData(oldp+582,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+585,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+588,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+591,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+594,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0]),64);
    bufp->fullQData(oldp+596,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1]),64);
    bufp->fullQData(oldp+598,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2]),64);
    bufp->fullQData(oldp+600,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3]),64);
    bufp->fullQData(oldp+602,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out),64);
    bufp->fullBit(oldp+604,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit));
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
    bufp->fullWData(oldp+605,(__Vtemp_hbbbb0901__0),264);
    bufp->fullWData(oldp+614,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+617,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+620,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+623,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+626,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0]),64);
    bufp->fullQData(oldp+628,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1]),64);
    bufp->fullQData(oldp+630,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2]),64);
    bufp->fullQData(oldp+632,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3]),64);
    bufp->fullQData(oldp+634,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out),64);
    bufp->fullBit(oldp+636,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit));
    bufp->fullBit(oldp+637,(((IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_hd66fa622__0) 
                             & ((IData)(vlSymsp->TOP__top.__PVT__idu_ready) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__ifu_valid) 
                                   & (IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_h23869681__0))))));
    bufp->fullBit(oldp+638,(vlSymsp->TOP__top.__PVT__IDU__DOT__popline_wen));
    bufp->fullCData(oldp+639,((((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
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
    bufp->fullQData(oldp+640,(vlSymsp->TOP__top.__PVT__IDU__DOT__Imm_d),64);
    bufp->fullBit(oldp+642,((((0x67U != (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))));
    bufp->fullCData(oldp+643,(((IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
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
    bufp->fullCData(oldp+644,(((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                ? (5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xcU)) : 
                               ((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                 ? 6U : ((0x67U == 
                                          (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))
                                          ? 7U : 2U)))),3);
    bufp->fullBit(oldp+645,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemWr_d));
    bufp->fullCData(oldp+646,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemOP_d),3);
    bufp->fullCData(oldp+647,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegSrc_d),2);
    bufp->fullBit(oldp+648,(vlSymsp->TOP__top.__PVT__IDU__DOT__isTuncate_d));
    bufp->fullBit(oldp+649,(vlSymsp->TOP__top.__PVT__IDU__DOT__isSext_d));
    bufp->fullBit(oldp+650,(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d));
    bufp->fullCData(oldp+651,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop),3);
    bufp->fullCData(oldp+652,((0x7fU & vlSymsp->TOP__top.__PVT__id_inst)),7);
    bufp->fullCData(oldp+653,((7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+654,((vlSymsp->TOP__top.__PVT__id_inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+655,((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullCData(oldp+656,((5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+657,((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullBit(oldp+658,((0x67U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+659,((((0x33U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))) 
                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+660,(((3U == (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0xcU)))
                                ? 0xaU : ((((vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x7020U 
                                                & vlSymsp->TOP__top.__PVT__id_inst))) 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullCData(oldp+661,((0x10U | ((8U & (vlSymsp->TOP__top.__PVT__id_inst 
                                               >> 9U)) 
                                        | (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullBit(oldp+662,((0x37U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+663,((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+664,((0x23U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+665,((3U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullIData(oldp+666,((vlSymsp->TOP__top.__PVT__id_inst 
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
    bufp->fullWData(oldp+667,(__Vtemp_hf0d68bd5__0),335);
    bufp->fullWData(oldp+678,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+681,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+684,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+687,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+690,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+693,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+695,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+697,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+699,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+701,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+703,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+705,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
    bufp->fullCData(oldp+706,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+707,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+708,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+709,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+710,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+711,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+712,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+713,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit));
    bufp->fullBit(oldp+714,(vlSymsp->TOP__top.__PVT__IFU__DOT__ifu_valid_next));
    bufp->fullBit(oldp+715,(vlSymsp->TOP__top.__PVT__IFU__DOT__popline_wen));
    bufp->fullQData(oldp+716,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
    bufp->fullQData(oldp+718,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
    bufp->fullIData(oldp+720,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                           >> 0x20U)))),32);
    bufp->fullBit(oldp+721,(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint));
    bufp->fullBit(oldp+722,(((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                             & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
    bufp->fullBit(oldp+723,(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we));
    bufp->fullBit(oldp+724,(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we));
    bufp->fullBit(oldp+725,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                             & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))));
    bufp->fullQData(oldp+726,(vlSymsp->TOP__top.__PVT__LSU__DOT__dataMem_out),64);
    bufp->fullQData(oldp+728,(((- (QData)((IData)(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                                   & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                                      & (0U 
                                                         != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))))) 
                               & ((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)
                                   ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime
                                   : ((0x2004000ULL 
                                       == vlSymsp->TOP__top.__PVT__ALUres)
                                       ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                       : 0ULL)))),64);
    bufp->fullBit(oldp+730,((vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp)));
    bufp->fullCData(oldp+731,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+732,((1U & ((IData)(vlSymsp->TOP__top.__PVT__mem_MemOP) 
                                   >> 2U))));
    bufp->fullBit(oldp+733,(((~ (IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we)) 
                             & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
    bufp->fullCData(oldp+734,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+735,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+739,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__extmask),16);
    bufp->fullCData(oldp+740,((3U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))),2);
    bufp->fullCData(oldp+741,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+742,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit));
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
    bufp->fullWData(oldp+743,(__Vtemp_h76b581e7__0),264);
    bufp->fullWData(oldp+752,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+755,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+758,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+761,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+764,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+766,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+768,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+770,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+772,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+774,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit));
    bufp->fullQData(oldp+775,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime),64);
    bufp->fullQData(oldp+777,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp),64);
    bufp->fullBit(oldp+779,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+780,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+781,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we) 
                             & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
    bufp->fullIData(oldp+782,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
    bufp->fullIData(oldp+783,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullCData(oldp+784,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
    bufp->fullBit(oldp+785,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    bufp->fullCData(oldp+786,(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r),3);
    bufp->fullCData(oldp+787,(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r),3);
    bufp->fullCData(oldp+788,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullCData(oldp+789,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
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
    bufp->fullCData(oldp+790,((((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0) 
                                << 7U) | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0) 
                                           << 6U) | 
                                          (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0) 
                                            << 5U) 
                                           | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0))))))))),8);
    bufp->fullCData(oldp+791,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                                 | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
                                << 7U) | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                                            | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0)) 
                                           << 6U) | 
                                          ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0)) 
                                            << 5U) 
                                           | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                                                | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0)) 
                                               << 4U) 
                                              | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                                                   | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0)) 
                                                  << 3U) 
                                                 | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                                                      | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0)) 
                                                     << 2U) 
                                                    | ((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                                                         | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0)) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                                                          | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0)))))))))),8);
    bufp->fullCData(oldp+792,(((0x80U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
                                          | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)) 
                                         << 7U)) | 
                               ((0x40U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0)) 
                                           | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)) 
                                          << 6U)) | 
                                ((0x20U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0)) 
                                            | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)) 
                                           << 5U)) 
                                 | ((0x10U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0)) 
                                               | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)) 
                                              << 4U)) 
                                    | ((8U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0)) 
                                               | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)) 
                                              << 3U)) 
                                       | ((4U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0)) 
                                                  | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0)) 
                                                | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)) 
                                               << 1U)) 
                                             | (1U 
                                                & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0)) 
                                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5))))))))))),8);
    bufp->fullCData(oldp+793,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[0]),5);
    bufp->fullCData(oldp+794,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[1]),5);
    bufp->fullCData(oldp+795,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[2]),5);
    bufp->fullCData(oldp+796,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[3]),5);
    bufp->fullCData(oldp+797,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[4]),5);
    bufp->fullCData(oldp+798,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[5]),5);
    bufp->fullCData(oldp+799,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[6]),5);
    bufp->fullCData(oldp+800,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[7]),5);
    bufp->fullCData(oldp+801,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullCData(oldp+802,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullBit(oldp+803,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullBit(oldp+804,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullBit(oldp+805,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r));
    bufp->fullBit(oldp+806,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
    bufp->fullBit(oldp+807,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena));
    bufp->fullCData(oldp+808,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena)
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r))))),3);
    bufp->fullBit(oldp+809,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r));
    bufp->fullBit(oldp+810,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r)))));
    bufp->fullBit(oldp+811,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena));
    bufp->fullCData(oldp+812,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena)
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r))))),3);
    bufp->fullBit(oldp+813,(vlSymsp->TOP__top.witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5));
    bufp->fullCData(oldp+814,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+815,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+816,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+817,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+818,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0))));
    bufp->fullCData(oldp+819,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+820,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+821,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+822,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+823,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0))));
    bufp->fullCData(oldp+824,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+825,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+826,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+827,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+828,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0))));
    bufp->fullCData(oldp+829,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+830,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+831,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+832,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+833,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0))));
    bufp->fullCData(oldp+834,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+835,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+836,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+837,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+838,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0))));
    bufp->fullCData(oldp+839,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+840,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+841,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+842,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+843,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0))));
    bufp->fullCData(oldp+844,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+845,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+846,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+847,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+848,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0))));
    bufp->fullCData(oldp+849,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+850,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+851,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+852,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4));
    bufp->fullBit(oldp+853,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0))));
    bufp->fullQData(oldp+854,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec
                                : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)
                                    ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc
                                    : vlSymsp->TOP__top.__PVT__wb_pc))),64);
    bufp->fullBit(oldp+856,((((IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn) 
                              & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullCData(oldp+857,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 7U))),5);
    bufp->fullQData(oldp+858,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[0]),64);
    bufp->fullQData(oldp+860,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[1]),64);
    bufp->fullQData(oldp+862,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[2]),64);
    bufp->fullQData(oldp+864,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[3]),64);
    bufp->fullQData(oldp+866,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[4]),64);
    bufp->fullQData(oldp+868,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[5]),64);
    bufp->fullQData(oldp+870,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[6]),64);
    bufp->fullQData(oldp+872,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[7]),64);
    bufp->fullQData(oldp+874,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[8]),64);
    bufp->fullQData(oldp+876,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[9]),64);
    bufp->fullQData(oldp+878,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[10]),64);
    bufp->fullQData(oldp+880,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[11]),64);
    bufp->fullQData(oldp+882,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[12]),64);
    bufp->fullQData(oldp+884,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[13]),64);
    bufp->fullQData(oldp+886,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[14]),64);
    bufp->fullQData(oldp+888,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[15]),64);
    bufp->fullQData(oldp+890,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[16]),64);
    bufp->fullQData(oldp+892,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[17]),64);
    bufp->fullQData(oldp+894,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[18]),64);
    bufp->fullQData(oldp+896,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[19]),64);
    bufp->fullQData(oldp+898,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[20]),64);
    bufp->fullQData(oldp+900,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[21]),64);
    bufp->fullQData(oldp+902,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[22]),64);
    bufp->fullQData(oldp+904,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[23]),64);
    bufp->fullQData(oldp+906,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[24]),64);
    bufp->fullQData(oldp+908,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[25]),64);
    bufp->fullQData(oldp+910,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[26]),64);
    bufp->fullQData(oldp+912,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[27]),64);
    bufp->fullQData(oldp+914,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[28]),64);
    bufp->fullQData(oldp+916,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[29]),64);
    bufp->fullQData(oldp+918,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[30]),64);
    bufp->fullQData(oldp+920,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[31]),64);
    bufp->fullBit(oldp+922,(((IData)(vlSymsp->TOP__top.__PVT__wb_RegWr) 
                             & (0U != (0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                >> 7U))))));
    bufp->fullCData(oldp+923,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0xfU))),5);
    bufp->fullSData(oldp+924,((vlSymsp->TOP__top.__PVT__wb_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+925,((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                     >> 0xcU))),3);
    bufp->fullQData(oldp+926,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc),64);
    bufp->fullQData(oldp+928,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec),64);
    bufp->fullQData(oldp+930,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus),64);
    bufp->fullQData(oldp+932,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie),64);
    bufp->fullBit(oldp+934,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                           >> 3U)))));
    bufp->fullBit(oldp+935,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie 
                                           >> 7U)))));
    bufp->fullBit(oldp+936,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__timer_irq));
    bufp->fullBit(oldp+937,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise));
    bufp->fullBit(oldp+938,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isecall));
    bufp->fullQData(oldp+939,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo),64);
    bufp->fullBit(oldp+941,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret));
    bufp->fullBit(oldp+942,((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+943,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc));
    bufp->fullBit(oldp+944,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase));
    bufp->fullBit(oldp+945,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus));
    bufp->fullBit(oldp+946,((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+947,((0x344U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+948,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                           >> 7U)))));
    bufp->fullCData(oldp+949,(vlSymsp->TOP__top__WB__IntrUnit.__Vcellinp__CSRwEn__key),2);
    bufp->fullQData(oldp+950,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
    bufp->fullBit(oldp+952,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__hit));
    bufp->fullBit(oldp+953,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+954,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+955,(((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
    bufp->fullBit(oldp+956,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+957,(((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
    bufp->fullBit(oldp+958,(vlSelf->clk));
    bufp->fullBit(oldp+959,(vlSelf->rst));
    bufp->fullIData(oldp+960,(vlSelf->Inst),32);
    bufp->fullQData(oldp+961,(vlSelf->pc),64);
    bufp->fullQData(oldp+963,(vlSymsp->TOP__top__WB__IntrUnit.mcase),64);
    bufp->fullCData(oldp+965,(vlSymsp->TOP__top.__PVT__Extop),3);
    bufp->fullQData(oldp+966,(vlSymsp->TOP__top.__PVT__waddr),64);
    bufp->fullBit(oldp+968,(vlSymsp->TOP__top.__PVT__Less));
    bufp->fullBit(oldp+969,(vlSymsp->TOP__top.__PVT__Zero));
    bufp->fullQData(oldp+970,(vlSymsp->TOP__top.__PVT__MemOut),64);
    bufp->fullQData(oldp+972,(vlSymsp->TOP__top.__PVT__RegWdata),64);
    bufp->fullBit(oldp+974,(vlSymsp->TOP__top.__PVT__IntrEn));
    bufp->fullQData(oldp+975,(vlSymsp->TOP__top.__PVT__IntrOut),64);
    bufp->fullBit(oldp+977,(vlSymsp->TOP__top.__PVT__clint_we));
    bufp->fullBit(oldp+978,(vlSymsp->TOP__top.__PVT__clint_re));
    bufp->fullQData(oldp+979,(vlSymsp->TOP__top.__PVT__clint_dout),64);
    bufp->fullBit(oldp+981,(1U));
    bufp->fullIData(oldp+982,(vlSymsp->TOP__top.__PVT__AWADDR),32);
    bufp->fullBit(oldp+983,(vlSymsp->TOP__top.__PVT__AWVALID));
    bufp->fullQData(oldp+984,(vlSymsp->TOP__top.__PVT__WDATA),64);
    bufp->fullBit(oldp+986,(vlSymsp->TOP__top.__PVT__WVALID));
    bufp->fullCData(oldp+987,(vlSymsp->TOP__top.__PVT__WSTRB),8);
    bufp->fullBit(oldp+988,(vlSymsp->TOP__top.__PVT__BREADY));
    bufp->fullIData(oldp+989,(7U),32);
    bufp->fullIData(oldp+990,(3U),32);
    bufp->fullIData(oldp+991,(2U),32);
    bufp->fullIData(oldp+992,(1U),32);
    bufp->fullCData(oldp+993,(1U),2);
    bufp->fullIData(oldp+994,(5U),32);
    bufp->fullIData(oldp+995,(7U),32);
    bufp->fullBit(oldp+996,(0U));
    bufp->fullIData(oldp+997,(4U),32);
    bufp->fullIData(oldp+998,(0x40U),32);
    bufp->fullIData(oldp+999,(6U),32);
    bufp->fullQData(oldp+1000,(0ULL),64);
    bufp->fullIData(oldp+1002,(0x42U),32);
    bufp->fullIData(oldp+1003,(4U),32);
    bufp->fullIData(oldp+1004,(3U),32);
    bufp->fullIData(oldp+1005,(0x10U),32);
    bufp->fullIData(oldp+1006,(0x44U),32);
    bufp->fullIData(oldp+1007,(0x10U),32);
    bufp->fullIData(oldp+1008,(0x20U),32);
    bufp->fullIData(oldp+1009,(0U),32);
    bufp->fullIData(oldp+1010,(0x43U),32);
    bufp->fullIData(oldp+1011,(5U),32);
    bufp->fullCData(oldp+1012,(0U),2);
    bufp->fullIData(oldp+1013,(0x1bceU),18);
    bufp->fullIData(oldp+1014,(9U),32);
    bufp->fullIData(oldp+1015,(2U),32);
    bufp->fullIData(oldp+1016,(0xcU),32);
    bufp->fullCData(oldp+1017,(0U),3);
    __Vtemp_hd6f60a5b__0[0U] = 0x37eceb9aU;
    __Vtemp_hd6f60a5b__0[1U] = 0xd46c1ac7U;
    __Vtemp_hd6f60a5b__0[2U] = 0x65d92f5bU;
    __Vtemp_hd6f60a5b__0[3U] = 0x268da6U;
    bufp->fullWData(oldp+1018,(__Vtemp_hd6f60a5b__0),120);
    bufp->fullIData(oldp+1022,(0xaU),32);
    bufp->fullIData(oldp+1023,(0xcU),32);
    bufp->fullCData(oldp+1024,(0xe7U),8);
    bufp->fullIData(oldp+1025,(8U),32);
    bufp->fullIData(oldp+1026,(1U),32);
    bufp->fullSData(oldp+1027,(0x35bdU),16);
    bufp->fullCData(oldp+1028,(0U),5);
    bufp->fullIData(oldp+1029,(2U),32);
    bufp->fullBit(oldp+1030,(0U));
    bufp->fullQData(oldp+1031,(0x7ffffff8ULL),64);
    bufp->fullQData(oldp+1033,(0x7ffffffcULL),64);
    bufp->fullCData(oldp+1035,(0U),8);
    bufp->fullQData(oldp+1036,(0xc060343cffULL),40);
    bufp->fullQData(oldp+1038,(0xffffffffffffffffULL),64);
    bufp->fullBit(oldp+1040,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr_done));
    bufp->fullBit(oldp+1041,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isCSRw));
    __Vtemp_h058c0b04__0[0U] = 7U;
    __Vtemp_h058c0b04__0[1U] = 0x80000000U;
    __Vtemp_h058c0b04__0[2U] = 0x2eU;
    __Vtemp_h058c0b04__0[3U] = 0U;
    __Vtemp_h058c0b04__0[4U] = 4U;
    bufp->fullWData(oldp+1042,(__Vtemp_h058c0b04__0),132);
    bufp->fullQData(oldp+1047,(0xa00001800ULL),64);
    bufp->fullIData(oldp+1049,(6U),32);
}
