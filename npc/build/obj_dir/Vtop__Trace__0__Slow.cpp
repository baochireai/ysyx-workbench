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
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+799,"rst", false,-1);
    tracep->declBus(c+800,"Inst", false,-1, 31,0);
    tracep->declQuad(c+801,"pc", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+799,"rst", false,-1);
    tracep->declBus(c+241,"Inst", false,-1, 31,0);
    tracep->declQuad(c+242,"pc", false,-1, 63,0);
    tracep->declQuad(c+242,"raddr", false,-1, 63,0);
    tracep->declQuad(c+244,"rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+248,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+250,"ALUct", false,-1, 4,0);
    tracep->declBus(c+251,"Extop", false,-1, 2,0);
    tracep->declBit(c+252,"RegWr", false,-1);
    tracep->declBit(c+253,"ALUAsr", false,-1);
    tracep->declBus(c+254,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+255,"Imm", false,-1, 63,0);
    tracep->declQuad(c+257,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+259,"NextPC", false,-1, 63,0);
    tracep->declBus(c+261,"Branch", false,-1, 2,0);
    tracep->declQuad(c+805,"waddr", false,-1, 63,0);
    tracep->declBit(c+262,"Less", false,-1);
    tracep->declBit(c+263,"Zero", false,-1);
    tracep->declBus(c+264,"MemOP", false,-1, 2,0);
    tracep->declBus(c+265,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+266,"MemWr", false,-1);
    tracep->declQuad(c+267,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+143,"RegWdata", false,-1, 63,0);
    tracep->declBit(c+269,"isIntrPC", false,-1);
    tracep->declQuad(c+270,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+272,"IntrEn", false,-1);
    tracep->declQuad(c+145,"IntrOut", false,-1, 63,0);
    tracep->declBit(c+273,"clint_mtip", false,-1);
    tracep->declBit(c+274,"clint_we", false,-1);
    tracep->declBit(c+275,"clint_re", false,-1);
    tracep->declQuad(c+276,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+226,"ifu_arvalid", false,-1);
    tracep->declBus(c+227,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+807,"ifu_ready", false,-1);
    tracep->declQuad(c+228,"inst_o", false,-1, 63,0);
    tracep->declBit(c+807,"ram_arready", false,-1);
    tracep->declQuad(c+230,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+232,"ram_rvalid", false,-1);
    tracep->declBus(c+233,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+808,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+809,"AWVALID", false,-1);
    tracep->declBit(c+234,"AWREADY", false,-1);
    tracep->declQuad(c+810,"WDATA", false,-1, 63,0);
    tracep->declBit(c+812,"WVALID", false,-1);
    tracep->declBit(c+235,"WREADY", false,-1);
    tracep->declBus(c+813,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+236,"BVALID", false,-1);
    tracep->declBus(c+237,"BRESP", false,-1, 1,0);
    tracep->declBit(c+814,"BREADY", false,-1);
    tracep->declBit(c+278,"isTuncate", false,-1);
    tracep->declBit(c+279,"isSext", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+253,"ALUAsr", false,-1);
    tracep->declQuad(c+242,"PC", false,-1, 63,0);
    tracep->declQuad(c+246,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+254,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+255,"Imm", false,-1, 63,0);
    tracep->declQuad(c+248,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+250,"ALUct", false,-1, 4,0);
    tracep->declBit(c+278,"isTuncate", false,-1);
    tracep->declBit(c+279,"isSext", false,-1);
    tracep->declQuad(c+257,"ALUres", false,-1, 63,0);
    tracep->declBit(c+262,"Less", false,-1);
    tracep->declBit(c+263,"Zero", false,-1);
    tracep->declQuad(c+280,"ALUA", false,-1, 63,0);
    tracep->declQuad(c+282,"ALUB", false,-1, 63,0);
    tracep->declBit(c+284,"US_S", false,-1);
    tracep->declBit(c+285,"Sub_Add", false,-1);
    tracep->declBit(c+284,"A_L", false,-1);
    tracep->declBit(c+286,"L_R", false,-1);
    tracep->declQuad(c+287,"adder", false,-1, 63,0);
    tracep->declBit(c+289,"Carry", false,-1);
    tracep->declBit(c+290,"Overflow", false,-1);
    tracep->declBit(c+291,"lessS", false,-1);
    tracep->declBit(c+292,"lessUS", false,-1);
    tracep->declQuad(c+293,"shift", false,-1, 63,0);
    tracep->declQuad(c+295,"XOR", false,-1, 63,0);
    tracep->declQuad(c+297,"OR", false,-1, 63,0);
    tracep->declQuad(c+299,"AND", false,-1, 63,0);
    tracep->declQuad(c+301,"MUL", false,-1, 63,0);
    tracep->declQuad(c+303,"DIV", false,-1, 63,0);
    tracep->declQuad(c+305,"REM", false,-1, 63,0);
    tracep->declQuad(c+307,"ALUout", false,-1, 63,0);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+280,"A", false,-1, 63,0);
    tracep->declQuad(c+282,"B", false,-1, 63,0);
    tracep->declBit(c+285,"Cin", false,-1);
    tracep->declQuad(c+287,"Result", false,-1, 63,0);
    tracep->declBit(c+289,"Carry", false,-1);
    tracep->declBit(c+290,"Overflow", false,-1);
    tracep->declBit(c+263,"zero", false,-1);
    tracep->declQuad(c+309,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+816,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+280,"din", false,-1, 63,0);
    tracep->declBus(c+311,"shamtin", false,-1, 5,0);
    tracep->declBit(c+284,"A_L", false,-1);
    tracep->declBit(c+286,"L_R", false,-1);
    tracep->declBit(c+278,"isTuncate", false,-1);
    tracep->declQuad(c+293,"dout", false,-1, 63,0);
    tracep->declBus(c+312,"shamt", false,-1, 5,0);
    tracep->declQuad(c+313,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+817,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+818,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+293,"out", false,-1, 63,0);
    tracep->declBus(c+315,"key", false,-1, 1,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+316,"lut", false,-1, 263,0);
    tracep->declBus(c+822,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+325+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+337+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+345,"lut_out", false,-1, 63,0);
    tracep->declBit(c+347,"hit", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+824,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+818,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+282,"out", false,-1, 63,0);
    tracep->declBus(c+254,"key", false,-1, 1,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+348,"lut", false,-1, 197,0);
    tracep->declBus(c+822,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+355+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+364+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+370,"lut_out", false,-1, 63,0);
    tracep->declBit(c+372,"hit", false,-1);
    tracep->declBus(c+825,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+826,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+817,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+307,"out", false,-1, 63,0);
    tracep->declBus(c+373,"key", false,-1, 3,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+374,"lut", false,-1, 1087,0);
    tracep->declBus(c+827,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+408+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+456+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+488,"lut_out", false,-1, 63,0);
    tracep->declBit(c+490,"hit", false,-1);
    tracep->declBus(c+828,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+817,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+818,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+303,"out", false,-1, 63,0);
    tracep->declBus(c+491,"key", false,-1, 1,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+492,"lut", false,-1, 263,0);
    tracep->declBus(c+822,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+501+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+513+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+521,"lut_out", false,-1, 63,0);
    tracep->declBit(c+523,"hit", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+817,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+818,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+305,"out", false,-1, 63,0);
    tracep->declBus(c+491,"key", false,-1, 1,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+524,"lut", false,-1, 263,0);
    tracep->declBus(c+822,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+533+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+28+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+545+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+553,"lut_out", false,-1, 63,0);
    tracep->declBit(c+555,"hit", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ContrGen ");
    tracep->declBus(c+556,"opcode", false,-1, 6,0);
    tracep->declBus(c+557,"func3", false,-1, 2,0);
    tracep->declBus(c+558,"func7", false,-1, 6,0);
    tracep->declBus(c+250,"ALUct", false,-1, 4,0);
    tracep->declBus(c+251,"Extop", false,-1, 2,0);
    tracep->declBit(c+252,"RegWr", false,-1);
    tracep->declBit(c+253,"ALUAsr", false,-1);
    tracep->declBus(c+254,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+261,"Branch", false,-1, 2,0);
    tracep->declBit(c+266,"MemWr", false,-1);
    tracep->declBus(c+264,"MemOP", false,-1, 2,0);
    tracep->declBus(c+265,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+278,"isTuncate", false,-1);
    tracep->declBit(c+279,"isSext", false,-1);
    tracep->declBit(c+272,"IntrEn", false,-1);
    tracep->declBit(c+559,"isconditionalJump", false,-1);
    tracep->declBus(c+560,"BranchOpt", false,-1, 2,0);
    tracep->declBit(c+561,"isJal", false,-1);
    tracep->declBit(c+562,"isJalr", false,-1);
    tracep->declBit(c+563,"isMul", false,-1);
    tracep->declBus(c+564,"IntALUct", false,-1, 4,0);
    tracep->declBus(c+565,"MulALUct", false,-1, 4,0);
    tracep->declBit(c+566,"islui", false,-1);
    tracep->declBit(c+567,"isauipc", false,-1);
    tracep->declBit(c+568,"isMemW", false,-1);
    tracep->declBit(c+569,"isMemR", false,-1);
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+818,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+829,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+818,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+265,"out", false,-1, 1,0);
    tracep->declBus(c+556,"key", false,-1, 6,0);
    tracep->declBus(c+830,"default_out", false,-1, 1,0);
    tracep->declBus(c+831,"lut", false,-1, 17,0);
    tracep->declBus(c+832,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+32+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+34+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+36+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+570,"lut_out", false,-1, 1,0);
    tracep->declBit(c+571,"hit", false,-1);
    tracep->declBus(c+833,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+834,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+829,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+824,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+251,"out", false,-1, 2,0);
    tracep->declBus(c+556,"key", false,-1, 6,0);
    tracep->declBus(c+835,"default_out", false,-1, 2,0);
    tracep->declArray(c+836,"lut", false,-1, 119,0);
    tracep->declBus(c+840,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+38+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+50+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+62+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+572,"lut_out", false,-1, 2,0);
    tracep->declBit(c+573,"hit", false,-1);
    tracep->declBus(c+841,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+819,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+829,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+272,"out", false,-1, 0,0);
    tracep->declBus(c+556,"key", false,-1, 6,0);
    tracep->declBus(c+842,"default_out", false,-1, 0,0);
    tracep->declBus(c+843,"lut", false,-1, 7,0);
    tracep->declBus(c+844,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+74+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+75+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+76+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+574,"lut_out", false,-1, 0,0);
    tracep->declBit(c+575,"hit", false,-1);
    tracep->declBus(c+845,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+817,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+824,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+252,"out", false,-1, 0,0);
    tracep->declBus(c+251,"key", false,-1, 2,0);
    tracep->declBus(c+842,"default_out", false,-1, 0,0);
    tracep->declBus(c+846,"lut", false,-1, 15,0);
    tracep->declBus(c+817,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+77+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+81+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+85+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+576,"lut_out", false,-1, 0,0);
    tracep->declBit(c+577,"hit", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declQuad(c+257,"Addr", false,-1, 63,0);
    tracep->declBus(c+264,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+248,"DataIn", false,-1, 63,0);
    tracep->declBit(c+266,"WrEn", false,-1);
    tracep->declQuad(c+267,"DataOut", false,-1, 63,0);
    tracep->declBit(c+274,"clint_we", false,-1);
    tracep->declBit(c+275,"clint_re", false,-1);
    tracep->declBit(c+578,"clint_en", false,-1);
    tracep->declBus(c+579,"wmask", false,-1, 7,0);
    tracep->declBit(c+580,"isSign", false,-1);
    tracep->declBit(c+581,"RdEn", false,-1);
    tracep->declBus(c+582,"shift", false,-1, 5,0);
    tracep->declArray(c+583,"data", false,-1, 127,0);
    tracep->declBus(c+587,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+817,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+818,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+579,"out", false,-1, 7,0);
    tracep->declBus(c+588,"key", false,-1, 1,0);
    tracep->declBus(c+847,"default_out", false,-1, 7,0);
    tracep->declQuad(c+848,"lut", false,-1, 39,0);
    tracep->declBus(c+840,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+93+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+97+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+589,"lut_out", false,-1, 7,0);
    tracep->declBit(c+590,"hit", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+817,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+818,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+267,"out", false,-1, 63,0);
    tracep->declBus(c+588,"key", false,-1, 1,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+591,"lut", false,-1, 263,0);
    tracep->declBus(c+822,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+600+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+101+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+612+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+620,"lut_out", false,-1, 63,0);
    tracep->declBit(c+622,"hit", false,-1);
    tracep->declBus(c+823,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+261,"Branch", false,-1, 2,0);
    tracep->declQuad(c+255,"imm", false,-1, 63,0);
    tracep->declQuad(c+242,"PC", false,-1, 63,0);
    tracep->declQuad(c+246,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+262,"Less", false,-1);
    tracep->declBit(c+263,"Zero", false,-1);
    tracep->declQuad(c+259,"NextPC", false,-1, 63,0);
    tracep->declBit(c+623,"PCAsrc", false,-1);
    tracep->declBit(c+624,"PCBsrc", false,-1);
    tracep->declQuad(c+625,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+627,"Bsrc", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+829,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+824,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+818,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+629,"out", false,-1, 1,0);
    tracep->declBus(c+261,"key", false,-1, 2,0);
    tracep->declBus(c+850,"default_out", false,-1, 1,0);
    tracep->declQuad(c+630,"lut", false,-1, 34,0);
    tracep->declBus(c+851,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+632+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+105+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+639+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+646,"lut_out", false,-1, 1,0);
    tracep->declBit(c+647,"hit", false,-1);
    tracep->declBus(c+852,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+799,"resetn", false,-1);
    tracep->declBus(c+648,"pc", false,-1, 31,0);
    tracep->declBit(c+226,"ARVALID", false,-1);
    tracep->declBus(c+227,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+807,"ARREADY", false,-1);
    tracep->declBit(c+807,"RREADY", false,-1);
    tracep->declQuad(c+230,"inst_i", false,-1, 63,0);
    tracep->declBit(c+232,"RVALID", false,-1);
    tracep->declQuad(c+228,"inst_o", false,-1, 63,0);
    tracep->declBit(c+853,"valid", false,-1);
    tracep->declBit(c+807,"ready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ImmGen ");
    tracep->declBus(c+649,"Inst", false,-1, 31,7);
    tracep->declBus(c+251,"Extop", false,-1, 2,0);
    tracep->declQuad(c+255,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+851,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+824,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+255,"out", false,-1, 63,0);
    tracep->declBus(c+251,"key", false,-1, 2,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+650,"lut", false,-1, 334,0);
    tracep->declBus(c+854,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+661+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+112+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+676+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+686,"lut_out", false,-1, 63,0);
    tracep->declBit(c+688,"hit", false,-1);
    tracep->declBus(c+855,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+799,"rst", false,-1);
    tracep->declBit(c+269,"isIntrPC", false,-1);
    tracep->declQuad(c+259,"NextPC", false,-1, 63,0);
    tracep->declQuad(c+270,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+242,"pc", false,-1, 63,0);
    tracep->declQuad(c+689,"dpc", false,-1, 63,0);
    tracep->pushNamePrefix("NEXT_PC ");
    tracep->declBus(c+815,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+856,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+799,"rst", false,-1);
    tracep->declQuad(c+689,"din", false,-1, 63,0);
    tracep->declQuad(c+242,"dout", false,-1, 63,0);
    tracep->declBit(c+807,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegWsrcMux ");
    tracep->declBus(c+824,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+818,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+143,"out", false,-1, 63,0);
    tracep->declBus(c+265,"key", false,-1, 1,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+147,"lut", false,-1, 197,0);
    tracep->declBus(c+822,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+825,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+851,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+691,"rs1", false,-1, 4,0);
    tracep->declBus(c+692,"rs2", false,-1, 4,0);
    tracep->declBus(c+693,"waddr", false,-1, 4,0);
    tracep->declQuad(c+246,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+248,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declQuad(c+143,"wdata", false,-1, 63,0);
    tracep->declBit(c+252,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+694+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declQuad(c+248,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+257,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+274,"we", false,-1);
    tracep->declBit(c+275,"re", false,-1);
    tracep->declBit(c+273,"clint_mtip", false,-1);
    tracep->declQuad(c+276,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+758,"mtime", false,-1, 63,0);
    tracep->declQuad(c+760,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+762,"ismtimecmp", false,-1);
    tracep->declBit(c+763,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+815,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+858,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+842,"rst", false,-1);
    tracep->declQuad(c+248,"din", false,-1, 63,0);
    tracep->declQuad(c+760,"dout", false,-1, 63,0);
    tracep->declBit(c+764,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_axi_lite_u ");
    tracep->declBus(c+860,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+815,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+844,"DSIZE", false,-1, 31,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+799,"resetn", false,-1);
    tracep->declBus(c+808,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+809,"AWVALID", false,-1);
    tracep->declBit(c+234,"AWREADY", false,-1);
    tracep->declQuad(c+810,"WDATA", false,-1, 63,0);
    tracep->declBit(c+812,"WVALID", false,-1);
    tracep->declBit(c+235,"WREADY", false,-1);
    tracep->declBus(c+813,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+236,"BVALID", false,-1);
    tracep->declBus(c+237,"BRESP", false,-1, 1,0);
    tracep->declBit(c+814,"BREADY", false,-1);
    tracep->declBus(c+227,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+226,"ARVALID", false,-1);
    tracep->declBit(c+807,"ARREADY", false,-1);
    tracep->declQuad(c+230,"RDATA", false,-1, 63,0);
    tracep->declBus(c+233,"RRESP", false,-1, 1,0);
    tracep->declBit(c+232,"RVALID", false,-1);
    tracep->declBit(c+807,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+120+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+238,"waddr", false,-1, 31,0);
    tracep->declBus(c+861,"raddr", false,-1, 31,0);
    tracep->declBus(c+239,"wstrb", false,-1, 7,0);
    tracep->declBit(c+240,"wdata_done", false,-1);
    tracep->declBit(c+862,"raddr_done", false,-1);
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
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+272,"IntrEn", false,-1);
    tracep->declBit(c+273,"clint_mtip", false,-1);
    tracep->declQuad(c+242,"pc", false,-1, 63,0);
    tracep->declQuad(c+246,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+691,"zimm", false,-1, 4,0);
    tracep->declBus(c+765,"csr", false,-1, 11,0);
    tracep->declBus(c+557,"func3", false,-1, 2,0);
    tracep->declBit(c+269,"isIntrPC", false,-1);
    tracep->declQuad(c+270,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+145,"dout", false,-1, 63,0);
    tracep->declQuad(c+766,"mepc", false,-1, 63,0);
    tracep->declQuad(c+768,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+770,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+772,"mie", false,-1, 63,0);
    tracep->declQuad(c+820,"mip", false,-1, 63,0);
    tracep->declQuad(c+803,"mcase", false,-1, 63,0);
    tracep->declBit(c+863,"isCSRw", false,-1);
    tracep->declBit(c+774,"mstatus_MIE", false,-1);
    tracep->declBit(c+775,"mie_MTIE", false,-1);
    tracep->declBit(c+776,"timer_irq", false,-1);
    tracep->declBit(c+777,"irq_raise", false,-1);
    tracep->declBit(c+842,"mip_MTIP", false,-1);
    tracep->declBit(c+778,"isecall", false,-1);
    tracep->declQuad(c+779,"eNo", false,-1, 63,0);
    tracep->declBit(c+781,"ismret", false,-1);
    tracep->declBit(c+782,"ismtvec", false,-1);
    tracep->declBit(c+783,"ismepc", false,-1);
    tracep->declBit(c+784,"ismcase", false,-1);
    tracep->declBit(c+785,"ismstatus", false,-1);
    tracep->declBit(c+786,"ismie", false,-1);
    tracep->declBit(c+787,"ismip", false,-1);
    tracep->declQuad(c+172,"csrWData", false,-1, 63,0);
    tracep->declQuad(c+174,"mepcIn", false,-1, 63,0);
    tracep->declQuad(c+176,"mcaseIn", false,-1, 63,0);
    tracep->declBit(c+788,"mstatus_MPIE", false,-1);
    tracep->declQuad(c+178,"mstatusIn", false,-1, 63,0);
    tracep->pushNamePrefix("CSRwEn ");
    tracep->declBus(c+818,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+818,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+779,"out", false,-1, 63,0);
    tracep->declBus(c+789,"key", false,-1, 1,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+864,"lut", false,-1, 131,0);
    tracep->declBus(c+822,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+125+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+131+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+133+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+790,"lut_out", false,-1, 63,0);
    tracep->declBit(c+792,"hit", false,-1);
    tracep->declBus(c+833,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcaseReg ");
    tracep->declBus(c+815,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+820,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+842,"rst", false,-1);
    tracep->declQuad(c+176,"din", false,-1, 63,0);
    tracep->declQuad(c+803,"dout", false,-1, 63,0);
    tracep->declBit(c+793,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcReg ");
    tracep->declBus(c+815,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+820,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+842,"rst", false,-1);
    tracep->declQuad(c+174,"din", false,-1, 63,0);
    tracep->declQuad(c+766,"dout", false,-1, 63,0);
    tracep->declBit(c+794,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mieReg ");
    tracep->declBus(c+815,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+820,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+842,"rst", false,-1);
    tracep->declQuad(c+172,"din", false,-1, 63,0);
    tracep->declQuad(c+772,"dout", false,-1, 63,0);
    tracep->declBit(c+795,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatusReg ");
    tracep->declBus(c+815,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+869,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+842,"rst", false,-1);
    tracep->declQuad(c+178,"din", false,-1, 63,0);
    tracep->declQuad(c+770,"dout", false,-1, 63,0);
    tracep->declBit(c+796,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvecReg ");
    tracep->declBus(c+815,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+820,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+798,"clk", false,-1);
    tracep->declBit(c+842,"rst", false,-1);
    tracep->declQuad(c+172,"din", false,-1, 63,0);
    tracep->declQuad(c+768,"dout", false,-1, 63,0);
    tracep->declBit(c+797,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scrDataSrc ");
    tracep->declBus(c+816,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+824,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+815,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+172,"out", false,-1, 63,0);
    tracep->declBus(c+557,"key", false,-1, 2,0);
    tracep->declQuad(c+820,"default_out", false,-1, 63,0);
    tracep->declArray(c+180,"lut", false,-1, 401,0);
    tracep->declBus(c+854,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+871,"i", false,-1, 31,0);
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
    VlWide<34>/*1087:0*/ __Vtemp_hc9e4b5e3__0;
    VlWide<9>/*287:0*/ __Vtemp_h952069fe__0;
    VlWide<9>/*287:0*/ __Vtemp_h24f97c38__0;
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
    bufp->fullBit(oldp+226,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
    bufp->fullIData(oldp+227,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
    bufp->fullQData(oldp+228,(vlSymsp->TOP__top.__PVT__inst_o),64);
    bufp->fullQData(oldp+230,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+232,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+233,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+234,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+235,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+237,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
    bufp->fullCData(oldp+239,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
    bufp->fullBit(oldp+240,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    bufp->fullIData(oldp+241,(vlSymsp->TOP__top.Inst),32);
    bufp->fullQData(oldp+242,(vlSymsp->TOP__top.pc),64);
    bufp->fullQData(oldp+244,(vlSymsp->TOP__top.__PVT__rdata),64);
    bufp->fullQData(oldp+246,(vlSymsp->TOP__top.__PVT__R_rs1),64);
    bufp->fullQData(oldp+248,(vlSymsp->TOP__top.__PVT__R_rs2),64);
    bufp->fullCData(oldp+250,(((IData)(vlSymsp->TOP__top.__VdfgTmp_ha718ec2a__0)
                                ? 0U : (IData)(vlSymsp->TOP__top.__VdfgTmp_h4f8fc337__0))),5);
    bufp->fullCData(oldp+251,(vlSymsp->TOP__top.__PVT__Extop),3);
    bufp->fullBit(oldp+252,(vlSymsp->TOP__top.__PVT__RegWr));
    bufp->fullBit(oldp+253,((((0x67U != (0x7fU & vlSymsp->TOP__top.Inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__Extop)))))));
    bufp->fullCData(oldp+254,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
    bufp->fullQData(oldp+255,(vlSymsp->TOP__top.__PVT__Imm),64);
    bufp->fullQData(oldp+257,(vlSymsp->TOP__top.__PVT__ALUres),64);
    bufp->fullQData(oldp+259,((0xfffffffffffffffeULL 
                               & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                    ? vlSymsp->TOP__top.__PVT__Imm
                                    : 4ULL) + ((1U 
                                                & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                ? vlSymsp->TOP__top.pc
                                                : vlSymsp->TOP__top.__PVT__R_rs1)))),64);
    bufp->fullCData(oldp+261,(vlSymsp->TOP__top.__PVT__Branch),3);
    bufp->fullBit(oldp+262,(vlSymsp->TOP__top.__PVT__Less));
    bufp->fullBit(oldp+263,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
    bufp->fullCData(oldp+264,(vlSymsp->TOP__top.__PVT__MemOP),3);
    bufp->fullCData(oldp+265,(vlSymsp->TOP__top.__PVT__RegSrc),2);
    bufp->fullBit(oldp+266,(vlSymsp->TOP__top.__PVT__MemWr));
    bufp->fullQData(oldp+267,(vlSymsp->TOP__top.__PVT__MemOut),64);
    bufp->fullBit(oldp+269,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                              & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullQData(oldp+270,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                    ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                    : vlSymsp->TOP__top.pc))),64);
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top.__PVT__IntrEn));
    bufp->fullBit(oldp+273,((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp)));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__top.__PVT__clint_we));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top.__PVT__clint_re));
    bufp->fullQData(oldp+276,(vlSymsp->TOP__top.__PVT__clint_dout),64);
    bufp->fullBit(oldp+278,(vlSymsp->TOP__top.__PVT__isTuncate));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__top.__PVT__isSext));
    bufp->fullQData(oldp+280,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
    bufp->fullQData(oldp+282,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
    bufp->fullBit(oldp+284,(vlSymsp->TOP__top.__PVT__ALU__DOT__US_S));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
    bufp->fullBit(oldp+286,((1U == (IData)(vlSymsp->TOP__top.ALU__DOT____VdfgTmp_he7b65dc9__0))));
    bufp->fullQData(oldp+287,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
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
    bufp->fullBit(oldp+289,((1U & __Vtemp_haee3d321__0[2U])));
    bufp->fullBit(oldp+290,((((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                >> 0x3fU)))) 
                             & ((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                               >> 0x3fU))) 
                                != (1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+291,((1U & ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
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
    bufp->fullBit(oldp+292,(((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add) 
                             ^ __Vtemp_h3a0080b0__0[2U])));
    bufp->fullQData(oldp+293,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
    bufp->fullQData(oldp+295,(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR),64);
    bufp->fullQData(oldp+297,(vlSymsp->TOP__top.__PVT__ALU__DOT__OR),64);
    bufp->fullQData(oldp+299,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                               & vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
    bufp->fullQData(oldp+301,(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL),64);
    bufp->fullQData(oldp+303,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
    bufp->fullQData(oldp+305,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
    bufp->fullQData(oldp+307,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
    bufp->fullQData(oldp+309,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
    bufp->fullCData(oldp+311,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
    bufp->fullCData(oldp+312,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
    bufp->fullQData(oldp+313,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra),64);
    bufp->fullCData(oldp+315,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
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
    bufp->fullWData(oldp+316,(__Vtemp_heddb9346__0),264);
    bufp->fullWData(oldp+325,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+328,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+331,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+334,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+337,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+339,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+341,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+343,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
    bufp->fullQData(oldp+345,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
    bufp->fullBit(oldp+347,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
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
    bufp->fullWData(oldp+348,(__Vtemp_ha9f09867__0),198);
    bufp->fullWData(oldp+355,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+358,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+361,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+364,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+366,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+368,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+370,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
    bufp->fullBit(oldp+372,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
    bufp->fullCData(oldp+373,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
    __Vtemp_hc9e4b5e3__0[0U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM);
    __Vtemp_hc9e4b5e3__0[1U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                        >> 0x20U));
    __Vtemp_hc9e4b5e3__0[2U] = (0xfU | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM) 
                                        << 4U));
    __Vtemp_hc9e4b5e3__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__REM) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_hc9e4b5e3__0[4U] = (0xe0U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                          << 8U) | 
                                         ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__REM 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp_hc9e4b5e3__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                 >> 0x18U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_hc9e4b5e3__0[6U] = (0xd00U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                      >> 0x20U)) 
                                             >> 0x18U)));
    __Vtemp_hc9e4b5e3__0[7U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV) 
                                 >> 0x14U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_hc9e4b5e3__0[8U] = (0xc000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                            << 0x10U) 
                                           | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__DIV 
                                                       >> 0x20U)) 
                                              >> 0x14U)));
    __Vtemp_hc9e4b5e3__0[9U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                 >> 0x10U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hc9e4b5e3__0[0xaU] = (0xb0000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                               << 0x14U) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                          >> 0x20U)) 
                                                 >> 0x10U)));
    __Vtemp_hc9e4b5e3__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                   >> 0xcU) | ((IData)(
                                                       (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                        >> 0x20U)) 
                                               << 0x14U));
    __Vtemp_hc9e4b5e3__0[0xcU] = (0xa00000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                << 0x18U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                           >> 0x20U)) 
                                                  >> 0xcU)));
    __Vtemp_hc9e4b5e3__0[0xdU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                   >> 8U) | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                      >> 0x20U)) 
                                             << 0x18U));
    __Vtemp_hc9e4b5e3__0[0xeU] = (0x9000000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                                 << 0x1cU) 
                                                | ((IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                            >> 0x20U)) 
                                                   >> 8U)));
    __Vtemp_hc9e4b5e3__0[0xfU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL) 
                                   >> 4U) | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_hc9e4b5e3__0[0x10U] = (0x80000000U | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__MUL 
                                                           >> 0x20U)) 
                                                  >> 4U));
    __Vtemp_hc9e4b5e3__0[0x11U] = (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR);
    __Vtemp_hc9e4b5e3__0[0x12U] = (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                           >> 0x20U));
    __Vtemp_hc9e4b5e3__0[0x13U] = (7U | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR) 
                                         << 4U));
    __Vtemp_hc9e4b5e3__0[0x14U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__OR) 
                                    >> 0x1cU) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                                          >> 0x20U)) 
                                                 << 4U));
    __Vtemp_hc9e4b5e3__0[0x15U] = (0x60U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                             << 8U) 
                                            | ((IData)(
                                                       (vlSymsp->TOP__top.__PVT__ALU__DOT__OR 
                                                        >> 0x20U)) 
                                               >> 0x1cU)));
    __Vtemp_hc9e4b5e3__0[0x16U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                    >> 0x18U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                          >> 0x20U)) 
                                                 << 8U));
    __Vtemp_hc9e4b5e3__0[0x17U] = (0x500U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR) 
                                              << 0xcU) 
                                             | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                         >> 0x20U)) 
                                                >> 0x18U)));
    __Vtemp_hc9e4b5e3__0[0x18U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR) 
                                    >> 0x14U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__XOR 
                                                          >> 0x20U)) 
                                                 << 0xcU));
    __Vtemp_hc9e4b5e3__0[0x19U] = (0x4000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                               << 0x10U) 
                                              | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__XOR 
                                                          >> 0x20U)) 
                                                 >> 0x14U)));
    __Vtemp_hc9e4b5e3__0[0x1aU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                    >> 0x10U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB 
                                                          >> 0x20U)) 
                                                 << 0x10U));
    __Vtemp_hc9e4b5e3__0[0x1bU] = (0x30000U | (((IData)(vlSymsp->TOP__top.__PVT__Less) 
                                                << 0x14U) 
                                               | ((IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB 
                                                           >> 0x20U)) 
                                                  >> 0x10U)));
    __Vtemp_hc9e4b5e3__0[0x1cU] = 0U;
    __Vtemp_hc9e4b5e3__0[0x1dU] = (0x200000U | ((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                                << 0x18U));
    __Vtemp_hc9e4b5e3__0[0x1eU] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__shift) 
                                    >> 8U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                       >> 0x20U)) 
                                              << 0x18U));
    __Vtemp_hc9e4b5e3__0[0x1fU] = (0x1000000U | (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__adder) 
                                                  << 0x1cU) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__top.__PVT__ALU__DOT__shift 
                                                             >> 0x20U)) 
                                                    >> 8U)));
    __Vtemp_hc9e4b5e3__0[0x20U] = (((IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__adder) 
                                    >> 4U) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                       >> 0x20U)) 
                                              << 0x1cU));
    __Vtemp_hc9e4b5e3__0[0x21U] = ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                            >> 0x20U)) 
                                   >> 4U);
    bufp->fullWData(oldp+374,(__Vtemp_hc9e4b5e3__0),1088);
    bufp->fullWData(oldp+408,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+411,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+414,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+417,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+420,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+423,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+426,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+429,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+432,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+435,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+438,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
    bufp->fullWData(oldp+441,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[11]),68);
    bufp->fullWData(oldp+444,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[12]),68);
    bufp->fullWData(oldp+447,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[13]),68);
    bufp->fullWData(oldp+450,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[14]),68);
    bufp->fullWData(oldp+453,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[15]),68);
    bufp->fullQData(oldp+456,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
    bufp->fullQData(oldp+458,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
    bufp->fullQData(oldp+460,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
    bufp->fullQData(oldp+462,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
    bufp->fullQData(oldp+464,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
    bufp->fullQData(oldp+466,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
    bufp->fullQData(oldp+468,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
    bufp->fullQData(oldp+470,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
    bufp->fullQData(oldp+472,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
    bufp->fullQData(oldp+474,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
    bufp->fullQData(oldp+476,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
    bufp->fullQData(oldp+478,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[11]),64);
    bufp->fullQData(oldp+480,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[12]),64);
    bufp->fullQData(oldp+482,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[13]),64);
    bufp->fullQData(oldp+484,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[14]),64);
    bufp->fullQData(oldp+486,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[15]),64);
    bufp->fullQData(oldp+488,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
    bufp->fullBit(oldp+490,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
    bufp->fullCData(oldp+491,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
    __Vtemp_h952069fe__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h6c9564d5__0;
    __Vtemp_h952069fe__0[1U] = 0U;
    __Vtemp_h952069fe__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h6c3e055f__0 
                                      << 2U));
    __Vtemp_h952069fe__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h6c3e055f__0 
                                >> 0x1eU);
    __Vtemp_h952069fe__0[4U] = 0x14U;
    __Vtemp_h952069fe__0[5U] = 0U;
    __Vtemp_h952069fe__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                << 6U);
    __Vtemp_h952069fe__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h952069fe__0[8U] = (0x80U | ((IData)((VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+492,(__Vtemp_h952069fe__0),264);
    bufp->fullWData(oldp+501,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+504,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+507,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+510,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+513,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
    bufp->fullQData(oldp+515,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
    bufp->fullQData(oldp+517,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
    bufp->fullQData(oldp+519,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
    bufp->fullQData(oldp+521,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
    bufp->fullBit(oldp+523,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
    __Vtemp_h24f97c38__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h6a5e94eb__0;
    __Vtemp_h24f97c38__0[1U] = 0U;
    __Vtemp_h24f97c38__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h6a5af48f__0 
                                      << 2U));
    __Vtemp_h24f97c38__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h6a5af48f__0 
                                >> 0x1eU);
    __Vtemp_h24f97c38__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                      << 4U));
    __Vtemp_h24f97c38__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                 >> 0x1cU) | ((IData)(
                                                      (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h24f97c38__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 << 6U) | ((IData)(
                                                   (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                    >> 0x20U)) 
                                           >> 0x1cU));
    __Vtemp_h24f97c38__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h24f97c38__0[8U] = (0x80U | ((IData)((VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+524,(__Vtemp_h24f97c38__0),264);
    bufp->fullWData(oldp+533,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+536,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+539,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+542,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+545,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
    bufp->fullQData(oldp+547,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
    bufp->fullQData(oldp+549,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
    bufp->fullQData(oldp+551,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
    bufp->fullQData(oldp+553,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
    bufp->fullBit(oldp+555,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
    bufp->fullCData(oldp+556,((0x7fU & vlSymsp->TOP__top.Inst)),7);
    bufp->fullCData(oldp+557,((7U & (vlSymsp->TOP__top.Inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+558,((vlSymsp->TOP__top.Inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+559,((4U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
    bufp->fullCData(oldp+560,((5U & (vlSymsp->TOP__top.Inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+561,((6U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
    bufp->fullBit(oldp+562,((0x67U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+563,((((0x33U == (0x7fU & vlSymsp->TOP__top.Inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.Inst))) 
                             & (vlSymsp->TOP__top.Inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+564,(((3U == (7U & (vlSymsp->TOP__top.Inst 
                                             >> 0xcU)))
                                ? 0xaU : ((((vlSymsp->TOP__top.Inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x7020U 
                                                & vlSymsp->TOP__top.Inst))) 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP__top.Inst 
                                                 >> 0xcU))))),5);
    bufp->fullCData(oldp+565,((0x10U | ((8U & (vlSymsp->TOP__top.Inst 
                                               >> 9U)) 
                                        | (7U & (vlSymsp->TOP__top.Inst 
                                                 >> 0xcU))))),5);
    bufp->fullBit(oldp+566,((0x37U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+567,((0x17U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+568,((0x23U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+569,((3U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullCData(oldp+570,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+571,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+572,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+573,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+574,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+575,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+576,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+577,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
    bufp->fullBit(oldp+578,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
    bufp->fullCData(oldp+579,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+580,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                   >> 2U))));
    bufp->fullBit(oldp+581,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
    bufp->fullCData(oldp+582,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+583,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+587,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
    bufp->fullCData(oldp+588,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
    bufp->fullCData(oldp+589,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+590,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
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
    bufp->fullWData(oldp+591,(__Vtemp_h8ffe19e9__0),264);
    bufp->fullWData(oldp+600,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+603,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+606,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+609,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+612,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+614,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+616,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+618,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+620,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+622,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
    bufp->fullBit(oldp+623,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+624,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+625,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+627,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.pc
                                : vlSymsp->TOP__top.__PVT__R_rs1)),64);
    bufp->fullCData(oldp+629,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+630,((QData)((IData)((0x898537eU 
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
    bufp->fullCData(oldp+632,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+633,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+634,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+635,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+636,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+637,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+638,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+639,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+640,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+641,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+642,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+643,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+644,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+645,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+646,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+647,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+648,((IData)(vlSymsp->TOP__top.pc)),32);
    bufp->fullIData(oldp+649,((vlSymsp->TOP__top.Inst 
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
    bufp->fullWData(oldp+650,(__Vtemp_h75f56fbe__0),335);
    bufp->fullWData(oldp+661,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+664,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+667,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+670,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+673,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+676,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+678,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+680,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+682,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+684,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+686,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+688,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
    bufp->fullQData(oldp+689,(((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
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
    bufp->fullCData(oldp+691,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+692,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+693,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 7U))),5);
    bufp->fullQData(oldp+694,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
    bufp->fullQData(oldp+696,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
    bufp->fullQData(oldp+698,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
    bufp->fullQData(oldp+700,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
    bufp->fullQData(oldp+702,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
    bufp->fullQData(oldp+704,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
    bufp->fullQData(oldp+706,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
    bufp->fullQData(oldp+708,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
    bufp->fullQData(oldp+710,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
    bufp->fullQData(oldp+712,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
    bufp->fullQData(oldp+714,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
    bufp->fullQData(oldp+716,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
    bufp->fullQData(oldp+718,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
    bufp->fullQData(oldp+720,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
    bufp->fullQData(oldp+722,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
    bufp->fullQData(oldp+724,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
    bufp->fullQData(oldp+726,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
    bufp->fullQData(oldp+728,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
    bufp->fullQData(oldp+730,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
    bufp->fullQData(oldp+732,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
    bufp->fullQData(oldp+734,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
    bufp->fullQData(oldp+736,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
    bufp->fullQData(oldp+738,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
    bufp->fullQData(oldp+740,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
    bufp->fullQData(oldp+742,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
    bufp->fullQData(oldp+744,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
    bufp->fullQData(oldp+746,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
    bufp->fullQData(oldp+748,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
    bufp->fullQData(oldp+750,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
    bufp->fullQData(oldp+752,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
    bufp->fullQData(oldp+754,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
    bufp->fullQData(oldp+756,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
    bufp->fullQData(oldp+758,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
    bufp->fullQData(oldp+760,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
    bufp->fullBit(oldp+762,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+763,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+764,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                             & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
    bufp->fullSData(oldp+765,((vlSymsp->TOP__top.Inst 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+766,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
    bufp->fullQData(oldp+768,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
    bufp->fullQData(oldp+770,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
    bufp->fullQData(oldp+772,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
    bufp->fullBit(oldp+774,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 3U)))));
    bufp->fullBit(oldp+775,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                           >> 7U)))));
    bufp->fullBit(oldp+776,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
    bufp->fullBit(oldp+777,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
    bufp->fullBit(oldp+778,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
    bufp->fullQData(oldp+779,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
    bufp->fullBit(oldp+781,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
    bufp->fullBit(oldp+782,((0x305U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+783,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
    bufp->fullBit(oldp+784,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
    bufp->fullBit(oldp+785,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
    bufp->fullBit(oldp+786,((0x304U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+787,((0x344U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+788,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 7U)))));
    bufp->fullCData(oldp+789,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
    bufp->fullQData(oldp+790,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
    bufp->fullBit(oldp+792,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
    bufp->fullBit(oldp+793,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+794,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+795,(((0x304U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    bufp->fullBit(oldp+796,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+797,(((0x305U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    bufp->fullBit(oldp+798,(vlSelf->clk));
    bufp->fullBit(oldp+799,(vlSelf->rst));
    bufp->fullIData(oldp+800,(vlSelf->Inst),32);
    bufp->fullQData(oldp+801,(vlSelf->pc),64);
    bufp->fullQData(oldp+803,(vlSymsp->TOP__top__IntrUnit.mcase),64);
    bufp->fullQData(oldp+805,(vlSymsp->TOP__top.__PVT__waddr),64);
    bufp->fullBit(oldp+807,(1U));
    bufp->fullIData(oldp+808,(vlSymsp->TOP__top.__PVT__AWADDR),32);
    bufp->fullBit(oldp+809,(vlSymsp->TOP__top.__PVT__AWVALID));
    bufp->fullQData(oldp+810,(vlSymsp->TOP__top.__PVT__WDATA),64);
    bufp->fullBit(oldp+812,(vlSymsp->TOP__top.__PVT__WVALID));
    bufp->fullCData(oldp+813,(vlSymsp->TOP__top.__PVT__WSTRB),8);
    bufp->fullBit(oldp+814,(vlSymsp->TOP__top.__PVT__BREADY));
    bufp->fullIData(oldp+815,(0x40U),32);
    bufp->fullIData(oldp+816,(6U),32);
    bufp->fullIData(oldp+817,(4U),32);
    bufp->fullIData(oldp+818,(2U),32);
    bufp->fullIData(oldp+819,(1U),32);
    bufp->fullQData(oldp+820,(0ULL),64);
    bufp->fullIData(oldp+822,(0x42U),32);
    bufp->fullIData(oldp+823,(4U),32);
    bufp->fullIData(oldp+824,(3U),32);
    bufp->fullIData(oldp+825,(3U),32);
    bufp->fullIData(oldp+826,(0x10U),32);
    bufp->fullIData(oldp+827,(0x44U),32);
    bufp->fullIData(oldp+828,(0x10U),32);
    bufp->fullIData(oldp+829,(7U),32);
    bufp->fullCData(oldp+830,(0U),2);
    bufp->fullIData(oldp+831,(0x1bceU),18);
    bufp->fullIData(oldp+832,(9U),32);
    bufp->fullIData(oldp+833,(2U),32);
    bufp->fullIData(oldp+834,(0xcU),32);
    bufp->fullCData(oldp+835,(0U),3);
    __Vtemp_hd6f60a5b__0[0U] = 0x37eceb9aU;
    __Vtemp_hd6f60a5b__0[1U] = 0xd46c1ac7U;
    __Vtemp_hd6f60a5b__0[2U] = 0x65d92f5bU;
    __Vtemp_hd6f60a5b__0[3U] = 0x268da6U;
    bufp->fullWData(oldp+836,(__Vtemp_hd6f60a5b__0),120);
    bufp->fullIData(oldp+840,(0xaU),32);
    bufp->fullIData(oldp+841,(0xcU),32);
    bufp->fullBit(oldp+842,(0U));
    bufp->fullCData(oldp+843,(0xe7U),8);
    bufp->fullIData(oldp+844,(8U),32);
    bufp->fullIData(oldp+845,(1U),32);
    bufp->fullSData(oldp+846,(0x35bdU),16);
    bufp->fullCData(oldp+847,(0U),8);
    bufp->fullQData(oldp+848,(0xc060343cffULL),40);
    bufp->fullCData(oldp+850,(1U),2);
    bufp->fullIData(oldp+851,(5U),32);
    bufp->fullIData(oldp+852,(7U),32);
    bufp->fullBit(oldp+853,(vlSymsp->TOP__top.__PVT__IFU__DOT__valid));
    bufp->fullIData(oldp+854,(0x43U),32);
    bufp->fullIData(oldp+855,(5U),32);
    bufp->fullQData(oldp+856,(0x80000000ULL),64);
    bufp->fullQData(oldp+858,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+860,(0x20U),32);
    bufp->fullIData(oldp+861,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullBit(oldp+862,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr_done));
    bufp->fullBit(oldp+863,(vlSymsp->TOP__top__IntrUnit.__PVT__isCSRw));
    __Vtemp_h058c0b04__0[0U] = 7U;
    __Vtemp_h058c0b04__0[1U] = 0x80000000U;
    __Vtemp_h058c0b04__0[2U] = 0x2eU;
    __Vtemp_h058c0b04__0[3U] = 0U;
    __Vtemp_h058c0b04__0[4U] = 4U;
    bufp->fullWData(oldp+864,(__Vtemp_h058c0b04__0),132);
    bufp->fullQData(oldp+869,(0xa00001800ULL),64);
    bufp->fullIData(oldp+871,(6U),32);
}
