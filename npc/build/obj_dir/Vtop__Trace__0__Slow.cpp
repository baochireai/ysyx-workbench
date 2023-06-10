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
    tracep->declBit(c+254,"ifu_arvalid", false,-1);
    tracep->declBus(c+255,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+981,"ram_arready", false,-1);
    tracep->declQuad(c+256,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+258,"ram_rvalid", false,-1);
    tracep->declBus(c+259,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+982,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+983,"AWVALID", false,-1);
    tracep->declBit(c+260,"AWREADY", false,-1);
    tracep->declQuad(c+984,"WDATA", false,-1, 63,0);
    tracep->declBit(c+986,"WVALID", false,-1);
    tracep->declBit(c+261,"WREADY", false,-1);
    tracep->declBus(c+987,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+262,"BVALID", false,-1);
    tracep->declBus(c+263,"BRESP", false,-1, 1,0);
    tracep->declBit(c+988,"BREADY", false,-1);
    tracep->declQuad(c+264,"id_pc", false,-1, 63,0);
    tracep->declBus(c+266,"id_inst", false,-1, 31,0);
    tracep->declBit(c+267,"ifu_valid", false,-1);
    tracep->declBit(c+268,"idu_valid", false,-1);
    tracep->declBit(c+269,"idu_ready", false,-1);
    tracep->declBit(c+981,"exu_valid", false,-1);
    tracep->declBit(c+981,"exu_ready", false,-1);
    tracep->declBit(c+981,"lsu_valid", false,-1);
    tracep->declBit(c+981,"lsu_ready", false,-1);
    tracep->declBit(c+981,"wb_valid", false,-1);
    tracep->declBit(c+981,"wb_ready", false,-1);
    tracep->declBit(c+270,"exu_isTuncate", false,-1);
    tracep->declBit(c+271,"exu_isSext", false,-1);
    tracep->declQuad(c+272,"ex_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+274,"ex_Rrs2", false,-1, 63,0);
    tracep->declBit(c+276,"exu_IntrEn", false,-1);
    tracep->declBus(c+277,"exu_ALUct", false,-1, 4,0);
    tracep->declQuad(c+278,"exu_Imm", false,-1, 63,0);
    tracep->declBit(c+280,"exu_ALUAsr", false,-1);
    tracep->declBus(c+281,"exu_ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+282,"ex_pc", false,-1, 63,0);
    tracep->declBus(c+284,"ex_inst", false,-1, 31,0);
    tracep->declBit(c+285,"exu_RegWr", false,-1);
    tracep->declBus(c+286,"exu_Branch", false,-1, 2,0);
    tracep->declBus(c+287,"exu_MemOP", false,-1, 2,0);
    tracep->declBit(c+288,"exu_MemWr", false,-1);
    tracep->declBus(c+289,"exu_RegSrc", false,-1, 1,0);
    tracep->declBit(c+290,"isRAW", false,-1);
    tracep->declBit(c+291,"witf_full", false,-1);
    tracep->declBit(c+292,"witf_empty", false,-1);
    tracep->declQuad(c+293,"mem_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+295,"mem_Rrs2", false,-1, 63,0);
    tracep->declBus(c+297,"mem_MemOP", false,-1, 2,0);
    tracep->declBit(c+298,"mem_MemWr", false,-1);
    tracep->declBit(c+299,"mem_IntrEn", false,-1);
    tracep->declBus(c+300,"lsu_RegSrc", false,-1, 1,0);
    tracep->declBit(c+301,"lsu_Regwr", false,-1);
    tracep->declQuad(c+302,"lsu_pc", false,-1, 63,0);
    tracep->declBus(c+304,"lsu_inst", false,-1, 31,0);
    tracep->declBit(c+305,"wb_IntrEn", false,-1);
    tracep->declBus(c+306,"wb_RegSrc", false,-1, 1,0);
    tracep->declBit(c+307,"wb_RegWr", false,-1);
    tracep->declQuad(c+235,"wb_pc", false,-1, 63,0);
    tracep->declBus(c+234,"wb_inst", false,-1, 31,0);
    tracep->declQuad(c+308,"wb_ALUres", false,-1, 63,0);
    tracep->declQuad(c+310,"memout", false,-1, 63,0);
    tracep->declQuad(c+312,"wb_Rrs1", false,-1, 63,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+284,"exu_inst", false,-1, 31,0);
    tracep->declQuad(c+282,"exu_pc", false,-1, 63,0);
    tracep->declBit(c+280,"ALUAsr", false,-1);
    tracep->declBus(c+281,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+277,"ALUct", false,-1, 4,0);
    tracep->declBit(c+270,"isTuncate", false,-1);
    tracep->declBit(c+271,"isSext", false,-1);
    tracep->declBit(c+285,"Regwr_i", false,-1);
    tracep->declBus(c+287,"MemOP_i", false,-1, 2,0);
    tracep->declBit(c+288,"MemWr_i", false,-1);
    tracep->declBit(c+276,"IntrEn", false,-1);
    tracep->declBus(c+286,"Branch", false,-1, 2,0);
    tracep->declBus(c+289,"RegSrc", false,-1, 1,0);
    tracep->declQuad(c+272,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+274,"R_rs2", false,-1, 63,0);
    tracep->declQuad(c+278,"Imm", false,-1, 63,0);
    tracep->declQuad(c+241,"wb_ALUres", false,-1, 63,0);
    tracep->declBit(c+301,"Regwr_o", false,-1);
    tracep->declQuad(c+295,"R_rs2_o", false,-1, 63,0);
    tracep->declQuad(c+293,"R_rs1_o", false,-1, 63,0);
    tracep->declBus(c+297,"MemOP_o", false,-1, 2,0);
    tracep->declBit(c+298,"MemWr_o", false,-1);
    tracep->declBit(c+299,"IntrEn_o", false,-1);
    tracep->declQuad(c+249,"NextPC", false,-1, 63,0);
    tracep->declBit(c+248,"is_jump", false,-1);
    tracep->declBus(c+300,"RegSrc_o", false,-1, 1,0);
    tracep->declBus(c+304,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+302,"pc_o", false,-1, 63,0);
    tracep->declBit(c+268,"idu_valid", false,-1);
    tracep->declBit(c+981,"exu_ready", false,-1);
    tracep->declBit(c+981,"lsu_ready", false,-1);
    tracep->declBit(c+981,"exu_valid", false,-1);
    tracep->declBit(c+981,"popline_wen", false,-1);
    tracep->declQuad(c+314,"ALUres", false,-1, 63,0);
    tracep->declBit(c+316,"Less", false,-1);
    tracep->declBit(c+317,"Zero", false,-1);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+286,"Branch", false,-1, 2,0);
    tracep->declQuad(c+278,"imm", false,-1, 63,0);
    tracep->declQuad(c+282,"PC", false,-1, 63,0);
    tracep->declQuad(c+272,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+316,"Less", false,-1);
    tracep->declBit(c+317,"Zero", false,-1);
    tracep->declQuad(c+249,"NextPC", false,-1, 63,0);
    tracep->declBit(c+248,"is_jump", false,-1);
    tracep->declBit(c+318,"PCAsrc", false,-1);
    tracep->declBit(c+319,"PCBsrc", false,-1);
    tracep->declQuad(c+320,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+322,"Bsrc", false,-1, 63,0);
    tracep->declQuad(c+324,"NextPCp", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+989,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+991,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+326,"out", false,-1, 1,0);
    tracep->declBus(c+286,"key", false,-1, 2,0);
    tracep->declBus(c+993,"default_out", false,-1, 1,0);
    tracep->declQuad(c+327,"lut", false,-1, 34,0);
    tracep->declBus(c+994,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+329+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+2+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+336+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+343,"lut_out", false,-1, 1,0);
    tracep->declBit(c+344,"hit", false,-1);
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("jump_check ");
    tracep->declBus(c+989,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+248,"out", false,-1, 0,0);
    tracep->declBus(c+286,"key", false,-1, 2,0);
    tracep->declBus(c+996,"default_out", false,-1, 0,0);
    tracep->declBus(c+345,"lut", false,-1, 27,0);
    tracep->declBus(c+997,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+346+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+353+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+360,"lut_out", false,-1, 0,0);
    tracep->declBit(c+361,"hit", false,-1);
    tracep->declBus(c+995,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBit(c+280,"ALUAsr", false,-1);
    tracep->declQuad(c+282,"PC", false,-1, 63,0);
    tracep->declQuad(c+272,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+281,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+278,"Imm", false,-1, 63,0);
    tracep->declQuad(c+274,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+277,"ALUct", false,-1, 4,0);
    tracep->declBit(c+270,"isTuncate", false,-1);
    tracep->declBit(c+271,"isSext", false,-1);
    tracep->declQuad(c+314,"ALUres", false,-1, 63,0);
    tracep->declBit(c+316,"Less", false,-1);
    tracep->declBit(c+317,"Zero", false,-1);
    tracep->declQuad(c+362,"ALUA", false,-1, 63,0);
    tracep->declQuad(c+364,"ALUB", false,-1, 63,0);
    tracep->declBit(c+366,"US_S", false,-1);
    tracep->declBit(c+367,"Sub_Add", false,-1);
    tracep->declBit(c+366,"A_L", false,-1);
    tracep->declBit(c+368,"L_R", false,-1);
    tracep->declQuad(c+369,"adder", false,-1, 63,0);
    tracep->declBit(c+371,"Carry", false,-1);
    tracep->declBit(c+372,"Overflow", false,-1);
    tracep->declBit(c+373,"lessS", false,-1);
    tracep->declBit(c+374,"lessUS", false,-1);
    tracep->declQuad(c+375,"shift", false,-1, 63,0);
    tracep->declQuad(c+377,"XOR", false,-1, 63,0);
    tracep->declQuad(c+379,"OR", false,-1, 63,0);
    tracep->declQuad(c+381,"AND", false,-1, 63,0);
    tracep->declQuad(c+383,"MUL", false,-1, 63,0);
    tracep->declQuad(c+385,"DIV", false,-1, 63,0);
    tracep->declQuad(c+387,"REM", false,-1, 63,0);
    tracep->declQuad(c+389,"ALUout", false,-1, 63,0);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+362,"A", false,-1, 63,0);
    tracep->declQuad(c+364,"B", false,-1, 63,0);
    tracep->declBit(c+367,"Cin", false,-1);
    tracep->declQuad(c+369,"Result", false,-1, 63,0);
    tracep->declBit(c+371,"Carry", false,-1);
    tracep->declBit(c+372,"Overflow", false,-1);
    tracep->declBit(c+317,"zero", false,-1);
    tracep->declQuad(c+391,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+999,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+362,"din", false,-1, 63,0);
    tracep->declBus(c+393,"shamtin", false,-1, 5,0);
    tracep->declBit(c+366,"A_L", false,-1);
    tracep->declBit(c+368,"L_R", false,-1);
    tracep->declBit(c+270,"isTuncate", false,-1);
    tracep->declQuad(c+375,"dout", false,-1, 63,0);
    tracep->declBus(c+394,"shamt", false,-1, 5,0);
    tracep->declQuad(c+395,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+375,"out", false,-1, 63,0);
    tracep->declBus(c+397,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+398,"lut", false,-1, 263,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+407+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+419+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+427,"lut_out", false,-1, 63,0);
    tracep->declBit(c+429,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+990,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+364,"out", false,-1, 63,0);
    tracep->declBus(c+281,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+430,"lut", false,-1, 197,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+437+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+446+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+452,"lut_out", false,-1, 63,0);
    tracep->declBit(c+454,"hit", false,-1);
    tracep->declBus(c+1004,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+1005,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+997,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+389,"out", false,-1, 63,0);
    tracep->declBus(c+455,"key", false,-1, 3,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+456,"lut", false,-1, 1087,0);
    tracep->declBus(c+1006,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+490+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+538+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+570,"lut_out", false,-1, 63,0);
    tracep->declBit(c+572,"hit", false,-1);
    tracep->declBus(c+1007,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+385,"out", false,-1, 63,0);
    tracep->declBus(c+573,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+574,"lut", false,-1, 263,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+583+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+39+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+595+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+603,"lut_out", false,-1, 63,0);
    tracep->declBit(c+605,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+387,"out", false,-1, 63,0);
    tracep->declBus(c+573,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+606,"lut", false,-1, 263,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+615+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+627+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+635,"lut_out", false,-1, 63,0);
    tracep->declBit(c+637,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem_Inst_reg ");
    tracep->declBus(c+1008,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+284,"din", false,-1, 31,0);
    tracep->declBus(c+304,"dout", false,-1, 31,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+282,"din", false,-1, 63,0);
    tracep->declQuad(c+302,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_ALUres_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+314,"din", false,-1, 63,0);
    tracep->declQuad(c+241,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+276,"din", false,-1, 0,0);
    tracep->declBus(c+299,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemOP_reg ");
    tracep->declBus(c+990,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+287,"din", false,-1, 2,0);
    tracep->declBus(c+297,"dout", false,-1, 2,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemWr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+288,"din", false,-1, 0,0);
    tracep->declBus(c+298,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs1_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+272,"din", false,-1, 63,0);
    tracep->declQuad(c+293,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs2_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+274,"din", false,-1, 63,0);
    tracep->declQuad(c+295,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_RegSrc_reg ");
    tracep->declBus(c+991,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+289,"din", false,-1, 1,0);
    tracep->declBus(c+300,"dout", false,-1, 1,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_Regwr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+285,"din", false,-1, 0,0);
    tracep->declBus(c+301,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+266,"id_inst", false,-1, 31,0);
    tracep->declQuad(c+264,"id_pc", false,-1, 63,0);
    tracep->declQuad(c+237,"R_rs1_i", false,-1, 63,0);
    tracep->declQuad(c+239,"R_rs2_i", false,-1, 63,0);
    tracep->declBit(c+290,"isRAW", false,-1);
    tracep->declBit(c+291,"witf_full", false,-1);
    tracep->declBus(c+277,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+278,"Imm", false,-1, 63,0);
    tracep->declBit(c+280,"ALUAsr", false,-1);
    tracep->declBus(c+281,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+284,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+282,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+272,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+274,"R_rs2_o", false,-1, 63,0);
    tracep->declBus(c+286,"Branch", false,-1, 2,0);
    tracep->declBit(c+288,"MemWr", false,-1);
    tracep->declBus(c+287,"MemOP", false,-1, 2,0);
    tracep->declBus(c+289,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+270,"isTuncate", false,-1);
    tracep->declBit(c+271,"isSext", false,-1);
    tracep->declBit(c+276,"IntrEn", false,-1);
    tracep->declBit(c+285,"RegWr", false,-1);
    tracep->declBus(c+244,"rs1", false,-1, 4,0);
    tracep->declBus(c+245,"rs2", false,-1, 4,0);
    tracep->declBus(c+246,"rd", false,-1, 4,0);
    tracep->declBit(c+247,"RegWr_d", false,-1);
    tracep->declBit(c+267,"ifu_valid", false,-1);
    tracep->declBit(c+269,"idu_ready", false,-1);
    tracep->declBit(c+268,"idu_valid", false,-1);
    tracep->declBit(c+981,"exu_ready", false,-1);
    tracep->declBit(c+638,"idu_valid_next", false,-1);
    tracep->declBit(c+639,"popline_wen", false,-1);
    tracep->declBus(c+640,"ALUct_d", false,-1, 4,0);
    tracep->declQuad(c+641,"Imm_d", false,-1, 63,0);
    tracep->declBit(c+643,"ALUAsr_d", false,-1);
    tracep->declBus(c+644,"ALUBsr_d", false,-1, 1,0);
    tracep->declBus(c+645,"Branch_d", false,-1, 2,0);
    tracep->declBit(c+646,"MemWr_d", false,-1);
    tracep->declBus(c+647,"MemOP_d", false,-1, 2,0);
    tracep->declBus(c+648,"RegSrc_d", false,-1, 1,0);
    tracep->declBit(c+649,"isTuncate_d", false,-1);
    tracep->declBit(c+650,"isSext_d", false,-1);
    tracep->declBit(c+651,"IntrEn_d", false,-1);
    tracep->pushNamePrefix("ContrGenU ");
    tracep->declBus(c+266,"id_inst", false,-1, 31,0);
    tracep->declBus(c+640,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+641,"Imm", false,-1, 63,0);
    tracep->declBit(c+643,"ALUAsr", false,-1);
    tracep->declBus(c+644,"ALUBsr", false,-1, 1,0);
    tracep->declBit(c+247,"RegWr", false,-1);
    tracep->declBus(c+645,"Branch", false,-1, 2,0);
    tracep->declBit(c+646,"MemWr", false,-1);
    tracep->declBus(c+647,"MemOP", false,-1, 2,0);
    tracep->declBus(c+648,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+649,"isTuncate", false,-1);
    tracep->declBit(c+650,"isSext", false,-1);
    tracep->declBit(c+651,"IntrEn", false,-1);
    tracep->declBus(c+652,"Extop", false,-1, 2,0);
    tracep->declBus(c+653,"opcode", false,-1, 6,0);
    tracep->declBus(c+654,"func3", false,-1, 2,0);
    tracep->declBus(c+655,"func7", false,-1, 6,0);
    tracep->declBit(c+656,"isconditionalJump", false,-1);
    tracep->declBus(c+657,"BranchOpt", false,-1, 2,0);
    tracep->declBit(c+658,"isJal", false,-1);
    tracep->declBit(c+659,"isJalr", false,-1);
    tracep->declBit(c+660,"isMul", false,-1);
    tracep->declBus(c+661,"IntALUct", false,-1, 4,0);
    tracep->declBus(c+662,"MulALUct", false,-1, 4,0);
    tracep->declBit(c+663,"islui", false,-1);
    tracep->declBit(c+664,"isauipc", false,-1);
    tracep->declBit(c+665,"isMemW", false,-1);
    tracep->declBit(c+666,"isMemR", false,-1);
    tracep->pushNamePrefix("ImmGenU ");
    tracep->declBus(c+667,"Inst", false,-1, 31,7);
    tracep->declBus(c+652,"Extop", false,-1, 2,0);
    tracep->declQuad(c+641,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+994,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+641,"out", false,-1, 63,0);
    tracep->declBus(c+652,"key", false,-1, 2,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+668,"lut", false,-1, 334,0);
    tracep->declBus(c+1010,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+679+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+47+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+694+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+704,"lut_out", false,-1, 63,0);
    tracep->declBit(c+706,"hit", false,-1);
    tracep->declBus(c+1011,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+991,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+989,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+991,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+648,"out", false,-1, 1,0);
    tracep->declBus(c+653,"key", false,-1, 6,0);
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
    tracep->declBus(c+707,"lut_out", false,-1, 1,0);
    tracep->declBit(c+708,"hit", false,-1);
    tracep->declBus(c+1015,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+1016,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+989,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+990,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+652,"out", false,-1, 2,0);
    tracep->declBus(c+653,"key", false,-1, 6,0);
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
    tracep->declBus(c+709,"lut_out", false,-1, 2,0);
    tracep->declBit(c+710,"hit", false,-1);
    tracep->declBus(c+1023,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+992,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+989,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+651,"out", false,-1, 0,0);
    tracep->declBus(c+653,"key", false,-1, 6,0);
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
    tracep->declBus(c+711,"lut_out", false,-1, 0,0);
    tracep->declBit(c+712,"hit", false,-1);
    tracep->declBus(c+1026,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+990,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+247,"out", false,-1, 0,0);
    tracep->declBus(c+652,"key", false,-1, 2,0);
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
    tracep->declBus(c+713,"lut_out", false,-1, 0,0);
    tracep->declBit(c+714,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_ALUAsr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+643,"din", false,-1, 0,0);
    tracep->declBus(c+280,"dout", false,-1, 0,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUBsr_reg ");
    tracep->declBus(c+991,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+644,"din", false,-1, 1,0);
    tracep->declBus(c+281,"dout", false,-1, 1,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUct_reg ");
    tracep->declBus(c+994,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1028,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+640,"din", false,-1, 4,0);
    tracep->declBus(c+277,"dout", false,-1, 4,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Branch_reg ");
    tracep->declBus(c+990,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1029,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+645,"din", false,-1, 2,0);
    tracep->declBus(c+286,"dout", false,-1, 2,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Imm_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+641,"din", false,-1, 63,0);
    tracep->declQuad(c+278,"dout", false,-1, 63,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Inst_reg ");
    tracep->declBus(c+1008,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+266,"din", false,-1, 31,0);
    tracep->declBus(c+284,"dout", false,-1, 31,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_IntrEn_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+651,"din", false,-1, 0,0);
    tracep->declBus(c+276,"dout", false,-1, 0,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemOP_reg ");
    tracep->declBus(c+990,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+647,"din", false,-1, 2,0);
    tracep->declBus(c+287,"dout", false,-1, 2,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemWr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+646,"din", false,-1, 0,0);
    tracep->declBus(c+288,"dout", false,-1, 0,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegSrc_reg ");
    tracep->declBus(c+991,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+648,"din", false,-1, 1,0);
    tracep->declBus(c+289,"dout", false,-1, 1,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegWr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 0,0);
    tracep->declBus(c+285,"dout", false,-1, 0,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs1_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+237,"din", false,-1, 63,0);
    tracep->declQuad(c+272,"dout", false,-1, 63,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs2_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+239,"din", false,-1, 63,0);
    tracep->declQuad(c+274,"dout", false,-1, 63,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isSext_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+650,"din", false,-1, 0,0);
    tracep->declBus(c+271,"dout", false,-1, 0,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isTuncate_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+649,"din", false,-1, 0,0);
    tracep->declBus(c+270,"dout", false,-1, 0,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+264,"din", false,-1, 63,0);
    tracep->declQuad(c+282,"dout", false,-1, 63,0);
    tracep->declBit(c+639,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_valid_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+638,"din", false,-1, 0,0);
    tracep->declBus(c+268,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBit(c+251,"isIntrPC", false,-1);
    tracep->declBit(c+248,"is_jump", false,-1);
    tracep->declQuad(c+249,"JumpPc", false,-1, 63,0);
    tracep->declQuad(c+252,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+254,"ARVALID", false,-1);
    tracep->declBus(c+255,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+981,"ARREADY", false,-1);
    tracep->declBit(c+1,"RREADY", false,-1);
    tracep->declQuad(c+256,"inst_i", false,-1, 63,0);
    tracep->declBit(c+258,"RVALID", false,-1);
    tracep->declBus(c+266,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+264,"pc_o", false,-1, 63,0);
    tracep->declBit(c+267,"ifu_valid", false,-1);
    tracep->declBit(c+269,"idu_ready", false,-1);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+981,"wb_valid", false,-1);
    tracep->declBit(c+715,"ifu_valid_next", false,-1);
    tracep->declBit(c+716,"popline_wen", false,-1);
    tracep->declQuad(c+717,"dpc", false,-1, 63,0);
    tracep->declQuad(c+719,"NextPC", false,-1, 63,0);
    tracep->declBus(c+721,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("id_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1031,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+719,"din", false,-1, 63,0);
    tracep->declQuad(c+264,"dout", false,-1, 63,0);
    tracep->declBit(c+716,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_inst_reg ");
    tracep->declBus(c+1008,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+721,"din", false,-1, 31,0);
    tracep->declBus(c+266,"dout", false,-1, 31,0);
    tracep->declBit(c+716,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pre_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1033,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+717,"din", false,-1, 63,0);
    tracep->declQuad(c+719,"dout", false,-1, 63,0);
    tracep->declBit(c+716,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_valid_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+715,"din", false,-1, 0,0);
    tracep->declBus(c+267,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_valid_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+715,"din", false,-1, 0,0);
    tracep->declBus(c+267,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+241,"addr", false,-1, 63,0);
    tracep->declQuad(c+295,"wdata", false,-1, 63,0);
    tracep->declBus(c+297,"MemOP", false,-1, 2,0);
    tracep->declBit(c+298,"we", false,-1);
    tracep->declQuad(c+310,"dataout", false,-1, 63,0);
    tracep->declBit(c+243,"clint_mtip", false,-1);
    tracep->declBit(c+299,"IntrEn_i", false,-1);
    tracep->declBus(c+300,"RegWdata_src_i", false,-1, 1,0);
    tracep->declBit(c+301,"RegWr_i", false,-1);
    tracep->declBus(c+304,"lsu_inst", false,-1, 31,0);
    tracep->declQuad(c+302,"lsu_pc", false,-1, 63,0);
    tracep->declQuad(c+293,"R_rs1_i", false,-1, 63,0);
    tracep->declBit(c+305,"IntrEn_o", false,-1);
    tracep->declBus(c+306,"RegWdata_src_o", false,-1, 1,0);
    tracep->declBit(c+307,"RegWr_o", false,-1);
    tracep->declBus(c+234,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+235,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+312,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+308,"ALUres_o", false,-1, 63,0);
    tracep->declBit(c+981,"exu_valid", false,-1);
    tracep->declBit(c+981,"lsu_ready", false,-1);
    tracep->declBit(c+981,"lsu_valid", false,-1);
    tracep->declBit(c+981,"wb_ready", false,-1);
    tracep->declBit(c+722,"isclint", false,-1);
    tracep->declBit(c+723,"RdEn", false,-1);
    tracep->declBit(c+724,"Datamem_we", false,-1);
    tracep->declBit(c+725,"clint_we", false,-1);
    tracep->declBit(c+726,"clint_re", false,-1);
    tracep->declQuad(c+727,"dataMem_out", false,-1, 63,0);
    tracep->declQuad(c+729,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+731,"clint_mtip_next", false,-1);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declQuad(c+241,"Addr", false,-1, 63,0);
    tracep->declBus(c+297,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+295,"DataIn", false,-1, 63,0);
    tracep->declBit(c+724,"WrEn", false,-1);
    tracep->declQuad(c+727,"DataOut", false,-1, 63,0);
    tracep->declBus(c+732,"wmask", false,-1, 7,0);
    tracep->declBit(c+733,"isSign", false,-1);
    tracep->declBit(c+734,"RdEn", false,-1);
    tracep->declBus(c+735,"shift", false,-1, 5,0);
    tracep->declArray(c+736,"data", false,-1, 127,0);
    tracep->declBus(c+740,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1025,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+732,"out", false,-1, 7,0);
    tracep->declBus(c+741,"key", false,-1, 1,0);
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
    tracep->declBus(c+742,"lut_out", false,-1, 7,0);
    tracep->declBit(c+743,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+997,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+991,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+998,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+992,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+727,"out", false,-1, 63,0);
    tracep->declBus(c+741,"key", false,-1, 1,0);
    tracep->declQuad(c+1000,"default_out", false,-1, 63,0);
    tracep->declArray(c+744,"lut", false,-1, 263,0);
    tracep->declBus(c+1002,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+753+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+121+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+765+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+773,"lut_out", false,-1, 63,0);
    tracep->declBit(c+775,"hit", false,-1);
    tracep->declBus(c+1003,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declQuad(c+295,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+241,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+725,"we", false,-1);
    tracep->declBit(c+726,"re", false,-1);
    tracep->declBit(c+731,"clint_mtip", false,-1);
    tracep->declQuad(c+729,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+776,"mtime", false,-1, 63,0);
    tracep->declQuad(c+778,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+780,"ismtimecmp", false,-1);
    tracep->declBit(c+781,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1038,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+996,"rst", false,-1);
    tracep->declQuad(c+295,"din", false,-1, 63,0);
    tracep->declQuad(c+778,"dout", false,-1, 63,0);
    tracep->declBit(c+782,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+299,"din", false,-1, 0,0);
    tracep->declBus(c+305,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_Rrs1_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+293,"din", false,-1, 63,0);
    tracep->declQuad(c+312,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_alures_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+241,"din", false,-1, 63,0);
    tracep->declQuad(c+308,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst_reg ");
    tracep->declBus(c+1008,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+304,"din", false,-1, 31,0);
    tracep->declBus(c+234,"dout", false,-1, 31,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mtip_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+731,"din", false,-1, 0,0);
    tracep->declBus(c+243,"dout", false,-1, 0,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_pc_reg ");
    tracep->declBus(c+998,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declQuad(c+302,"din", false,-1, 63,0);
    tracep->declQuad(c+235,"dout", false,-1, 63,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_regdataSrc_reg ");
    tracep->declBus(c+991,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+300,"din", false,-1, 1,0);
    tracep->declBus(c+306,"dout", false,-1, 1,0);
    tracep->declBit(c+981,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_regwr_reg ");
    tracep->declBus(c+992,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1009,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+301,"din", false,-1, 0,0);
    tracep->declBus(c+307,"dout", false,-1, 0,0);
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
    tracep->declBit(c+260,"AWREADY", false,-1);
    tracep->declQuad(c+984,"WDATA", false,-1, 63,0);
    tracep->declBit(c+986,"WVALID", false,-1);
    tracep->declBit(c+261,"WREADY", false,-1);
    tracep->declBus(c+987,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+262,"BVALID", false,-1);
    tracep->declBus(c+263,"BRESP", false,-1, 1,0);
    tracep->declBit(c+988,"BREADY", false,-1);
    tracep->declBus(c+255,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+254,"ARVALID", false,-1);
    tracep->declBit(c+981,"ARREADY", false,-1);
    tracep->declQuad(c+256,"RDATA", false,-1, 63,0);
    tracep->declBus(c+259,"RRESP", false,-1, 1,0);
    tracep->declBit(c+258,"RVALID", false,-1);
    tracep->declBit(c+1,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+125+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+783,"waddr", false,-1, 31,0);
    tracep->declBus(c+784,"raddr", false,-1, 31,0);
    tracep->declBus(c+785,"wstrb", false,-1, 7,0);
    tracep->declBit(c+786,"wdata_done", false,-1);
    tracep->declBit(c+1040,"raddr_done", false,-1);
    tracep->declBus(c+129,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("witf ");
    tracep->declBit(c+958,"clk", false,-1);
    tracep->declBit(c+959,"rst", false,-1);
    tracep->declBus(c+244,"rs1", false,-1, 4,0);
    tracep->declBus(c+245,"rs2", false,-1, 4,0);
    tracep->declBus(c+246,"rd", false,-1, 4,0);
    tracep->declBit(c+290,"isRAW", false,-1);
    tracep->declBit(c+247,"Regwr", false,-1);
    tracep->declBit(c+307,"isWB", false,-1);
    tracep->declBit(c+291,"witf_full", false,-1);
    tracep->declBit(c+292,"witf_empty", false,-1);
    tracep->declBus(c+787,"wptr_r", false,-1, 2,0);
    tracep->declBus(c+788,"rptr_r", false,-1, 2,0);
    tracep->declBus(c+789,"vld_r", false,-1, 7,0);
    tracep->declBus(c+790,"vld_set", false,-1, 7,0);
    tracep->declBus(c+791,"vld_clr", false,-1, 7,0);
    tracep->declBus(c+792,"vld_ena", false,-1, 7,0);
    tracep->declBus(c+793,"vld_nxt", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+794+i*1,"rdidx_r", true,(i+0), 4,0);
    }
    tracep->declBus(c+802,"rd_match_rs1idx", false,-1, 7,0);
    tracep->declBus(c+803,"rd_match_rs2idx", false,-1, 7,0);
    tracep->declBit(c+290,"witfrd_match_disprs1", false,-1);
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
    tracep->declBus(c+788,"dout", false,-1, 2,0);
    tracep->declBit(c+307,"wen", false,-1);
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
    tracep->declBus(c+787,"dout", false,-1, 2,0);
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
    tracep->declBit(c+305,"IntrEn", false,-1);
    tracep->declBit(c+243,"clint_mtip", false,-1);
    tracep->declBus(c+306,"Wdata_src", false,-1, 1,0);
    tracep->declBit(c+307,"RegWr", false,-1);
    tracep->declQuad(c+235,"wb_pc", false,-1, 63,0);
    tracep->declBus(c+234,"wb_inst", false,-1, 31,0);
    tracep->declQuad(c+308,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+310,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+312,"R_rs1_i", false,-1, 63,0);
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
    tracep->declBus(c+306,"key", false,-1, 1,0);
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
    tracep->declBit(c+307,"wen", false,-1);
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
    tracep->declBit(c+305,"IntrEn", false,-1);
    tracep->declBit(c+243,"clint_mtip", false,-1);
    tracep->declQuad(c+235,"pc", false,-1, 63,0);
    tracep->declQuad(c+312,"R_rs1", false,-1, 63,0);
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
    bufp->fullBit(oldp+254,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
    bufp->fullIData(oldp+255,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
    bufp->fullQData(oldp+256,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+258,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+259,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+260,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+263,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullQData(oldp+264,(vlSymsp->TOP__top.__PVT__id_pc),64);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__top.__PVT__id_inst),32);
    bufp->fullBit(oldp+267,(vlSymsp->TOP__top.__PVT__ifu_valid));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__top.__PVT__idu_valid));
    bufp->fullBit(oldp+269,(vlSymsp->TOP__top.__PVT__idu_ready));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__top.__PVT__exu_isTuncate));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__top.__PVT__exu_isSext));
    bufp->fullQData(oldp+272,(vlSymsp->TOP__top.__PVT__ex_Rrs1),64);
    bufp->fullQData(oldp+274,(vlSymsp->TOP__top.__PVT__ex_Rrs2),64);
    bufp->fullBit(oldp+276,(vlSymsp->TOP__top.__PVT__exu_IntrEn));
    bufp->fullCData(oldp+277,(vlSymsp->TOP__top.__PVT__exu_ALUct),5);
    bufp->fullQData(oldp+278,(vlSymsp->TOP__top.__PVT__exu_Imm),64);
    bufp->fullBit(oldp+280,(vlSymsp->TOP__top.__PVT__exu_ALUAsr));
    bufp->fullCData(oldp+281,(vlSymsp->TOP__top.__PVT__exu_ALUBsr),2);
    bufp->fullQData(oldp+282,(vlSymsp->TOP__top.__PVT__ex_pc),64);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__top.__PVT__ex_inst),32);
    bufp->fullBit(oldp+285,(vlSymsp->TOP__top.__PVT__exu_RegWr));
    bufp->fullCData(oldp+286,(vlSymsp->TOP__top.__PVT__exu_Branch),3);
    bufp->fullCData(oldp+287,(vlSymsp->TOP__top.__PVT__exu_MemOP),3);
    bufp->fullBit(oldp+288,(vlSymsp->TOP__top.__PVT__exu_MemWr));
    bufp->fullCData(oldp+289,(vlSymsp->TOP__top.__PVT__exu_RegSrc),2);
    bufp->fullBit(oldp+290,((0U != (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rd_match_rs1idx))));
    bufp->fullBit(oldp+291,(vlSymsp->TOP__top.__PVT__witf_full));
    bufp->fullBit(oldp+292,((((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r) 
                              == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r)) 
                             & ((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r) 
                                == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
    bufp->fullQData(oldp+293,(vlSymsp->TOP__top.__PVT__mem_Rrs1),64);
    bufp->fullQData(oldp+295,(vlSymsp->TOP__top.__PVT__mem_Rrs2),64);
    bufp->fullCData(oldp+297,(vlSymsp->TOP__top.__PVT__mem_MemOP),3);
    bufp->fullBit(oldp+298,(vlSymsp->TOP__top.__PVT__mem_MemWr));
    bufp->fullBit(oldp+299,(vlSymsp->TOP__top.__PVT__mem_IntrEn));
    bufp->fullCData(oldp+300,(vlSymsp->TOP__top.__PVT__lsu_RegSrc),2);
    bufp->fullBit(oldp+301,(vlSymsp->TOP__top.__PVT__lsu_Regwr));
    bufp->fullQData(oldp+302,(vlSymsp->TOP__top.__PVT__lsu_pc),64);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__top.__PVT__lsu_inst),32);
    bufp->fullBit(oldp+305,(vlSymsp->TOP__top.__PVT__wb_IntrEn));
    bufp->fullCData(oldp+306,(vlSymsp->TOP__top.__PVT__wb_RegSrc),2);
    bufp->fullBit(oldp+307,(vlSymsp->TOP__top.__PVT__wb_RegWr));
    bufp->fullQData(oldp+308,(vlSymsp->TOP__top.__PVT__wb_ALUres),64);
    bufp->fullQData(oldp+310,(vlSymsp->TOP__top.__PVT__memout),64);
    bufp->fullQData(oldp+312,(vlSymsp->TOP__top.__PVT__wb_Rrs1),64);
    bufp->fullQData(oldp+314,(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
    bufp->fullBit(oldp+316,(vlSymsp->TOP__top.__PVT__EXU__DOT__Less));
    bufp->fullBit(oldp+317,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))))));
    bufp->fullBit(oldp+318,((1U & ((IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+319,((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+320,(((2U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__exu_Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+322,(((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__ex_pc
                                : vlSymsp->TOP__top.__PVT__ex_Rrs1)),64);
    bufp->fullQData(oldp+324,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp),64);
    bufp->fullCData(oldp+326,(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+327,((QData)((IData)((0x898537eU 
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
    bufp->fullCData(oldp+329,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+330,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+331,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+334,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+335,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+336,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+337,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+338,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+339,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+340,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+344,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+345,((0x248adfU | ((0x1000000U 
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
    bufp->fullCData(oldp+346,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+347,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+348,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+349,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+350,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+351,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+352,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
    bufp->fullBit(oldp+353,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
    bufp->fullBit(oldp+354,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
    bufp->fullBit(oldp+355,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
    bufp->fullBit(oldp+356,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
    bufp->fullBit(oldp+357,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
    bufp->fullBit(oldp+358,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
    bufp->fullBit(oldp+361,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit));
    bufp->fullQData(oldp+362,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA),64);
    bufp->fullQData(oldp+364,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB),64);
    bufp->fullBit(oldp+366,((1U & ((IData)(vlSymsp->TOP__top.__PVT__exu_ALUct) 
                                   >> 3U))));
    bufp->fullBit(oldp+367,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add));
    bufp->fullBit(oldp+368,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__exu_ALUct)))));
    bufp->fullQData(oldp+369,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder),64);
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
    bufp->fullBit(oldp+371,((1U & __Vtemp_hdd5810e3__0[2U])));
    bufp->fullBit(oldp+372,((((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                >> 0x3fU)))) 
                             & ((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                               >> 0x3fU))) 
                                != (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+373,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessS));
    bufp->fullBit(oldp+374,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessUS));
    bufp->fullQData(oldp+375,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift),64);
    bufp->fullQData(oldp+377,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR),64);
    bufp->fullQData(oldp+379,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR),64);
    bufp->fullQData(oldp+381,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND),64);
    bufp->fullQData(oldp+383,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL),64);
    bufp->fullQData(oldp+385,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV),64);
    bufp->fullQData(oldp+387,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM),64);
    bufp->fullQData(oldp+389,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout),64);
    bufp->fullQData(oldp+391,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin),64);
    bufp->fullCData(oldp+393,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB))),6);
    bufp->fullCData(oldp+394,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt),6);
    bufp->fullQData(oldp+395,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra),64);
    bufp->fullCData(oldp+397,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
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
    bufp->fullWData(oldp+398,(__Vtemp_h2d6007f7__0),264);
    bufp->fullWData(oldp+407,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+410,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+413,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+416,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+419,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+421,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+423,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+425,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
    bufp->fullQData(oldp+427,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
    bufp->fullBit(oldp+429,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
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
    bufp->fullWData(oldp+430,(__Vtemp_hef6aeef8__0),198);
    bufp->fullWData(oldp+437,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+440,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+443,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+446,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+448,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+450,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+452,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out),64);
    bufp->fullBit(oldp+454,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit));
    bufp->fullCData(oldp+455,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key),4);
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
    bufp->fullWData(oldp+456,(__Vtemp_h9798c001__0),1088);
    bufp->fullWData(oldp+490,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+493,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+496,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+499,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+502,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+505,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+508,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+511,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+514,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+517,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+520,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[10]),68);
    bufp->fullWData(oldp+523,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[11]),68);
    bufp->fullWData(oldp+526,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[12]),68);
    bufp->fullWData(oldp+529,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[13]),68);
    bufp->fullWData(oldp+532,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[14]),68);
    bufp->fullWData(oldp+535,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[15]),68);
    bufp->fullQData(oldp+538,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0]),64);
    bufp->fullQData(oldp+540,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1]),64);
    bufp->fullQData(oldp+542,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2]),64);
    bufp->fullQData(oldp+544,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3]),64);
    bufp->fullQData(oldp+546,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4]),64);
    bufp->fullQData(oldp+548,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5]),64);
    bufp->fullQData(oldp+550,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6]),64);
    bufp->fullQData(oldp+552,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7]),64);
    bufp->fullQData(oldp+554,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8]),64);
    bufp->fullQData(oldp+556,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9]),64);
    bufp->fullQData(oldp+558,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[10]),64);
    bufp->fullQData(oldp+560,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[11]),64);
    bufp->fullQData(oldp+562,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[12]),64);
    bufp->fullQData(oldp+564,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[13]),64);
    bufp->fullQData(oldp+566,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[14]),64);
    bufp->fullQData(oldp+568,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[15]),64);
    bufp->fullQData(oldp+570,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out),64);
    bufp->fullBit(oldp+572,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit));
    bufp->fullCData(oldp+573,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__diver__key),2);
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
    bufp->fullWData(oldp+574,(__Vtemp_hdf62be76__0),264);
    bufp->fullWData(oldp+583,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+586,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+589,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+592,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+595,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0]),64);
    bufp->fullQData(oldp+597,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1]),64);
    bufp->fullQData(oldp+599,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2]),64);
    bufp->fullQData(oldp+601,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3]),64);
    bufp->fullQData(oldp+603,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out),64);
    bufp->fullBit(oldp+605,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit));
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
    bufp->fullWData(oldp+606,(__Vtemp_hbbbb0901__0),264);
    bufp->fullWData(oldp+615,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+618,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+621,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+624,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+627,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0]),64);
    bufp->fullQData(oldp+629,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1]),64);
    bufp->fullQData(oldp+631,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2]),64);
    bufp->fullQData(oldp+633,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3]),64);
    bufp->fullQData(oldp+635,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out),64);
    bufp->fullBit(oldp+637,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit));
    bufp->fullBit(oldp+638,(((IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_hd66fa622__0) 
                             & ((IData)(vlSymsp->TOP__top.__PVT__idu_ready) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__ifu_valid) 
                                   & (IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_h23869681__0))))));
    bufp->fullBit(oldp+639,(vlSymsp->TOP__top.__PVT__IDU__DOT__popline_wen));
    bufp->fullCData(oldp+640,((((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
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
    bufp->fullQData(oldp+641,(vlSymsp->TOP__top.__PVT__IDU__DOT__Imm_d),64);
    bufp->fullBit(oldp+643,((((0x67U != (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))));
    bufp->fullCData(oldp+644,(((IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
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
    bufp->fullCData(oldp+645,(((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                ? (5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xcU)) : 
                               ((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                 ? 6U : ((0x67U == 
                                          (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))
                                          ? 7U : 2U)))),3);
    bufp->fullBit(oldp+646,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemWr_d));
    bufp->fullCData(oldp+647,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemOP_d),3);
    bufp->fullCData(oldp+648,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegSrc_d),2);
    bufp->fullBit(oldp+649,(vlSymsp->TOP__top.__PVT__IDU__DOT__isTuncate_d));
    bufp->fullBit(oldp+650,(vlSymsp->TOP__top.__PVT__IDU__DOT__isSext_d));
    bufp->fullBit(oldp+651,(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d));
    bufp->fullCData(oldp+652,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop),3);
    bufp->fullCData(oldp+653,((0x7fU & vlSymsp->TOP__top.__PVT__id_inst)),7);
    bufp->fullCData(oldp+654,((7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+655,((vlSymsp->TOP__top.__PVT__id_inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+656,((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullCData(oldp+657,((5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+658,((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullBit(oldp+659,((0x67U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+660,((((0x33U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))) 
                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+661,(((3U == (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0xcU)))
                                ? 0xaU : ((((vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x7020U 
                                                & vlSymsp->TOP__top.__PVT__id_inst))) 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullCData(oldp+662,((0x10U | ((8U & (vlSymsp->TOP__top.__PVT__id_inst 
                                               >> 9U)) 
                                        | (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullBit(oldp+663,((0x37U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+664,((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+665,((0x23U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+666,((3U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullIData(oldp+667,((vlSymsp->TOP__top.__PVT__id_inst 
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
    bufp->fullWData(oldp+668,(__Vtemp_hf0d68bd5__0),335);
    bufp->fullWData(oldp+679,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+682,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+685,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+688,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+691,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+694,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+696,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+698,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+700,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+702,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+704,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+706,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
    bufp->fullCData(oldp+707,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+708,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+709,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+710,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+711,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+712,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+713,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+714,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit));
    bufp->fullBit(oldp+715,(vlSymsp->TOP__top.__PVT__IFU__DOT__ifu_valid_next));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__top.__PVT__IFU__DOT__popline_wen));
    bufp->fullQData(oldp+717,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
    bufp->fullQData(oldp+719,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
    bufp->fullIData(oldp+721,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                           >> 0x20U)))),32);
    bufp->fullBit(oldp+722,(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint));
    bufp->fullBit(oldp+723,(((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                             & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
    bufp->fullBit(oldp+724,(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we));
    bufp->fullBit(oldp+725,(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we));
    bufp->fullBit(oldp+726,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                             & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))));
    bufp->fullQData(oldp+727,(vlSymsp->TOP__top.__PVT__LSU__DOT__dataMem_out),64);
    bufp->fullQData(oldp+729,(((- (QData)((IData)(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                                   & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                                      & (0U 
                                                         != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))))) 
                               & ((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)
                                   ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime
                                   : ((0x2004000ULL 
                                       == vlSymsp->TOP__top.__PVT__ALUres)
                                       ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                       : 0ULL)))),64);
    bufp->fullBit(oldp+731,((vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp)));
    bufp->fullCData(oldp+732,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+733,((1U & ((IData)(vlSymsp->TOP__top.__PVT__mem_MemOP) 
                                   >> 2U))));
    bufp->fullBit(oldp+734,(((~ (IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we)) 
                             & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
    bufp->fullCData(oldp+735,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+736,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+740,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__extmask),16);
    bufp->fullCData(oldp+741,((3U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))),2);
    bufp->fullCData(oldp+742,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+743,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit));
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
    bufp->fullWData(oldp+744,(__Vtemp_h76b581e7__0),264);
    bufp->fullWData(oldp+753,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+756,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+759,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+762,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+765,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+767,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+769,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+771,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+773,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+775,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit));
    bufp->fullQData(oldp+776,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime),64);
    bufp->fullQData(oldp+778,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp),64);
    bufp->fullBit(oldp+780,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+781,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+782,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we) 
                             & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
    bufp->fullIData(oldp+783,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
    bufp->fullIData(oldp+784,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullCData(oldp+785,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
    bufp->fullBit(oldp+786,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    bufp->fullCData(oldp+787,(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r),3);
    bufp->fullCData(oldp+788,(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r),3);
    bufp->fullCData(oldp+789,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullCData(oldp+790,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
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
    bufp->fullCData(oldp+791,((((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0) 
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
    bufp->fullCData(oldp+792,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
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
    bufp->fullCData(oldp+793,(((0x80U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
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
    bufp->fullCData(oldp+794,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[0]),5);
    bufp->fullCData(oldp+795,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[1]),5);
    bufp->fullCData(oldp+796,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[2]),5);
    bufp->fullCData(oldp+797,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[3]),5);
    bufp->fullCData(oldp+798,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[4]),5);
    bufp->fullCData(oldp+799,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[5]),5);
    bufp->fullCData(oldp+800,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[6]),5);
    bufp->fullCData(oldp+801,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[7]),5);
    bufp->fullCData(oldp+802,(vlSymsp->TOP__top.__PVT__witf__DOT__rd_match_rs1idx),8);
    bufp->fullCData(oldp+803,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
