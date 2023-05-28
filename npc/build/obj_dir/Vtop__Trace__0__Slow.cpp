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
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declBus(c+798,"Inst", false,-1, 31,0);
    tracep->declQuad(c+799,"pc", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declBus(c+226,"Inst", false,-1, 31,0);
    tracep->declQuad(c+227,"pc", false,-1, 63,0);
    tracep->declQuad(c+229,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+231,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+233,"ALUct", false,-1, 4,0);
    tracep->declBus(c+234,"Extop", false,-1, 2,0);
    tracep->declBit(c+235,"RegWr", false,-1);
    tracep->declBit(c+236,"ALUAsr", false,-1);
    tracep->declBus(c+237,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+238,"Imm", false,-1, 63,0);
    tracep->declQuad(c+240,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+242,"NextPC", false,-1, 63,0);
    tracep->declBus(c+244,"Branch", false,-1, 2,0);
    tracep->declQuad(c+803,"waddr", false,-1, 63,0);
    tracep->declBit(c+245,"Less", false,-1);
    tracep->declBit(c+246,"Zero", false,-1);
    tracep->declBus(c+247,"MemOP", false,-1, 2,0);
    tracep->declBus(c+248,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+249,"MemWr", false,-1);
    tracep->declQuad(c+250,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+143,"RegWdata", false,-1, 63,0);
    tracep->declBit(c+252,"isIntrPC", false,-1);
    tracep->declQuad(c+253,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+255,"IntrEn", false,-1);
    tracep->declQuad(c+145,"IntrOut", false,-1, 63,0);
    tracep->declBit(c+256,"clint_mtip", false,-1);
    tracep->declBit(c+257,"clint_we", false,-1);
    tracep->declBit(c+258,"clint_re", false,-1);
    tracep->declQuad(c+259,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+261,"ifu_arvalid", false,-1);
    tracep->declBus(c+262,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+805,"ifu_ready", false,-1);
    tracep->declQuad(c+263,"inst_o", false,-1, 63,0);
    tracep->declBit(c+805,"ram_arready", false,-1);
    tracep->declQuad(c+265,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+267,"ram_rvalid", false,-1);
    tracep->declBus(c+268,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+806,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+807,"AWVALID", false,-1);
    tracep->declBit(c+269,"AWREADY", false,-1);
    tracep->declQuad(c+808,"WDATA", false,-1, 63,0);
    tracep->declBit(c+810,"WVALID", false,-1);
    tracep->declBit(c+270,"WREADY", false,-1);
    tracep->declBus(c+811,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+271,"BVALID", false,-1);
    tracep->declBus(c+272,"BRESP", false,-1, 1,0);
    tracep->declBit(c+812,"BREADY", false,-1);
    tracep->declBit(c+273,"isTuncate", false,-1);
    tracep->declBit(c+274,"isSext", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+236,"ALUAsr", false,-1);
    tracep->declQuad(c+227,"PC", false,-1, 63,0);
    tracep->declQuad(c+229,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+237,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+238,"Imm", false,-1, 63,0);
    tracep->declQuad(c+231,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+233,"ALUct", false,-1, 4,0);
    tracep->declBit(c+273,"isTuncate", false,-1);
    tracep->declBit(c+274,"isSext", false,-1);
    tracep->declQuad(c+240,"ALUres", false,-1, 63,0);
    tracep->declBit(c+245,"Less", false,-1);
    tracep->declBit(c+246,"Zero", false,-1);
    tracep->declQuad(c+275,"ALUA", false,-1, 63,0);
    tracep->declQuad(c+277,"ALUB", false,-1, 63,0);
    tracep->declBit(c+279,"US_S", false,-1);
    tracep->declBit(c+280,"Sub_Add", false,-1);
    tracep->declBit(c+279,"A_L", false,-1);
    tracep->declBit(c+281,"L_R", false,-1);
    tracep->declQuad(c+282,"adder", false,-1, 63,0);
    tracep->declBit(c+284,"Carry", false,-1);
    tracep->declBit(c+285,"Overflow", false,-1);
    tracep->declBit(c+286,"lessS", false,-1);
    tracep->declBit(c+287,"lessUS", false,-1);
    tracep->declQuad(c+288,"shift", false,-1, 63,0);
    tracep->declQuad(c+290,"XOR", false,-1, 63,0);
    tracep->declQuad(c+292,"OR", false,-1, 63,0);
    tracep->declQuad(c+294,"AND", false,-1, 63,0);
    tracep->declQuad(c+296,"MUL", false,-1, 63,0);
    tracep->declQuad(c+298,"DIV", false,-1, 63,0);
    tracep->declQuad(c+300,"REM", false,-1, 63,0);
    tracep->declQuad(c+302,"ALUout", false,-1, 63,0);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+275,"A", false,-1, 63,0);
    tracep->declQuad(c+277,"B", false,-1, 63,0);
    tracep->declBit(c+280,"Cin", false,-1);
    tracep->declQuad(c+282,"Result", false,-1, 63,0);
    tracep->declBit(c+284,"Carry", false,-1);
    tracep->declBit(c+285,"Overflow", false,-1);
    tracep->declBit(c+246,"zero", false,-1);
    tracep->declQuad(c+304,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+814,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+275,"din", false,-1, 63,0);
    tracep->declBus(c+306,"shamtin", false,-1, 5,0);
    tracep->declBit(c+279,"A_L", false,-1);
    tracep->declBit(c+281,"L_R", false,-1);
    tracep->declBit(c+273,"isTuncate", false,-1);
    tracep->declQuad(c+288,"dout", false,-1, 63,0);
    tracep->declBus(c+307,"shamt", false,-1, 5,0);
    tracep->declQuad(c+308,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+815,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+816,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+288,"out", false,-1, 63,0);
    tracep->declBus(c+310,"key", false,-1, 1,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+311,"lut", false,-1, 263,0);
    tracep->declBus(c+820,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+320+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+332+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+340,"lut_out", false,-1, 63,0);
    tracep->declBit(c+342,"hit", false,-1);
    tracep->declBus(c+821,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+822,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+816,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+277,"out", false,-1, 63,0);
    tracep->declBus(c+237,"key", false,-1, 1,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+343,"lut", false,-1, 197,0);
    tracep->declBus(c+820,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+350+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+359+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+365,"lut_out", false,-1, 63,0);
    tracep->declBit(c+367,"hit", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+824,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+815,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+302,"out", false,-1, 63,0);
    tracep->declBus(c+368,"key", false,-1, 3,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+369,"lut", false,-1, 1087,0);
    tracep->declBus(c+825,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+403+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+451+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+483,"lut_out", false,-1, 63,0);
    tracep->declBit(c+485,"hit", false,-1);
    tracep->declBus(c+826,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+815,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+816,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+298,"out", false,-1, 63,0);
    tracep->declBus(c+486,"key", false,-1, 1,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+487,"lut", false,-1, 263,0);
    tracep->declBus(c+820,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+496+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+508+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+516,"lut_out", false,-1, 63,0);
    tracep->declBit(c+518,"hit", false,-1);
    tracep->declBus(c+821,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+815,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+816,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+300,"out", false,-1, 63,0);
    tracep->declBus(c+486,"key", false,-1, 1,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+519,"lut", false,-1, 263,0);
    tracep->declBus(c+820,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+528+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+28+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+540+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+548,"lut_out", false,-1, 63,0);
    tracep->declBit(c+550,"hit", false,-1);
    tracep->declBus(c+821,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ContrGen ");
    tracep->declBus(c+551,"opcode", false,-1, 6,0);
    tracep->declBus(c+552,"func3", false,-1, 2,0);
    tracep->declBus(c+553,"func7", false,-1, 6,0);
    tracep->declBus(c+233,"ALUct", false,-1, 4,0);
    tracep->declBus(c+234,"Extop", false,-1, 2,0);
    tracep->declBit(c+235,"RegWr", false,-1);
    tracep->declBit(c+236,"ALUAsr", false,-1);
    tracep->declBus(c+237,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+244,"Branch", false,-1, 2,0);
    tracep->declBit(c+249,"MemWr", false,-1);
    tracep->declBus(c+247,"MemOP", false,-1, 2,0);
    tracep->declBus(c+248,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+273,"isTuncate", false,-1);
    tracep->declBit(c+274,"isSext", false,-1);
    tracep->declBit(c+255,"IntrEn", false,-1);
    tracep->declBit(c+554,"isconditionalJump", false,-1);
    tracep->declBus(c+555,"BranchOpt", false,-1, 2,0);
    tracep->declBit(c+556,"isJal", false,-1);
    tracep->declBit(c+557,"isJalr", false,-1);
    tracep->declBit(c+558,"isMul", false,-1);
    tracep->declBus(c+559,"IntALUct", false,-1, 4,0);
    tracep->declBus(c+560,"MulALUct", false,-1, 4,0);
    tracep->declBit(c+561,"islui", false,-1);
    tracep->declBit(c+562,"isauipc", false,-1);
    tracep->declBit(c+563,"isMemW", false,-1);
    tracep->declBit(c+564,"isMemR", false,-1);
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+816,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+827,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+816,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+248,"out", false,-1, 1,0);
    tracep->declBus(c+551,"key", false,-1, 6,0);
    tracep->declBus(c+828,"default_out", false,-1, 1,0);
    tracep->declBus(c+829,"lut", false,-1, 17,0);
    tracep->declBus(c+830,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+32+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+34+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+36+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+565,"lut_out", false,-1, 1,0);
    tracep->declBit(c+566,"hit", false,-1);
    tracep->declBus(c+831,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+832,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+827,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+822,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+234,"out", false,-1, 2,0);
    tracep->declBus(c+551,"key", false,-1, 6,0);
    tracep->declBus(c+833,"default_out", false,-1, 2,0);
    tracep->declArray(c+834,"lut", false,-1, 119,0);
    tracep->declBus(c+838,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+38+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+50+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+62+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+567,"lut_out", false,-1, 2,0);
    tracep->declBit(c+568,"hit", false,-1);
    tracep->declBus(c+839,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+817,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+827,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+255,"out", false,-1, 0,0);
    tracep->declBus(c+551,"key", false,-1, 6,0);
    tracep->declBus(c+840,"default_out", false,-1, 0,0);
    tracep->declBus(c+841,"lut", false,-1, 7,0);
    tracep->declBus(c+842,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+74+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+75+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+76+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+569,"lut_out", false,-1, 0,0);
    tracep->declBit(c+570,"hit", false,-1);
    tracep->declBus(c+843,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+815,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+822,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+235,"out", false,-1, 0,0);
    tracep->declBus(c+234,"key", false,-1, 2,0);
    tracep->declBus(c+840,"default_out", false,-1, 0,0);
    tracep->declBus(c+844,"lut", false,-1, 15,0);
    tracep->declBus(c+815,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+77+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+81+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+85+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+571,"lut_out", false,-1, 0,0);
    tracep->declBit(c+572,"hit", false,-1);
    tracep->declBus(c+821,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declQuad(c+240,"Addr", false,-1, 63,0);
    tracep->declBus(c+247,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+231,"DataIn", false,-1, 63,0);
    tracep->declBit(c+249,"WrEn", false,-1);
    tracep->declQuad(c+250,"DataOut", false,-1, 63,0);
    tracep->declBit(c+257,"clint_we", false,-1);
    tracep->declBit(c+258,"clint_re", false,-1);
    tracep->declBit(c+573,"clint_en", false,-1);
    tracep->declBus(c+574,"wmask", false,-1, 7,0);
    tracep->declBit(c+575,"isSign", false,-1);
    tracep->declBit(c+576,"RdEn", false,-1);
    tracep->declBus(c+577,"shift", false,-1, 5,0);
    tracep->declArray(c+578,"data", false,-1, 127,0);
    tracep->declBus(c+582,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+815,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+816,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+574,"out", false,-1, 7,0);
    tracep->declBus(c+583,"key", false,-1, 1,0);
    tracep->declBus(c+845,"default_out", false,-1, 7,0);
    tracep->declQuad(c+846,"lut", false,-1, 39,0);
    tracep->declBus(c+838,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+93+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+97+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+584,"lut_out", false,-1, 7,0);
    tracep->declBit(c+585,"hit", false,-1);
    tracep->declBus(c+821,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+815,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+816,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+250,"out", false,-1, 63,0);
    tracep->declBus(c+583,"key", false,-1, 1,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+586,"lut", false,-1, 263,0);
    tracep->declBus(c+820,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+595+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+101+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+607+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+615,"lut_out", false,-1, 63,0);
    tracep->declBit(c+617,"hit", false,-1);
    tracep->declBus(c+821,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+244,"Branch", false,-1, 2,0);
    tracep->declQuad(c+238,"imm", false,-1, 63,0);
    tracep->declQuad(c+227,"PC", false,-1, 63,0);
    tracep->declQuad(c+229,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+245,"Less", false,-1);
    tracep->declBit(c+246,"Zero", false,-1);
    tracep->declQuad(c+242,"NextPC", false,-1, 63,0);
    tracep->declBit(c+618,"PCAsrc", false,-1);
    tracep->declBit(c+619,"PCBsrc", false,-1);
    tracep->declQuad(c+620,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+622,"Bsrc", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+827,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+822,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+816,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+624,"out", false,-1, 1,0);
    tracep->declBus(c+244,"key", false,-1, 2,0);
    tracep->declBus(c+848,"default_out", false,-1, 1,0);
    tracep->declQuad(c+625,"lut", false,-1, 34,0);
    tracep->declBus(c+849,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+627+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+105+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+634+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+641,"lut_out", false,-1, 1,0);
    tracep->declBit(c+642,"hit", false,-1);
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+840,"resetn", false,-1);
    tracep->declBus(c+643,"pc", false,-1, 31,0);
    tracep->declBit(c+261,"ARVALID", false,-1);
    tracep->declBus(c+262,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+805,"ARREADY", false,-1);
    tracep->declBit(c+805,"RREADY", false,-1);
    tracep->declQuad(c+265,"inst_i", false,-1, 63,0);
    tracep->declBit(c+267,"RVALID", false,-1);
    tracep->declQuad(c+263,"inst_o", false,-1, 63,0);
    tracep->declBit(c+851,"valid", false,-1);
    tracep->declBit(c+805,"ready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ImmGen ");
    tracep->declBus(c+644,"Inst", false,-1, 31,7);
    tracep->declBus(c+234,"Extop", false,-1, 2,0);
    tracep->declQuad(c+238,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+849,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+822,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+238,"out", false,-1, 63,0);
    tracep->declBus(c+234,"key", false,-1, 2,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+645,"lut", false,-1, 334,0);
    tracep->declBus(c+852,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+656+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+112+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+671+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+681,"lut_out", false,-1, 63,0);
    tracep->declBit(c+683,"hit", false,-1);
    tracep->declBus(c+853,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declBit(c+252,"isIntrPC", false,-1);
    tracep->declQuad(c+242,"NextPC", false,-1, 63,0);
    tracep->declQuad(c+253,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+227,"pc", false,-1, 63,0);
    tracep->declQuad(c+684,"dpc", false,-1, 63,0);
    tracep->pushNamePrefix("NEXT_PC ");
    tracep->declBus(c+813,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+854,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"rst", false,-1);
    tracep->declQuad(c+684,"din", false,-1, 63,0);
    tracep->declQuad(c+227,"dout", false,-1, 63,0);
    tracep->declBit(c+805,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegWsrcMux ");
    tracep->declBus(c+822,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+816,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+143,"out", false,-1, 63,0);
    tracep->declBus(c+248,"key", false,-1, 1,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+147,"lut", false,-1, 197,0);
    tracep->declBus(c+820,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+154+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+117+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+163+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+169,"lut_out", false,-1, 63,0);
    tracep->declBit(c+171,"hit", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+849,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+686,"rs1", false,-1, 4,0);
    tracep->declBus(c+687,"rs2", false,-1, 4,0);
    tracep->declBus(c+688,"waddr", false,-1, 4,0);
    tracep->declQuad(c+229,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+231,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declQuad(c+143,"wdata", false,-1, 63,0);
    tracep->declBit(c+235,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+689+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declQuad(c+231,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+240,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+257,"we", false,-1);
    tracep->declBit(c+258,"re", false,-1);
    tracep->declBit(c+256,"clint_mtip", false,-1);
    tracep->declQuad(c+259,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+753,"mtime", false,-1, 63,0);
    tracep->declQuad(c+755,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+757,"ismtimecmp", false,-1);
    tracep->declBit(c+758,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+813,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+856,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+840,"rst", false,-1);
    tracep->declQuad(c+231,"din", false,-1, 63,0);
    tracep->declQuad(c+755,"dout", false,-1, 63,0);
    tracep->declBit(c+759,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_axi_lite_u ");
    tracep->declBus(c+858,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+813,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+842,"DSIZE", false,-1, 31,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+797,"resetn", false,-1);
    tracep->declBus(c+806,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+807,"AWVALID", false,-1);
    tracep->declBit(c+269,"AWREADY", false,-1);
    tracep->declQuad(c+808,"WDATA", false,-1, 63,0);
    tracep->declBit(c+810,"WVALID", false,-1);
    tracep->declBit(c+270,"WREADY", false,-1);
    tracep->declBus(c+811,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+271,"BVALID", false,-1);
    tracep->declBus(c+272,"BRESP", false,-1, 1,0);
    tracep->declBit(c+812,"BREADY", false,-1);
    tracep->declBus(c+262,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+261,"ARVALID", false,-1);
    tracep->declBit(c+805,"ARREADY", false,-1);
    tracep->declQuad(c+265,"RDATA", false,-1, 63,0);
    tracep->declBus(c+268,"RRESP", false,-1, 1,0);
    tracep->declBit(c+267,"RVALID", false,-1);
    tracep->declBit(c+805,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+120+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+760,"waddr", false,-1, 31,0);
    tracep->declBus(c+859,"raddr", false,-1, 31,0);
    tracep->declBus(c+761,"wstrb", false,-1, 7,0);
    tracep->declBit(c+762,"wdata_done", false,-1);
    tracep->declBit(c+860,"raddr_done", false,-1);
    tracep->declBus(c+124,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__IntrUnit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__IntrUnit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+255,"IntrEn", false,-1);
    tracep->declBit(c+256,"clint_mtip", false,-1);
    tracep->declQuad(c+227,"pc", false,-1, 63,0);
    tracep->declQuad(c+229,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+686,"zimm", false,-1, 4,0);
    tracep->declBus(c+763,"csr", false,-1, 11,0);
    tracep->declBus(c+552,"func3", false,-1, 2,0);
    tracep->declBit(c+252,"isIntrPC", false,-1);
    tracep->declQuad(c+253,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+145,"dout", false,-1, 63,0);
    tracep->declQuad(c+764,"mepc", false,-1, 63,0);
    tracep->declQuad(c+766,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+768,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+770,"mie", false,-1, 63,0);
    tracep->declQuad(c+818,"mip", false,-1, 63,0);
    tracep->declQuad(c+801,"mcase", false,-1, 63,0);
    tracep->declBit(c+861,"isCSRw", false,-1);
    tracep->declBit(c+772,"mstatus_MIE", false,-1);
    tracep->declBit(c+773,"mie_MTIE", false,-1);
    tracep->declBit(c+774,"timer_irq", false,-1);
    tracep->declBit(c+775,"irq_raise", false,-1);
    tracep->declBit(c+840,"mip_MTIP", false,-1);
    tracep->declBit(c+776,"isecall", false,-1);
    tracep->declQuad(c+777,"eNo", false,-1, 63,0);
    tracep->declBit(c+779,"ismret", false,-1);
    tracep->declBit(c+780,"ismtvec", false,-1);
    tracep->declBit(c+781,"ismepc", false,-1);
    tracep->declBit(c+782,"ismcase", false,-1);
    tracep->declBit(c+783,"ismstatus", false,-1);
    tracep->declBit(c+784,"ismie", false,-1);
    tracep->declBit(c+785,"ismip", false,-1);
    tracep->declQuad(c+172,"csrWData", false,-1, 63,0);
    tracep->declQuad(c+174,"mepcIn", false,-1, 63,0);
    tracep->declQuad(c+176,"mcaseIn", false,-1, 63,0);
    tracep->declBit(c+786,"mstatus_MPIE", false,-1);
    tracep->declQuad(c+178,"mstatusIn", false,-1, 63,0);
    tracep->pushNamePrefix("CSRwEn ");
    tracep->declBus(c+816,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+816,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+777,"out", false,-1, 63,0);
    tracep->declBus(c+787,"key", false,-1, 1,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+862,"lut", false,-1, 131,0);
    tracep->declBus(c+820,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+125+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+131+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+133+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+788,"lut_out", false,-1, 63,0);
    tracep->declBit(c+790,"hit", false,-1);
    tracep->declBus(c+831,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcaseReg ");
    tracep->declBus(c+813,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+818,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+840,"rst", false,-1);
    tracep->declQuad(c+176,"din", false,-1, 63,0);
    tracep->declQuad(c+801,"dout", false,-1, 63,0);
    tracep->declBit(c+791,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcReg ");
    tracep->declBus(c+813,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+818,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+840,"rst", false,-1);
    tracep->declQuad(c+174,"din", false,-1, 63,0);
    tracep->declQuad(c+764,"dout", false,-1, 63,0);
    tracep->declBit(c+792,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mieReg ");
    tracep->declBus(c+813,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+818,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+840,"rst", false,-1);
    tracep->declQuad(c+172,"din", false,-1, 63,0);
    tracep->declQuad(c+770,"dout", false,-1, 63,0);
    tracep->declBit(c+793,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatusReg ");
    tracep->declBus(c+813,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+867,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+840,"rst", false,-1);
    tracep->declQuad(c+178,"din", false,-1, 63,0);
    tracep->declQuad(c+768,"dout", false,-1, 63,0);
    tracep->declBit(c+794,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvecReg ");
    tracep->declBus(c+813,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+818,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+796,"clk", false,-1);
    tracep->declBit(c+840,"rst", false,-1);
    tracep->declQuad(c+172,"din", false,-1, 63,0);
    tracep->declQuad(c+766,"dout", false,-1, 63,0);
    tracep->declBit(c+795,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scrDataSrc ");
    tracep->declBus(c+814,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+822,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+813,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+817,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+172,"out", false,-1, 63,0);
    tracep->declBus(c+552,"key", false,-1, 2,0);
    tracep->declQuad(c+818,"default_out", false,-1, 63,0);
    tracep->declArray(c+180,"lut", false,-1, 401,0);
    tracep->declBus(c+852,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declArray(c+193+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+137+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+211+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+223,"lut_out", false,-1, 63,0);
    tracep->declBit(c+225,"hit", false,-1);
    tracep->declBus(c+869,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("IntrUnit ");
    Vtop___024root__trace_init_sub__TOP__top__IntrUnit__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
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
    VlWide<7>/*223:0*/ __Vtemp_hcd3257dc__0;
    VlWide<13>/*415:0*/ __Vtemp_h4cdbe8bd__0;
    VlWide<3>/*95:0*/ __Vtemp_h5d27071d__0;
    VlWide<3>/*95:0*/ __Vtemp_hcef52ca4__0;
    VlWide<3>/*95:0*/ __Vtemp_h68119d76__0;
    VlWide<3>/*95:0*/ __Vtemp_hcd71550a__0;
    VlWide<3>/*95:0*/ __Vtemp_haee3d321__0;
    VlWide<3>/*95:0*/ __Vtemp_h5d27071d__1;
    VlWide<3>/*95:0*/ __Vtemp_hcef52ca4__1;
    VlWide<3>/*95:0*/ __Vtemp_h68119d76__1;
    VlWide<3>/*95:0*/ __Vtemp_h86051c63__0;
    VlWide<3>/*95:0*/ __Vtemp_h3a0080b0__0;
    VlWide<9>/*287:0*/ __Vtemp_heddb9346__0;
    VlWide<7>/*223:0*/ __Vtemp_ha9f09867__0;
    VlWide<34>/*1087:0*/ __Vtemp_h77e10e19__0;
    VlWide<9>/*287:0*/ __Vtemp_hc8888693__0;
    VlWide<9>/*287:0*/ __Vtemp_h8f626b3d__0;
    VlWide<9>/*287:0*/ __Vtemp_h8ffe19e9__0;
    VlWide<11>/*351:0*/ __Vtemp_h75f56fbe__0;
    VlWide<4>/*127:0*/ __Vtemp_hd6f60a5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h058c0b04__0;
    // Body
    bufp->fullCData(oldp+1,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
    bufp->fullCData(oldp+6,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[0]),4);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[1]),4);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[2]),4);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[3]),4);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[4]),4);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[5]),4);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[6]),4);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[7]),4);
    bufp->fullCData(oldp+16,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[8]),4);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[9]),4);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[10]),4);
    bufp->fullCData(oldp+19,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[11]),4);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[12]),4);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[13]),4);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[14]),4);
    bufp->fullCData(oldp+23,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[15]),4);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[0]),2);
    bufp->fullCData(oldp+25,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[1]),2);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[2]),2);
    bufp->fullCData(oldp+27,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[3]),2);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[0]),2);
    bufp->fullCData(oldp+29,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[1]),2);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[2]),2);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[3]),2);
    bufp->fullSData(oldp+32,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+33,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[1]),9);
    bufp->fullCData(oldp+34,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[0]),7);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[1]),7);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[0]),2);
    bufp->fullCData(oldp+37,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[1]),2);
    bufp->fullSData(oldp+38,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+39,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+40,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+41,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+42,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+43,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+44,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+45,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+46,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
    bufp->fullSData(oldp+47,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
    bufp->fullSData(oldp+48,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
    bufp->fullSData(oldp+49,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[11]),10);
    bufp->fullCData(oldp+50,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
    bufp->fullCData(oldp+51,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
    bufp->fullCData(oldp+52,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
    bufp->fullCData(oldp+53,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
    bufp->fullCData(oldp+54,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
    bufp->fullCData(oldp+61,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[11]),7);
    bufp->fullCData(oldp+62,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
    bufp->fullCData(oldp+65,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
    bufp->fullCData(oldp+66,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
    bufp->fullCData(oldp+67,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
    bufp->fullCData(oldp+68,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[11]),3);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+75,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__key_list[0]),7);
    bufp->fullBit(oldp+76,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__data_list[0]));
    bufp->fullCData(oldp+77,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+81,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+84,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullBit(oldp+85,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
    bufp->fullBit(oldp+86,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
    bufp->fullBit(oldp+88,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
    bufp->fullSData(oldp+89,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+90,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+91,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+92,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
    bufp->fullCData(oldp+93,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
    bufp->fullCData(oldp+94,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
    bufp->fullCData(oldp+96,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
    bufp->fullCData(oldp+97,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
    bufp->fullCData(oldp+101,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
    bufp->fullCData(oldp+103,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
    bufp->fullCData(oldp+104,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
    bufp->fullCData(oldp+105,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
    bufp->fullCData(oldp+106,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
    bufp->fullCData(oldp+107,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
    bufp->fullCData(oldp+110,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
    bufp->fullCData(oldp+111,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
    bufp->fullCData(oldp+112,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+113,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[0]),2);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[1]),2);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[2]),2);
    bufp->fullQData(oldp+120,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[0]),64);
    bufp->fullQData(oldp+122,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[1]),64);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__i),32);
    bufp->fullWData(oldp+125,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+128,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
    bufp->fullCData(oldp+131,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
    bufp->fullCData(oldp+132,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
    bufp->fullQData(oldp+133,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
    bufp->fullQData(oldp+135,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
    bufp->fullCData(oldp+137,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
    bufp->fullCData(oldp+139,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
    bufp->fullCData(oldp+140,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
    bufp->fullCData(oldp+141,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
    bufp->fullCData(oldp+142,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
    bufp->fullQData(oldp+143,(vlSymsp->TOP__top.__PVT__RegWdata),64);
    bufp->fullQData(oldp+145,(vlSymsp->TOP__top__IntrUnit.__PVT__dout),64);
    __Vtemp_hcd3257dc__0[0U] = (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__dout);
    __Vtemp_hcd3257dc__0[1U] = (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                        >> 0x20U));
    __Vtemp_hcd3257dc__0[2U] = (2U | ((IData)(((IData)(vlSymsp->TOP__top.__PVT__clint_re)
                                                ? vlSymsp->TOP__top.__PVT__clint_dout
                                                : vlSymsp->TOP__top.__PVT__MemOut)) 
                                      << 2U));
    __Vtemp_hcd3257dc__0[3U] = (((IData)(((IData)(vlSymsp->TOP__top.__PVT__clint_re)
                                           ? vlSymsp->TOP__top.__PVT__clint_dout
                                           : vlSymsp->TOP__top.__PVT__MemOut)) 
                                 >> 0x1eU) | ((IData)(
                                                      (((IData)(vlSymsp->TOP__top.__PVT__clint_re)
                                                         ? vlSymsp->TOP__top.__PVT__clint_dout
                                                         : vlSymsp->TOP__top.__PVT__MemOut) 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_hcd3257dc__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                       << 4U) | ((IData)(
                                                         (((IData)(vlSymsp->TOP__top.__PVT__clint_re)
                                                            ? vlSymsp->TOP__top.__PVT__clint_dout
                                                            : vlSymsp->TOP__top.__PVT__MemOut) 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_hcd3257dc__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALUres 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_hcd3257dc__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__ALUres 
                                         >> 0x20U)) 
                                >> 0x1cU);
    bufp->fullWData(oldp+147,(__Vtemp_hcd3257dc__0),198);
    bufp->fullWData(oldp+154,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+157,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+160,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+163,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+165,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+167,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+169,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__lut_out),64);
    bufp->fullBit(oldp+171,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__hit));
    bufp->fullQData(oldp+172,(vlSymsp->TOP__top__IntrUnit.__PVT__csrWData),64);
    bufp->fullQData(oldp+174,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top.pc
                                : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
    bufp->fullQData(oldp+176,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__IntrUnit.__PVT__eNo
                                : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
    bufp->fullQData(oldp+178,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? ((0xffffffffffffff00ULL 
                                    & vlSymsp->TOP__top__IntrUnit.__PVT__mstatus) 
                                   | (QData)((IData)(
                                                     ((0x80U 
                                                       & ((IData)(
                                                                  (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                   >> 3U)) 
                                                          << 7U)) 
                                                      | ((0x70U 
                                                          & ((IData)(
                                                                     (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                      >> 4U)) 
                                                             << 4U)) 
                                                         | (7U 
                                                            & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus)))))))
                                : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                    ? ((0xffffffffffffff00ULL 
                                        & vlSymsp->TOP__top__IntrUnit.__PVT__mstatus) 
                                       | (QData)((IData)(
                                                         (0x80U 
                                                          | ((0x70U 
                                                              & ((IData)(
                                                                         (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                          >> 4U)) 
                                                                 << 4U)) 
                                                             | ((8U 
                                                                 & ((IData)(
                                                                            (vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                                             >> 7U)) 
                                                                    << 3U)) 
                                                                | (7U 
                                                                   & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus))))))))
                                    : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData))),64);
    __Vtemp_h4cdbe8bd__0[0U] = (IData)(((~ (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__top.Inst 
                                                               >> 0xfU))))) 
                                        & vlSymsp->TOP__top__IntrUnit.__PVT__dout));
    __Vtemp_h4cdbe8bd__0[1U] = (IData)((((~ (QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.Inst 
                                                                >> 0xfU))))) 
                                         & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                        >> 0x20U));
    __Vtemp_h4cdbe8bd__0[2U] = (7U | ((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__top.Inst 
                                                                     >> 0xfU)))))) 
                                      << 3U));
    __Vtemp_h4cdbe8bd__0[3U] = (((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                          | (QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.Inst 
                                                                >> 0xfU)))))) 
                                 >> 0x1dU) | ((IData)(
                                                      ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                        | (QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__top.Inst 
                                                                              >> 0xfU))))) 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h4cdbe8bd__0[4U] = (0x30U | (((IData)((
                                                   (0xffffffffffffffe0ULL 
                                                    & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__top.Inst 
                                                                         >> 0xfU)))))) 
                                          << 6U) | 
                                         ((IData)((
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSymsp->TOP__top.Inst 
                                                                          >> 0xfU))))) 
                                                   >> 0x20U)) 
                                          >> 0x1dU)));
    __Vtemp_h4cdbe8bd__0[5U] = (((IData)(((0xffffffffffffffe0ULL 
                                           & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                          | (QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.Inst 
                                                                >> 0xfU)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      (((0xffffffffffffffe0ULL 
                                                         & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                        | (QData)((IData)(
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__top.Inst 
                                                                              >> 0xfU))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h4cdbe8bd__0[6U] = (0x140U | (((IData)(
                                                   ((~ vlSymsp->TOP__top.__PVT__R_rs1) 
                                                    & vlSymsp->TOP__top__IntrUnit.__PVT__dout)) 
                                           << 9U) | 
                                          ((IData)(
                                                   (((0xffffffffffffffe0ULL 
                                                      & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                     | (QData)((IData)(
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__top.Inst 
                                                                           >> 0xfU))))) 
                                                    >> 0x20U)) 
                                           >> 0x1aU)));
    __Vtemp_h4cdbe8bd__0[7U] = (((IData)(((~ vlSymsp->TOP__top.__PVT__R_rs1) 
                                          & vlSymsp->TOP__top__IntrUnit.__PVT__dout)) 
                                 >> 0x17U) | ((IData)(
                                                      (((~ vlSymsp->TOP__top.__PVT__R_rs1) 
                                                        & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_h4cdbe8bd__0[8U] = (0x600U | (((IData)(
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                    | vlSymsp->TOP__top.__PVT__R_rs1)) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (((~ vlSymsp->TOP__top.__PVT__R_rs1) 
                                                       & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                      >> 0x20U)) 
                                             >> 0x17U)));
    __Vtemp_h4cdbe8bd__0[9U] = (((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                          | vlSymsp->TOP__top.__PVT__R_rs1)) 
                                 >> 0x14U) | ((IData)(
                                                      ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                        | vlSymsp->TOP__top.__PVT__R_rs1) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h4cdbe8bd__0[0xaU] = (0x2000U | (((IData)(vlSymsp->TOP__top.__PVT__R_rs1) 
                                              << 0xfU) 
                                             | ((IData)(
                                                        ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                          | vlSymsp->TOP__top.__PVT__R_rs1) 
                                                         >> 0x20U)) 
                                                >> 0x14U)));
    __Vtemp_h4cdbe8bd__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__R_rs1) 
                                   >> 0x11U) | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__R_rs1 
                                                         >> 0x20U)) 
                                                << 0xfU));
    __Vtemp_h4cdbe8bd__0[0xcU] = (0x8000U | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__R_rs1 
                                                      >> 0x20U)) 
                                             >> 0x11U));
    bufp->fullWData(oldp+180,(__Vtemp_h4cdbe8bd__0),402);
    bufp->fullWData(oldp+193,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+196,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+199,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+202,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+205,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
    bufp->fullWData(oldp+208,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
    bufp->fullQData(oldp+211,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
    bufp->fullQData(oldp+213,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
    bufp->fullQData(oldp+215,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
    bufp->fullQData(oldp+217,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
    bufp->fullQData(oldp+219,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
    bufp->fullQData(oldp+221,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
    bufp->fullQData(oldp+223,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
    bufp->fullBit(oldp+225,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__hit));
    bufp->fullIData(oldp+226,(vlSymsp->TOP__top.Inst),32);
    bufp->fullQData(oldp+227,(vlSymsp->TOP__top.pc),64);
    bufp->fullQData(oldp+229,(vlSymsp->TOP__top.__PVT__R_rs1),64);
    bufp->fullQData(oldp+231,(vlSymsp->TOP__top.__PVT__R_rs2),64);
    bufp->fullCData(oldp+233,(((IData)(vlSymsp->TOP__top.__VdfgTmp_ha793c56c__0)
                                ? 0U : (IData)(vlSymsp->TOP__top.__VdfgTmp_h4ea5c6f8__0))),5);
    bufp->fullCData(oldp+234,(vlSymsp->TOP__top.__PVT__Extop),3);
    bufp->fullBit(oldp+235,(vlSymsp->TOP__top.__PVT__RegWr));
    bufp->fullBit(oldp+236,((((0x67U != (0x7fU & vlSymsp->TOP__top.Inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__Extop)))))));
    bufp->fullCData(oldp+237,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
    bufp->fullQData(oldp+238,(vlSymsp->TOP__top.__PVT__Imm),64);
    bufp->fullQData(oldp+240,(vlSymsp->TOP__top.__PVT__ALUres),64);
    bufp->fullQData(oldp+242,((0xfffffffffffffffeULL 
                               & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                    ? vlSymsp->TOP__top.__PVT__Imm
                                    : 4ULL) + ((1U 
                                                & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                ? vlSymsp->TOP__top.pc
                                                : vlSymsp->TOP__top.__PVT__R_rs1)))),64);
    bufp->fullCData(oldp+244,(vlSymsp->TOP__top.__PVT__Branch),3);
    bufp->fullBit(oldp+245,(vlSymsp->TOP__top.__PVT__Less));
    bufp->fullBit(oldp+246,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
    bufp->fullCData(oldp+247,(vlSymsp->TOP__top.__PVT__MemOP),3);
    bufp->fullCData(oldp+248,(vlSymsp->TOP__top.__PVT__RegSrc),2);
    bufp->fullBit(oldp+249,(vlSymsp->TOP__top.__PVT__MemWr));
    bufp->fullQData(oldp+250,(vlSymsp->TOP__top.__PVT__MemOut),64);
    bufp->fullBit(oldp+252,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                              & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullQData(oldp+253,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                    ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                    : vlSymsp->TOP__top.pc))),64);
    bufp->fullBit(oldp+255,(vlSymsp->TOP__top.__PVT__IntrEn));
    bufp->fullBit(oldp+256,((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp)));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__top.__PVT__clint_we));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__top.__PVT__clint_re));
    bufp->fullQData(oldp+259,(vlSymsp->TOP__top.__PVT__clint_dout),64);
    bufp->fullBit(oldp+261,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
    bufp->fullIData(oldp+262,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
    bufp->fullQData(oldp+263,(vlSymsp->TOP__top.__PVT__inst_o),64);
    bufp->fullQData(oldp+265,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+267,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+268,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+269,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+272,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullBit(oldp+273,(vlSymsp->TOP__top.__PVT__isTuncate));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__top.__PVT__isSext));
    bufp->fullQData(oldp+275,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
    bufp->fullQData(oldp+277,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
    bufp->fullBit(oldp+279,(vlSymsp->TOP__top.__PVT__ALU__DOT__US_S));
    bufp->fullBit(oldp+280,(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
    bufp->fullBit(oldp+281,((1U == (IData)(vlSymsp->TOP__top.ALU__DOT____VdfgTmp_he7b65dc9__0))));
    bufp->fullQData(oldp+282,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
    __Vtemp_h5d27071d__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
    __Vtemp_h5d27071d__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        >> 0x20U));
    __Vtemp_h5d27071d__0[2U] = 0U;
    __Vtemp_hcef52ca4__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
    __Vtemp_hcef52ca4__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                        >> 0x20U));
    __Vtemp_hcef52ca4__0[2U] = 0U;
    __Vtemp_h68119d76__0[0U] = vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add;
    __Vtemp_h68119d76__0[1U] = 0U;
    __Vtemp_h68119d76__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hcd71550a__0, __Vtemp_hcef52ca4__0, __Vtemp_h68119d76__0);
    VL_ADD_W(3, __Vtemp_haee3d321__0, __Vtemp_h5d27071d__0, __Vtemp_hcd71550a__0);
    bufp->fullBit(oldp+284,((1U & __Vtemp_haee3d321__0[2U])));
    bufp->fullBit(oldp+285,((((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                >> 0x3fU)))) 
                             & ((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                               >> 0x3fU))) 
                                != (1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+286,((1U & ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                            >> 0x3fU)) 
                                   ^ (((1U & (IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                      >> 0x3fU))) 
                                       == (1U & (IData)(
                                                        (vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                         >> 0x3fU)))) 
                                      & ((1U & (IData)(
                                                       (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                        >> 0x3fU))) 
                                         != (1U & (IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                           >> 0x3fU)))))))));
    __Vtemp_h5d27071d__1[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
    __Vtemp_h5d27071d__1[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                        >> 0x20U));
    __Vtemp_h5d27071d__1[2U] = 0U;
    __Vtemp_hcef52ca4__1[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
    __Vtemp_hcef52ca4__1[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                        >> 0x20U));
    __Vtemp_hcef52ca4__1[2U] = 0U;
    __Vtemp_h68119d76__1[0U] = vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add;
    __Vtemp_h68119d76__1[1U] = 0U;
    __Vtemp_h68119d76__1[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h86051c63__0, __Vtemp_hcef52ca4__1, __Vtemp_h68119d76__1);
    VL_ADD_W(3, __Vtemp_h3a0080b0__0, __Vtemp_h5d27071d__1, __Vtemp_h86051c63__0);
    bufp->fullBit(oldp+287,(((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add) 
                             ^ __Vtemp_h3a0080b0__0[2U])));
    bufp->fullQData(oldp+288,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
    bufp->fullQData(oldp+290,(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR),64);
    bufp->fullQData(oldp+292,(vlSymsp->TOP__top.__PVT__ALU__DOT__OR),64);
    bufp->fullQData(oldp+294,(vlSymsp->TOP__top.__PVT__ALU__DOT__AND),64);
    bufp->fullQData(oldp+296,(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL),64);
    bufp->fullQData(oldp+298,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
    bufp->fullQData(oldp+300,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
    bufp->fullQData(oldp+302,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
    bufp->fullQData(oldp+304,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
    bufp->fullCData(oldp+306,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
    bufp->fullCData(oldp+307,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
    bufp->fullQData(oldp+308,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra),64);
    bufp->fullCData(oldp+310,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
    __Vtemp_heddb9346__0[0U] = (IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                         ? ((((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA))) 
                                            >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                         : vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra));
    __Vtemp_heddb9346__0[1U] = (IData)((((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                          ? ((((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA))) 
                                             >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                          : vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra) 
                                        >> 0x20U));
    __Vtemp_heddb9346__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                      << 2U));
    __Vtemp_heddb9346__0[3U] = (((IData)(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_heddb9346__0[4U] = (0xcU | (((IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                   ? (QData)((IData)(
                                                                     ((0x1fU 
                                                                       >= (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                       ? 
                                                                      ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                                       >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                       : 0U)))
                                                   : 
                                                  (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                   >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt)))) 
                                         << 4U) | ((IData)(
                                                           (vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                            >> 0x20U)) 
                                                   >> 0x1eU)));
    __Vtemp_heddb9346__0[5U] = (((IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                           ? (QData)((IData)(
                                                             ((0x1fU 
                                                               >= (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                               >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                               : 0U)))
                                           : (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                              >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt)))) 
                                 >> 0x1cU) | ((IData)(
                                                      (((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                         ? (QData)((IData)(
                                                                           ((0x1fU 
                                                                             >= (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                             ? 
                                                                            ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                                             >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                             : 0U)))
                                                         : 
                                                        (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                         >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_heddb9346__0[6U] = (((IData)(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 << 6U) | ((IData)(
                                                   (((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                                      ? (QData)((IData)(
                                                                        ((0x1fU 
                                                                          >= (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                          ? 
                                                                         ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                                          >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))
                                                                          : 0U)))
                                                      : 
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                      >> (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt))) 
                                                    >> 0x20U)) 
                                           >> 0x1cU));
    __Vtemp_heddb9346__0[7U] = (((IData)(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 >> 0x1aU) | ((IData)(
                                                      (vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_heddb9346__0[8U] = (0x40U | ((IData)((vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+311,(__Vtemp_heddb9346__0),264);
    bufp->fullWData(oldp+320,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+323,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+326,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+329,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+332,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+334,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+336,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+338,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
    bufp->fullQData(oldp+340,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
    bufp->fullBit(oldp+342,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
    __Vtemp_ha9f09867__0[0U] = 4U;
    __Vtemp_ha9f09867__0[1U] = 0U;
    __Vtemp_ha9f09867__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.__PVT__R_rs2) 
                                      << 2U));
    __Vtemp_ha9f09867__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__R_rs2) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__R_rs2 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_ha9f09867__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__Imm) 
                                       << 4U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__R_rs2 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_ha9f09867__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__Imm) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__Imm 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_ha9f09867__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__Imm 
                                         >> 0x20U)) 
                                >> 0x1cU);
    bufp->fullWData(oldp+343,(__Vtemp_ha9f09867__0),198);
    bufp->fullWData(oldp+350,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+353,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+356,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+359,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+361,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+363,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+365,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
    bufp->fullBit(oldp+367,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
    bufp->fullCData(oldp+368,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
    __Vtemp_h77e10e19__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM);
    __Vtemp_h77e10e19__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                        >> 0x20U));
    __Vtemp_h77e10e19__0[2U] = (0xfU | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM) 
                                        << 4U));
    __Vtemp_h77e10e19__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h77e10e19__0[4U] = (0xe0U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                          << 8U) | 
                                         ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp_h77e10e19__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h77e10e19__0[6U] = (0xd00U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                      >> 0x20U)) 
                                             >> 0x18U)));
    __Vtemp_h77e10e19__0[7U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                 >> 0x14U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h77e10e19__0[8U] = (0xc000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                            << 0x10U) 
                                           | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                       >> 0x20U)) 
                                              >> 0x14U)));
    __Vtemp_h77e10e19__0[9U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h77e10e19__0[0xaU] = (0xb0000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                               << 0x14U) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_h77e10e19__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                   >> 0xcU) | ((IData)(
                                                       (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                        >> 0x20U)) 
                                               << 0x14U));
    __Vtemp_h77e10e19__0[0xcU] = (0xa00000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                << 0x18U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp_h77e10e19__0[0xdU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                   >> 8U) | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                      >> 0x20U)) 
                                             << 0x18U));
    __Vtemp_h77e10e19__0[0xeU] = (0x9000000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                 << 0x1cU) 
                                                | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                            >> 0x20U)) 
                                                   >> 8U)));
    __Vtemp_h77e10e19__0[0xfU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                   >> 4U) | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h77e10e19__0[0x10U] = (0x80000000U | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                           >> 0x20U)) 
                                                  >> 4U));
    __Vtemp_h77e10e19__0[0x11U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__AND);
    __Vtemp_h77e10e19__0[0x12U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__AND 
                                           >> 0x20U));
    __Vtemp_h77e10e19__0[0x13U] = (7U | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR) 
                                         << 4U));
    __Vtemp_h77e10e19__0[0x14U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_h77e10e19__0[0x15U] = (0x60U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                             << 8U) 
                                            | ((IData)(
                                                       (vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                                        >> 0x20U)) 
                                               >> 0x1cU)));
    __Vtemp_h77e10e19__0[0x16U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_h77e10e19__0[0x17U] = (0x500U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR) 
                                              << 0xcU) 
                                             | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp_h77e10e19__0[0x18U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__XOR 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_h77e10e19__0[0x19U] = (0x4000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                               << 0x10U) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__XOR 
                                                          >> 0x20U)) 
                                                 >> 0x14U)));
    __Vtemp_h77e10e19__0[0x1aU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_h77e10e19__0[0x1bU] = (0x30000U | (((IData)(vlSymsp->TOP__top.__PVT__Less) 
                                                << 0x14U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB 
                                                           >> 0x20U)) 
                                                  >> 0x10U)));
    __Vtemp_h77e10e19__0[0x1cU] = 0U;
    __Vtemp_h77e10e19__0[0x1dU] = (0x200000U | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                                << 0x18U));
    __Vtemp_h77e10e19__0[0x1eU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                    >> 8U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_h77e10e19__0[0x1fU] = (0x1000000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__adder) 
                                                  << 0x1cU) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                             >> 0x20U)) 
                                                    >> 8U)));
    __Vtemp_h77e10e19__0[0x20U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__adder) 
                                    >> 4U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_h77e10e19__0[0x21U] = ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                            >> 0x20U)) 
                                   >> 4U);
    bufp->fullWData(oldp+369,(__Vtemp_h77e10e19__0),1088);
    bufp->fullWData(oldp+403,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+406,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+409,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+412,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+415,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+418,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+421,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+424,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+427,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+430,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+433,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
    bufp->fullWData(oldp+436,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[11]),68);
    bufp->fullWData(oldp+439,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[12]),68);
    bufp->fullWData(oldp+442,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[13]),68);
    bufp->fullWData(oldp+445,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[14]),68);
    bufp->fullWData(oldp+448,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[15]),68);
    bufp->fullQData(oldp+451,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
    bufp->fullQData(oldp+453,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
    bufp->fullQData(oldp+455,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
    bufp->fullQData(oldp+457,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
    bufp->fullQData(oldp+459,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
    bufp->fullQData(oldp+461,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
    bufp->fullQData(oldp+463,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
    bufp->fullQData(oldp+465,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
    bufp->fullQData(oldp+467,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
    bufp->fullQData(oldp+469,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
    bufp->fullQData(oldp+471,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
    bufp->fullQData(oldp+473,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[11]),64);
    bufp->fullQData(oldp+475,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[12]),64);
    bufp->fullQData(oldp+477,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[13]),64);
    bufp->fullQData(oldp+479,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[14]),64);
    bufp->fullQData(oldp+481,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[15]),64);
    bufp->fullQData(oldp+483,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
    bufp->fullBit(oldp+485,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
    bufp->fullCData(oldp+486,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
    __Vtemp_hc8888693__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h16ecbd1b__0;
    __Vtemp_hc8888693__0[1U] = 0U;
    __Vtemp_hc8888693__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h16f52391__0 
                                      << 2U));
    __Vtemp_hc8888693__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h16f52391__0 
                                >> 0x1eU);
    __Vtemp_hc8888693__0[4U] = 0x14U;
    __Vtemp_hc8888693__0[5U] = 0U;
    __Vtemp_hc8888693__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                << 6U);
    __Vtemp_hc8888693__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hc8888693__0[8U] = (0x80U | ((IData)((VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+487,(__Vtemp_hc8888693__0),264);
    bufp->fullWData(oldp+496,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+499,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+502,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+505,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+508,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
    bufp->fullQData(oldp+510,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
    bufp->fullQData(oldp+512,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
    bufp->fullQData(oldp+514,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
    bufp->fullQData(oldp+516,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
    bufp->fullBit(oldp+518,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
    __Vtemp_h8f626b3d__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h1673a125__0;
    __Vtemp_h8f626b3d__0[1U] = 0U;
    __Vtemp_h8f626b3d__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h165fb179__0 
                                      << 2U));
    __Vtemp_h8f626b3d__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h165fb179__0 
                                >> 0x1eU);
    __Vtemp_h8f626b3d__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                      << 4U));
    __Vtemp_h8f626b3d__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                 >> 0x1cU) | ((IData)(
                                                      (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h8f626b3d__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 << 6U) | ((IData)(
                                                   (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                    >> 0x20U)) 
                                           >> 0x1cU));
    __Vtemp_h8f626b3d__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h8f626b3d__0[8U] = (0x80U | ((IData)((VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+519,(__Vtemp_h8f626b3d__0),264);
    bufp->fullWData(oldp+528,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+531,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+534,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+537,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+540,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
    bufp->fullQData(oldp+542,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
    bufp->fullQData(oldp+544,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
    bufp->fullQData(oldp+546,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
    bufp->fullQData(oldp+548,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
    bufp->fullBit(oldp+550,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
    bufp->fullCData(oldp+551,((0x7fU & vlSymsp->TOP__top.Inst)),7);
    bufp->fullCData(oldp+552,((7U & (vlSymsp->TOP__top.Inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+553,((vlSymsp->TOP__top.Inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+554,((4U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
    bufp->fullCData(oldp+555,((5U & (vlSymsp->TOP__top.Inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+556,((6U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
    bufp->fullBit(oldp+557,((0x67U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+558,((((0x33U == (0x7fU & vlSymsp->TOP__top.Inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.Inst))) 
                             & (vlSymsp->TOP__top.Inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+559,(((3U == (7U & (vlSymsp->TOP__top.Inst 
                                             >> 0xcU)))
                                ? 0xaU : ((((vlSymsp->TOP__top.Inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x7020U 
                                                & vlSymsp->TOP__top.Inst))) 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP__top.Inst 
                                                 >> 0xcU))))),5);
    bufp->fullCData(oldp+560,((0x10U | ((8U & (vlSymsp->TOP__top.Inst 
                                               >> 9U)) 
                                        | (7U & (vlSymsp->TOP__top.Inst 
                                                 >> 0xcU))))),5);
    bufp->fullBit(oldp+561,((0x37U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+562,((0x17U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+563,((0x23U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+564,((3U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullCData(oldp+565,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+566,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+567,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+568,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+569,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+570,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+571,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+572,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
    bufp->fullBit(oldp+573,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
    bufp->fullCData(oldp+574,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+575,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                   >> 2U))));
    bufp->fullBit(oldp+576,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
    bufp->fullCData(oldp+577,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+578,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+582,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
    bufp->fullCData(oldp+583,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
    bufp->fullCData(oldp+584,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+585,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
    __Vtemp_h8ffe19e9__0[0U] = (IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                    >> 7U))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                         : (QData)((IData)(
                                                           (0xffU 
                                                            & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))));
    __Vtemp_h8ffe19e9__0[1U] = (IData)((((4U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                     >> 7U))))) 
                                              << 8U) 
                                             | (QData)((IData)(
                                                               (0xffU 
                                                                & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                          : (QData)((IData)(
                                                            (0xffU 
                                                             & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                        >> 0x20U));
    __Vtemp_h8ffe19e9__0[2U] = (3U | ((IData)(((4U 
                                                & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                           >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                                : (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))) 
                                      << 2U));
    __Vtemp_h8ffe19e9__0[3U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                      >> 0xfU))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                           : (QData)((IData)(
                                                             (0xffffU 
                                                              & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))) 
                                 >> 0x1eU) | ((IData)(
                                                      (((4U 
                                                         & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0xfU))))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           (0xffffU 
                                                                            & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                                         : (QData)((IData)(
                                                                           (0xffffU 
                                                                            & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h8ffe19e9__0[4U] = (8U | (((IData)(((4U 
                                                 & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))
                                                 : (QData)((IData)(
                                                                   vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                       << 4U) | ((IData)(
                                                         (((4U 
                                                            & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                            ? 
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0xfU))))) 
                                                             << 0x10U) 
                                                            | (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))))
                                                            : (QData)((IData)(
                                                                              (0xffffU 
                                                                               & vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_h8ffe19e9__0[5U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                           ? (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))
                                           : (QData)((IData)(
                                                             vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                 >> 0x1cU) | ((IData)(
                                                      (((4U 
                                                         & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))
                                                         : (QData)((IData)(
                                                                           vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h8ffe19e9__0[6U] = (0x10U | (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                          << 6U) | 
                                         ((IData)((
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__top.__PVT__MemOP))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U] 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))
                                                     : (QData)((IData)(
                                                                       vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp_h8ffe19e9__0[7U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h8ffe19e9__0[8U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                         >> 0x20U)) 
                                >> 0x1aU);
    bufp->fullWData(oldp+586,(__Vtemp_h8ffe19e9__0),264);
    bufp->fullWData(oldp+595,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+598,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+601,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+604,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+607,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+609,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+611,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+613,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+615,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+617,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
    bufp->fullBit(oldp+618,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+619,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+620,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+622,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.pc
                                : vlSymsp->TOP__top.__PVT__R_rs1)),64);
    bufp->fullCData(oldp+624,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+625,((QData)((IData)((0x898537eU 
                                               | ((((0U 
                                                     != vlSymsp->TOP__top.__PVT__ALU__DOT__adder)
                                                     ? 1U
                                                     : 3U) 
                                                   << 0x1eU) 
                                                  | ((((0U 
                                                        != vlSymsp->TOP__top.__PVT__ALU__DOT__adder)
                                                        ? 3U
                                                        : 1U) 
                                                      << 0x19U) 
                                                     | ((((IData)(vlSymsp->TOP__top.__PVT__Less)
                                                           ? 3U
                                                           : 1U) 
                                                         << 0xfU) 
                                                        | (((IData)(vlSymsp->TOP__top.__PVT__Less)
                                                             ? 1U
                                                             : 3U) 
                                                           << 0xaU)))))))),35);
    bufp->fullCData(oldp+627,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+628,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+629,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+630,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+631,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+632,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+633,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+634,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+635,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+636,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+637,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+638,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+639,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+640,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+641,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+642,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+643,((IData)(vlSymsp->TOP__top.pc)),32);
    bufp->fullIData(oldp+644,((vlSymsp->TOP__top.Inst 
                               >> 7U)),25);
    __Vtemp_h75f56fbe__0[0U] = (IData)((((- (QData)((IData)(
                                                            (vlSymsp->TOP__top.Inst 
                                                             >> 0x1fU)))) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          ((0x100000U 
                                                            & (vlSymsp->TOP__top.Inst 
                                                               >> 0xbU)) 
                                                           | ((0xff000U 
                                                               & vlSymsp->TOP__top.Inst) 
                                                              | ((0x800U 
                                                                  & (vlSymsp->TOP__top.Inst 
                                                                     >> 9U)) 
                                                                 | (0x7feU 
                                                                    & (vlSymsp->TOP__top.Inst 
                                                                       >> 0x14U)))))))));
    __Vtemp_h75f56fbe__0[1U] = (IData)(((((- (QData)((IData)(
                                                             (vlSymsp->TOP__top.Inst 
                                                              >> 0x1fU)))) 
                                          << 0x15U) 
                                         | (QData)((IData)(
                                                           ((0x100000U 
                                                             & (vlSymsp->TOP__top.Inst 
                                                                >> 0xbU)) 
                                                            | ((0xff000U 
                                                                & vlSymsp->TOP__top.Inst) 
                                                               | ((0x800U 
                                                                   & (vlSymsp->TOP__top.Inst 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSymsp->TOP__top.Inst 
                                                                        >> 0x14U)))))))) 
                                        >> 0x20U));
    __Vtemp_h75f56fbe__0[2U] = (6U | (0xffff8000U & 
                                      (vlSymsp->TOP__top.Inst 
                                       << 3U)));
    __Vtemp_h75f56fbe__0[3U] = (((- (IData)((vlSymsp->TOP__top.Inst 
                                             >> 0x1fU))) 
                                 << 3U) | (0x7fffU 
                                           & (vlSymsp->TOP__top.Inst 
                                              >> 0x1dU)));
    __Vtemp_h75f56fbe__0[4U] = (0x28U | (((IData)((0x7ffffffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (vlSymsp->TOP__top.Inst 
                                                                         >> 0x1fU)))))) 
                                          << 0x13U) 
                                         | ((0x40000U 
                                             & (vlSymsp->TOP__top.Inst 
                                                >> 0xdU)) 
                                            | ((0x20000U 
                                                & (vlSymsp->TOP__top.Inst 
                                                   << 0xaU)) 
                                               | ((0x1f800U 
                                                   & (vlSymsp->TOP__top.Inst 
                                                      >> 0xeU)) 
                                                  | ((0x780U 
                                                      & (vlSymsp->TOP__top.Inst 
                                                         >> 1U)) 
                                                     | ((- (IData)(
                                                                   (vlSymsp->TOP__top.Inst 
                                                                    >> 0x1fU))) 
                                                        >> 0x1dU)))))));
    __Vtemp_h75f56fbe__0[5U] = (((IData)((0x7ffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSymsp->TOP__top.Inst 
                                                                >> 0x1fU)))))) 
                                 >> 0xdU) | ((IData)(
                                                     ((0x7ffffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.Inst 
                                                                             >> 0x1fU))))) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_h75f56fbe__0[6U] = (0x100U | (((IData)(
                                                   (0xfffffffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (vlSymsp->TOP__top.Inst 
                                                                          >> 0x1fU)))))) 
                                           << 0x15U) 
                                          | ((0x1fc000U 
                                              & (vlSymsp->TOP__top.Inst 
                                                 >> 0xbU)) 
                                             | ((0x3e00U 
                                                 & (vlSymsp->TOP__top.Inst 
                                                    << 2U)) 
                                                | ((IData)(
                                                           ((0x7ffffffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (vlSymsp->TOP__top.Inst 
                                                                                >> 0x1fU))))) 
                                                            >> 0x20U)) 
                                                   >> 0xdU)))));
    __Vtemp_h75f56fbe__0[7U] = (((IData)((0xfffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (vlSymsp->TOP__top.Inst 
                                                                >> 0x1fU)))))) 
                                 >> 0xbU) | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.Inst 
                                                                             >> 0x1fU))))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_h75f56fbe__0[8U] = (0x600U | (((IData)(
                                                   (((- (QData)((IData)(
                                                                        (vlSymsp->TOP__top.Inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSymsp->TOP__top.Inst 
                                                                       >> 0x14U))))) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     ((0xfffffffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.Inst 
                                                                             >> 0x1fU))))) 
                                                      >> 0x20U)) 
                                             >> 0xbU)));
    __Vtemp_h75f56fbe__0[9U] = (((IData)((((- (QData)((IData)(
                                                              (vlSymsp->TOP__top.Inst 
                                                               >> 0x1fU)))) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            (vlSymsp->TOP__top.Inst 
                                                             >> 0x14U))))) 
                                 >> 0x14U) | ((IData)(
                                                      ((((- (QData)((IData)(
                                                                            (vlSymsp->TOP__top.Inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          (vlSymsp->TOP__top.Inst 
                                                                           >> 0x14U)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h75f56fbe__0[0xaU] = (0x2000U | ((IData)(
                                                     ((((- (QData)((IData)(
                                                                           (vlSymsp->TOP__top.Inst 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (vlSymsp->TOP__top.Inst 
                                                                          >> 0x14U)))) 
                                                      >> 0x20U)) 
                                             >> 0x14U));
    bufp->fullWData(oldp+645,(__Vtemp_h75f56fbe__0),335);
    bufp->fullWData(oldp+656,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+659,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+662,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+665,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+668,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+671,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+673,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+675,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+677,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+679,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+681,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+683,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
    bufp->fullQData(oldp+684,(((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                 & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))
                                ? ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                    ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                    : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                        ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                        : vlSymsp->TOP__top.pc))
                                : (0xfffffffffffffffeULL 
                                   & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                        ? vlSymsp->TOP__top.__PVT__Imm
                                        : 4ULL) + (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                    ? vlSymsp->TOP__top.pc
                                                    : vlSymsp->TOP__top.__PVT__R_rs1))))),64);
    bufp->fullCData(oldp+686,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+687,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+688,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 7U))),5);
    bufp->fullQData(oldp+689,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
    bufp->fullQData(oldp+691,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
    bufp->fullQData(oldp+693,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
    bufp->fullQData(oldp+695,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
    bufp->fullQData(oldp+697,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
    bufp->fullQData(oldp+699,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
    bufp->fullQData(oldp+701,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
    bufp->fullQData(oldp+703,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
    bufp->fullQData(oldp+705,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
    bufp->fullQData(oldp+707,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
    bufp->fullQData(oldp+709,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
    bufp->fullQData(oldp+711,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
    bufp->fullQData(oldp+713,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
    bufp->fullQData(oldp+715,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
    bufp->fullQData(oldp+717,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
    bufp->fullQData(oldp+719,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
    bufp->fullQData(oldp+721,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
    bufp->fullQData(oldp+723,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
    bufp->fullQData(oldp+725,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
    bufp->fullQData(oldp+727,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
    bufp->fullQData(oldp+729,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
    bufp->fullQData(oldp+731,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
    bufp->fullQData(oldp+733,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
    bufp->fullQData(oldp+735,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
    bufp->fullQData(oldp+737,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
    bufp->fullQData(oldp+739,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
    bufp->fullQData(oldp+741,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
    bufp->fullQData(oldp+743,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
    bufp->fullQData(oldp+745,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
    bufp->fullQData(oldp+747,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
    bufp->fullQData(oldp+749,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
    bufp->fullQData(oldp+751,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
    bufp->fullQData(oldp+753,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
    bufp->fullQData(oldp+755,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
    bufp->fullBit(oldp+757,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+758,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+759,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                             & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
    bufp->fullIData(oldp+760,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
    bufp->fullCData(oldp+761,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
    bufp->fullBit(oldp+762,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    bufp->fullSData(oldp+763,((vlSymsp->TOP__top.Inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+764,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
    bufp->fullQData(oldp+766,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
    bufp->fullQData(oldp+768,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
    bufp->fullQData(oldp+770,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
    bufp->fullBit(oldp+772,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 3U)))));
    bufp->fullBit(oldp+773,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                           >> 7U)))));
    bufp->fullBit(oldp+774,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
    bufp->fullBit(oldp+775,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
    bufp->fullBit(oldp+776,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
    bufp->fullQData(oldp+777,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
    bufp->fullBit(oldp+779,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
    bufp->fullBit(oldp+780,((0x305U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+781,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
    bufp->fullBit(oldp+782,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
    bufp->fullBit(oldp+783,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
    bufp->fullBit(oldp+784,((0x304U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+785,((0x344U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+786,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 7U)))));
    bufp->fullCData(oldp+787,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
    bufp->fullQData(oldp+788,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
    bufp->fullBit(oldp+790,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
    bufp->fullBit(oldp+791,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+792,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+793,(((0x304U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    bufp->fullBit(oldp+794,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+795,(((0x305U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    bufp->fullBit(oldp+796,(vlSelf->clk));
    bufp->fullBit(oldp+797,(vlSelf->rst));
    bufp->fullIData(oldp+798,(vlSelf->Inst),32);
    bufp->fullQData(oldp+799,(vlSelf->pc),64);
    bufp->fullQData(oldp+801,(vlSymsp->TOP__top__IntrUnit.mcase),64);
    bufp->fullQData(oldp+803,(vlSymsp->TOP__top.__PVT__waddr),64);
    bufp->fullBit(oldp+805,(1U));
    bufp->fullIData(oldp+806,(vlSymsp->TOP__top.__PVT__AWADDR),32);
    bufp->fullBit(oldp+807,(vlSymsp->TOP__top.__PVT__AWVALID));
    bufp->fullQData(oldp+808,(vlSymsp->TOP__top.__PVT__WDATA),64);
    bufp->fullBit(oldp+810,(vlSymsp->TOP__top.__PVT__WVALID));
    bufp->fullCData(oldp+811,(vlSymsp->TOP__top.__PVT__WSTRB),8);
    bufp->fullBit(oldp+812,(vlSymsp->TOP__top.__PVT__BREADY));
    bufp->fullIData(oldp+813,(0x40U),32);
    bufp->fullIData(oldp+814,(6U),32);
    bufp->fullIData(oldp+815,(4U),32);
    bufp->fullIData(oldp+816,(2U),32);
    bufp->fullIData(oldp+817,(1U),32);
    bufp->fullQData(oldp+818,(0ULL),64);
    bufp->fullIData(oldp+820,(0x42U),32);
    bufp->fullIData(oldp+821,(4U),32);
    bufp->fullIData(oldp+822,(3U),32);
    bufp->fullIData(oldp+823,(3U),32);
    bufp->fullIData(oldp+824,(0x10U),32);
    bufp->fullIData(oldp+825,(0x44U),32);
    bufp->fullIData(oldp+826,(0x10U),32);
    bufp->fullIData(oldp+827,(7U),32);
    bufp->fullCData(oldp+828,(0U),2);
    bufp->fullIData(oldp+829,(0x1bceU),18);
    bufp->fullIData(oldp+830,(9U),32);
    bufp->fullIData(oldp+831,(2U),32);
    bufp->fullIData(oldp+832,(0xcU),32);
    bufp->fullCData(oldp+833,(0U),3);
    __Vtemp_hd6f60a5b__0[0U] = 0x37eceb9aU;
    __Vtemp_hd6f60a5b__0[1U] = 0xd46c1ac7U;
    __Vtemp_hd6f60a5b__0[2U] = 0x65d92f5bU;
    __Vtemp_hd6f60a5b__0[3U] = 0x268da6U;
    bufp->fullWData(oldp+834,(__Vtemp_hd6f60a5b__0),120);
    bufp->fullIData(oldp+838,(0xaU),32);
    bufp->fullIData(oldp+839,(0xcU),32);
    bufp->fullBit(oldp+840,(0U));
    bufp->fullCData(oldp+841,(0xe7U),8);
    bufp->fullIData(oldp+842,(8U),32);
    bufp->fullIData(oldp+843,(1U),32);
    bufp->fullSData(oldp+844,(0x35bdU),16);
    bufp->fullCData(oldp+845,(0U),8);
    bufp->fullQData(oldp+846,(0xc060343cffULL),40);
    bufp->fullCData(oldp+848,(1U),2);
    bufp->fullIData(oldp+849,(5U),32);
    bufp->fullIData(oldp+850,(7U),32);
    bufp->fullBit(oldp+851,(vlSymsp->TOP__top.__PVT__IFU__DOT__valid));
    bufp->fullIData(oldp+852,(0x43U),32);
    bufp->fullIData(oldp+853,(5U),32);
    bufp->fullQData(oldp+854,(0x80000000ULL),64);
    bufp->fullQData(oldp+856,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+858,(0x20U),32);
    bufp->fullIData(oldp+859,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullBit(oldp+860,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr_done));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__top__IntrUnit.__PVT__isCSRw));
    __Vtemp_h058c0b04__0[0U] = 7U;
    __Vtemp_h058c0b04__0[1U] = 0x80000000U;
    __Vtemp_h058c0b04__0[2U] = 0x2eU;
    __Vtemp_h058c0b04__0[3U] = 0U;
    __Vtemp_h058c0b04__0[4U] = 4U;
    bufp->fullWData(oldp+862,(__Vtemp_h058c0b04__0),132);
    bufp->fullQData(oldp+867,(0xa00001800ULL),64);
    bufp->fullIData(oldp+869,(6U),32);
}
