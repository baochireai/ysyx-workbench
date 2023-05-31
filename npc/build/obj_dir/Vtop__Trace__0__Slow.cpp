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
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+825,"rst", false,-1);
    tracep->declBus(c+826,"Inst", false,-1, 31,0);
    tracep->declQuad(c+827,"pc", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+825,"rst", false,-1);
    tracep->declBus(c+233,"Inst", false,-1, 31,0);
    tracep->declQuad(c+234,"pc", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declBus(c+831,"Extop", false,-1, 2,0);
    tracep->declBit(c+241,"RegWr", false,-1);
    tracep->declBit(c+242,"ALUAsr", false,-1);
    tracep->declBus(c+243,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+244,"Imm", false,-1, 63,0);
    tracep->declQuad(c+246,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+248,"NextPC", false,-1, 63,0);
    tracep->declBus(c+250,"Branch", false,-1, 2,0);
    tracep->declQuad(c+832,"waddr", false,-1, 63,0);
    tracep->declBit(c+251,"Less", false,-1);
    tracep->declBit(c+252,"Zero", false,-1);
    tracep->declBus(c+253,"MemOP", false,-1, 2,0);
    tracep->declBus(c+254,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+255,"MemWr", false,-1);
    tracep->declQuad(c+256,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+150,"RegWdata", false,-1, 63,0);
    tracep->declBit(c+258,"isIntrPC", false,-1);
    tracep->declQuad(c+259,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+261,"IntrEn", false,-1);
    tracep->declQuad(c+152,"IntrOut", false,-1, 63,0);
    tracep->declBit(c+262,"clint_mtip", false,-1);
    tracep->declBit(c+263,"clint_we", false,-1);
    tracep->declBit(c+264,"clint_re", false,-1);
    tracep->declQuad(c+265,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+267,"ifu_arvalid", false,-1);
    tracep->declBus(c+268,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+834,"ifu_ready", false,-1);
    tracep->declBit(c+834,"ram_arready", false,-1);
    tracep->declQuad(c+269,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+271,"ram_rvalid", false,-1);
    tracep->declBus(c+272,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+835,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+836,"AWVALID", false,-1);
    tracep->declBit(c+273,"AWREADY", false,-1);
    tracep->declQuad(c+837,"WDATA", false,-1, 63,0);
    tracep->declBit(c+839,"WVALID", false,-1);
    tracep->declBit(c+274,"WREADY", false,-1);
    tracep->declBus(c+840,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+275,"BVALID", false,-1);
    tracep->declBus(c+276,"BRESP", false,-1, 1,0);
    tracep->declBit(c+841,"BREADY", false,-1);
    tracep->declBit(c+277,"is_jump", false,-1);
    tracep->declBit(c+278,"isTuncate", false,-1);
    tracep->declBit(c+279,"isSext", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+242,"ALUAsr", false,-1);
    tracep->declQuad(c+234,"PC", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+243,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+244,"Imm", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declBit(c+278,"isTuncate", false,-1);
    tracep->declBit(c+279,"isSext", false,-1);
    tracep->declQuad(c+246,"ALUres", false,-1, 63,0);
    tracep->declBit(c+251,"Less", false,-1);
    tracep->declBit(c+252,"Zero", false,-1);
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
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+280,"A", false,-1, 63,0);
    tracep->declQuad(c+282,"B", false,-1, 63,0);
    tracep->declBit(c+285,"Cin", false,-1);
    tracep->declQuad(c+287,"Result", false,-1, 63,0);
    tracep->declBit(c+289,"Carry", false,-1);
    tracep->declBit(c+290,"Overflow", false,-1);
    tracep->declBit(c+252,"zero", false,-1);
    tracep->declQuad(c+309,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+843,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+280,"din", false,-1, 63,0);
    tracep->declBus(c+311,"shamtin", false,-1, 5,0);
    tracep->declBit(c+284,"A_L", false,-1);
    tracep->declBit(c+286,"L_R", false,-1);
    tracep->declBit(c+278,"isTuncate", false,-1);
    tracep->declQuad(c+293,"dout", false,-1, 63,0);
    tracep->declBus(c+312,"shamt", false,-1, 5,0);
    tracep->declQuad(c+313,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+844,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+845,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+293,"out", false,-1, 63,0);
    tracep->declBus(c+315,"key", false,-1, 1,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+316,"lut", false,-1, 263,0);
    tracep->declBus(c+849,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+851,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+845,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+282,"out", false,-1, 63,0);
    tracep->declBus(c+243,"key", false,-1, 1,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+348,"lut", false,-1, 197,0);
    tracep->declBus(c+849,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+852,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+853,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+844,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+307,"out", false,-1, 63,0);
    tracep->declBus(c+373,"key", false,-1, 3,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+374,"lut", false,-1, 1087,0);
    tracep->declBus(c+854,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+855,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+844,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+845,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+303,"out", false,-1, 63,0);
    tracep->declBus(c+491,"key", false,-1, 1,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+492,"lut", false,-1, 263,0);
    tracep->declBus(c+849,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+844,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+845,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+305,"out", false,-1, 63,0);
    tracep->declBus(c+491,"key", false,-1, 1,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+524,"lut", false,-1, 263,0);
    tracep->declBus(c+849,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ContrGen ");
    tracep->declBus(c+233,"id_inst", false,-1, 31,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+244,"Imm", false,-1, 63,0);
    tracep->declBit(c+241,"RegWr", false,-1);
    tracep->declBit(c+242,"ALUAsr", false,-1);
    tracep->declBus(c+243,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+250,"Branch", false,-1, 2,0);
    tracep->declBit(c+255,"MemWr", false,-1);
    tracep->declBus(c+253,"MemOP", false,-1, 2,0);
    tracep->declBus(c+254,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+278,"isTuncate", false,-1);
    tracep->declBit(c+279,"isSext", false,-1);
    tracep->declBit(c+261,"IntrEn", false,-1);
    tracep->declBus(c+556,"Extop", false,-1, 2,0);
    tracep->declBus(c+557,"opcode", false,-1, 6,0);
    tracep->declBus(c+558,"func3", false,-1, 2,0);
    tracep->declBus(c+559,"func7", false,-1, 6,0);
    tracep->declBit(c+560,"isconditionalJump", false,-1);
    tracep->declBus(c+561,"BranchOpt", false,-1, 2,0);
    tracep->declBit(c+562,"isJal", false,-1);
    tracep->declBit(c+563,"isJalr", false,-1);
    tracep->declBit(c+564,"isMul", false,-1);
    tracep->declBus(c+565,"IntALUct", false,-1, 4,0);
    tracep->declBus(c+566,"MulALUct", false,-1, 4,0);
    tracep->declBit(c+567,"islui", false,-1);
    tracep->declBit(c+568,"isauipc", false,-1);
    tracep->declBit(c+569,"isMemW", false,-1);
    tracep->declBit(c+570,"isMemR", false,-1);
    tracep->pushNamePrefix("ImmGenU ");
    tracep->declBus(c+571,"Inst", false,-1, 31,7);
    tracep->declBus(c+556,"Extop", false,-1, 2,0);
    tracep->declQuad(c+244,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+856,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+851,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+244,"out", false,-1, 63,0);
    tracep->declBus(c+556,"key", false,-1, 2,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+572,"lut", false,-1, 334,0);
    tracep->declBus(c+857,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+583+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+32+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+598+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+608,"lut_out", false,-1, 63,0);
    tracep->declBit(c+610,"hit", false,-1);
    tracep->declBus(c+858,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+845,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+859,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+845,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+254,"out", false,-1, 1,0);
    tracep->declBus(c+557,"key", false,-1, 6,0);
    tracep->declBus(c+860,"default_out", false,-1, 1,0);
    tracep->declBus(c+861,"lut", false,-1, 17,0);
    tracep->declBus(c+862,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+37+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+39+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+41+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+611,"lut_out", false,-1, 1,0);
    tracep->declBit(c+612,"hit", false,-1);
    tracep->declBus(c+863,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+864,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+859,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+851,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+556,"out", false,-1, 2,0);
    tracep->declBus(c+557,"key", false,-1, 6,0);
    tracep->declBus(c+865,"default_out", false,-1, 2,0);
    tracep->declArray(c+866,"lut", false,-1, 119,0);
    tracep->declBus(c+870,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+43+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+55+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+67+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+613,"lut_out", false,-1, 2,0);
    tracep->declBit(c+614,"hit", false,-1);
    tracep->declBus(c+871,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+846,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+859,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+261,"out", false,-1, 0,0);
    tracep->declBus(c+557,"key", false,-1, 6,0);
    tracep->declBus(c+872,"default_out", false,-1, 0,0);
    tracep->declBus(c+873,"lut", false,-1, 7,0);
    tracep->declBus(c+874,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+79+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+80+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+81+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+615,"lut_out", false,-1, 0,0);
    tracep->declBit(c+616,"hit", false,-1);
    tracep->declBus(c+875,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+844,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+851,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+241,"out", false,-1, 0,0);
    tracep->declBus(c+556,"key", false,-1, 2,0);
    tracep->declBus(c+872,"default_out", false,-1, 0,0);
    tracep->declBus(c+876,"lut", false,-1, 15,0);
    tracep->declBus(c+844,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+82+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+86+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+90+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+617,"lut_out", false,-1, 0,0);
    tracep->declBit(c+618,"hit", false,-1);
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declQuad(c+246,"Addr", false,-1, 63,0);
    tracep->declBus(c+253,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+238,"DataIn", false,-1, 63,0);
    tracep->declBit(c+255,"WrEn", false,-1);
    tracep->declQuad(c+256,"DataOut", false,-1, 63,0);
    tracep->declBit(c+263,"clint_we", false,-1);
    tracep->declBit(c+264,"clint_re", false,-1);
    tracep->declBit(c+619,"clint_en", false,-1);
    tracep->declBus(c+620,"wmask", false,-1, 7,0);
    tracep->declBit(c+621,"isSign", false,-1);
    tracep->declBit(c+622,"RdEn", false,-1);
    tracep->declBus(c+623,"shift", false,-1, 5,0);
    tracep->declArray(c+624,"data", false,-1, 127,0);
    tracep->declBus(c+628,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+844,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+845,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+874,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+620,"out", false,-1, 7,0);
    tracep->declBus(c+629,"key", false,-1, 1,0);
    tracep->declBus(c+877,"default_out", false,-1, 7,0);
    tracep->declQuad(c+878,"lut", false,-1, 39,0);
    tracep->declBus(c+870,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+94+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+98+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+102+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+630,"lut_out", false,-1, 7,0);
    tracep->declBit(c+631,"hit", false,-1);
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+844,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+845,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+256,"out", false,-1, 63,0);
    tracep->declBus(c+629,"key", false,-1, 1,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+632,"lut", false,-1, 263,0);
    tracep->declBus(c+849,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+641+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+106+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+653+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+661,"lut_out", false,-1, 63,0);
    tracep->declBit(c+663,"hit", false,-1);
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+250,"Branch", false,-1, 2,0);
    tracep->declQuad(c+244,"imm", false,-1, 63,0);
    tracep->declQuad(c+234,"PC", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+251,"Less", false,-1);
    tracep->declBit(c+252,"Zero", false,-1);
    tracep->declQuad(c+248,"NextPC", false,-1, 63,0);
    tracep->declBit(c+277,"is_jump", false,-1);
    tracep->declBit(c+664,"PCAsrc", false,-1);
    tracep->declBit(c+665,"PCBsrc", false,-1);
    tracep->declQuad(c+666,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+668,"Bsrc", false,-1, 63,0);
    tracep->declQuad(c+670,"NextPCp", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+859,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+851,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+845,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+672,"out", false,-1, 1,0);
    tracep->declBus(c+250,"key", false,-1, 2,0);
    tracep->declBus(c+880,"default_out", false,-1, 1,0);
    tracep->declQuad(c+673,"lut", false,-1, 34,0);
    tracep->declBus(c+856,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+675+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+110+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+682+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+689,"lut_out", false,-1, 1,0);
    tracep->declBit(c+690,"hit", false,-1);
    tracep->declBus(c+881,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("jump_check ");
    tracep->declBus(c+859,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+851,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+277,"out", false,-1, 0,0);
    tracep->declBus(c+250,"key", false,-1, 2,0);
    tracep->declBus(c+872,"default_out", false,-1, 0,0);
    tracep->declBus(c+691,"lut", false,-1, 27,0);
    tracep->declBus(c+844,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+692+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+117+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+699+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+706,"lut_out", false,-1, 0,0);
    tracep->declBit(c+707,"hit", false,-1);
    tracep->declBus(c+881,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+825,"rst", false,-1);
    tracep->declBit(c+258,"isIntrPC", false,-1);
    tracep->declBit(c+277,"is_jump", false,-1);
    tracep->declQuad(c+248,"JumpPc", false,-1, 63,0);
    tracep->declQuad(c+259,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+882,"pipeline_hold", false,-1);
    tracep->declBit(c+267,"ARVALID", false,-1);
    tracep->declBus(c+268,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+834,"ARREADY", false,-1);
    tracep->declBit(c+834,"RREADY", false,-1);
    tracep->declQuad(c+269,"inst_i", false,-1, 63,0);
    tracep->declBit(c+271,"RVALID", false,-1);
    tracep->declBus(c+233,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+234,"pc_o", false,-1, 63,0);
    tracep->declBit(c+883,"ifu_valid", false,-1);
    tracep->declBit(c+884,"id_ready", false,-1);
    tracep->declBit(c+885,"ifu_ready", false,-1);
    tracep->declBit(c+886,"ex_valid", false,-1);
    tracep->declQuad(c+708,"dpc", false,-1, 63,0);
    tracep->declQuad(c+710,"NextPC", false,-1, 63,0);
    tracep->declBus(c+887,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("id_pc_reg ");
    tracep->declBus(c+842,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+888,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+825,"rst", false,-1);
    tracep->declQuad(c+710,"din", false,-1, 63,0);
    tracep->declQuad(c+234,"dout", false,-1, 63,0);
    tracep->declBit(c+834,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_inst_reg ");
    tracep->declBus(c+890,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+891,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+825,"rst", false,-1);
    tracep->declBus(c+712,"din", false,-1, 31,0);
    tracep->declBus(c+233,"dout", false,-1, 31,0);
    tracep->declBit(c+271,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pre_pc_reg ");
    tracep->declBus(c+842,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+892,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+825,"rst", false,-1);
    tracep->declQuad(c+708,"din", false,-1, 63,0);
    tracep->declQuad(c+710,"dout", false,-1, 63,0);
    tracep->declBit(c+834,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegWsrcMux ");
    tracep->declBus(c+851,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+845,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+150,"out", false,-1, 63,0);
    tracep->declBus(c+254,"key", false,-1, 1,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+154,"lut", false,-1, 197,0);
    tracep->declBus(c+849,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+161+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+124+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+170+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+176,"lut_out", false,-1, 63,0);
    tracep->declBit(c+178,"hit", false,-1);
    tracep->declBus(c+852,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+856,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+713,"rs1", false,-1, 4,0);
    tracep->declBus(c+714,"rs2", false,-1, 4,0);
    tracep->declBus(c+715,"waddr", false,-1, 4,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declQuad(c+150,"wdata", false,-1, 63,0);
    tracep->declBit(c+241,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+716+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declQuad(c+238,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+246,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+263,"we", false,-1);
    tracep->declBit(c+264,"re", false,-1);
    tracep->declBit(c+262,"clint_mtip", false,-1);
    tracep->declQuad(c+265,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+780,"mtime", false,-1, 63,0);
    tracep->declQuad(c+782,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+784,"ismtimecmp", false,-1);
    tracep->declBit(c+785,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+842,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+894,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+872,"rst", false,-1);
    tracep->declQuad(c+238,"din", false,-1, 63,0);
    tracep->declQuad(c+782,"dout", false,-1, 63,0);
    tracep->declBit(c+786,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_axi_lite_u ");
    tracep->declBus(c+890,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+842,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+874,"DSIZE", false,-1, 31,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+825,"resetn", false,-1);
    tracep->declBus(c+835,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+836,"AWVALID", false,-1);
    tracep->declBit(c+273,"AWREADY", false,-1);
    tracep->declQuad(c+837,"WDATA", false,-1, 63,0);
    tracep->declBit(c+839,"WVALID", false,-1);
    tracep->declBit(c+274,"WREADY", false,-1);
    tracep->declBus(c+840,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+275,"BVALID", false,-1);
    tracep->declBus(c+276,"BRESP", false,-1, 1,0);
    tracep->declBit(c+841,"BREADY", false,-1);
    tracep->declBus(c+268,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+267,"ARVALID", false,-1);
    tracep->declBit(c+834,"ARREADY", false,-1);
    tracep->declQuad(c+269,"RDATA", false,-1, 63,0);
    tracep->declBus(c+272,"RRESP", false,-1, 1,0);
    tracep->declBit(c+271,"RVALID", false,-1);
    tracep->declBit(c+834,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+127+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+787,"waddr", false,-1, 31,0);
    tracep->declBus(c+896,"raddr", false,-1, 31,0);
    tracep->declBus(c+788,"wstrb", false,-1, 7,0);
    tracep->declBit(c+789,"wdata_done", false,-1);
    tracep->declBit(c+897,"raddr_done", false,-1);
    tracep->declBus(c+131,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__IntrUnit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__IntrUnit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+261,"IntrEn", false,-1);
    tracep->declBit(c+262,"clint_mtip", false,-1);
    tracep->declQuad(c+234,"pc", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+713,"zimm", false,-1, 4,0);
    tracep->declBus(c+790,"csr", false,-1, 11,0);
    tracep->declBus(c+791,"func3", false,-1, 2,0);
    tracep->declBit(c+258,"isIntrPC", false,-1);
    tracep->declQuad(c+259,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+152,"dout", false,-1, 63,0);
    tracep->declQuad(c+792,"mepc", false,-1, 63,0);
    tracep->declQuad(c+794,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+796,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+798,"mie", false,-1, 63,0);
    tracep->declQuad(c+847,"mip", false,-1, 63,0);
    tracep->declQuad(c+829,"mcase", false,-1, 63,0);
    tracep->declBit(c+898,"isCSRw", false,-1);
    tracep->declBit(c+800,"mstatus_MIE", false,-1);
    tracep->declBit(c+801,"mie_MTIE", false,-1);
    tracep->declBit(c+802,"timer_irq", false,-1);
    tracep->declBit(c+803,"irq_raise", false,-1);
    tracep->declBit(c+872,"mip_MTIP", false,-1);
    tracep->declBit(c+804,"isecall", false,-1);
    tracep->declQuad(c+805,"eNo", false,-1, 63,0);
    tracep->declBit(c+807,"ismret", false,-1);
    tracep->declBit(c+808,"ismtvec", false,-1);
    tracep->declBit(c+809,"ismepc", false,-1);
    tracep->declBit(c+810,"ismcase", false,-1);
    tracep->declBit(c+811,"ismstatus", false,-1);
    tracep->declBit(c+812,"ismie", false,-1);
    tracep->declBit(c+813,"ismip", false,-1);
    tracep->declQuad(c+179,"csrWData", false,-1, 63,0);
    tracep->declQuad(c+181,"mepcIn", false,-1, 63,0);
    tracep->declQuad(c+183,"mcaseIn", false,-1, 63,0);
    tracep->declBit(c+814,"mstatus_MPIE", false,-1);
    tracep->declQuad(c+185,"mstatusIn", false,-1, 63,0);
    tracep->pushNamePrefix("CSRwEn ");
    tracep->declBus(c+845,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+845,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+805,"out", false,-1, 63,0);
    tracep->declBus(c+815,"key", false,-1, 1,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+899,"lut", false,-1, 131,0);
    tracep->declBus(c+849,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+132+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+138+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+140+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+816,"lut_out", false,-1, 63,0);
    tracep->declBit(c+818,"hit", false,-1);
    tracep->declBus(c+863,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcaseReg ");
    tracep->declBus(c+842,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+847,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+872,"rst", false,-1);
    tracep->declQuad(c+183,"din", false,-1, 63,0);
    tracep->declQuad(c+829,"dout", false,-1, 63,0);
    tracep->declBit(c+819,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcReg ");
    tracep->declBus(c+842,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+847,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+872,"rst", false,-1);
    tracep->declQuad(c+181,"din", false,-1, 63,0);
    tracep->declQuad(c+792,"dout", false,-1, 63,0);
    tracep->declBit(c+820,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mieReg ");
    tracep->declBus(c+842,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+847,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+872,"rst", false,-1);
    tracep->declQuad(c+179,"din", false,-1, 63,0);
    tracep->declQuad(c+798,"dout", false,-1, 63,0);
    tracep->declBit(c+821,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatusReg ");
    tracep->declBus(c+842,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+904,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+872,"rst", false,-1);
    tracep->declQuad(c+185,"din", false,-1, 63,0);
    tracep->declQuad(c+796,"dout", false,-1, 63,0);
    tracep->declBit(c+822,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvecReg ");
    tracep->declBus(c+842,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+847,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+824,"clk", false,-1);
    tracep->declBit(c+872,"rst", false,-1);
    tracep->declQuad(c+179,"din", false,-1, 63,0);
    tracep->declQuad(c+794,"dout", false,-1, 63,0);
    tracep->declBit(c+823,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scrDataSrc ");
    tracep->declBus(c+843,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+851,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+842,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+846,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+179,"out", false,-1, 63,0);
    tracep->declBus(c+791,"key", false,-1, 2,0);
    tracep->declQuad(c+847,"default_out", false,-1, 63,0);
    tracep->declArray(c+187,"lut", false,-1, 401,0);
    tracep->declBus(c+857,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declArray(c+200+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+144+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+218+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+230,"lut_out", false,-1, 63,0);
    tracep->declBit(c+232,"hit", false,-1);
    tracep->declBus(c+906,"i", false,-1, 31,0);
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
    VlWide<9>/*287:0*/ __Vtemp_heddb9346__0;
    VlWide<7>/*223:0*/ __Vtemp_ha9f09867__0;
    VlWide<34>/*1087:0*/ __Vtemp_h77e10e19__0;
    VlWide<9>/*287:0*/ __Vtemp_hf75a5214__0;
    VlWide<9>/*287:0*/ __Vtemp_hd1b75b9e__0;
    VlWide<11>/*351:0*/ __Vtemp_h75f56fbe__0;
    VlWide<9>/*287:0*/ __Vtemp_h8ffe19e9__0;
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
    bufp->fullCData(oldp+32,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+33,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+34,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[4]),3);
    bufp->fullSData(oldp+37,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+38,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[1]),9);
    bufp->fullCData(oldp+39,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[0]),7);
    bufp->fullCData(oldp+40,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[1]),7);
    bufp->fullCData(oldp+41,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[0]),2);
    bufp->fullCData(oldp+42,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[1]),2);
    bufp->fullSData(oldp+43,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+44,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+45,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+46,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+47,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+48,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+49,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+50,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+51,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
    bufp->fullSData(oldp+52,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
    bufp->fullSData(oldp+53,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
    bufp->fullSData(oldp+54,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[11]),10);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
    bufp->fullCData(oldp+61,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
    bufp->fullCData(oldp+62,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
    bufp->fullCData(oldp+65,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
    bufp->fullCData(oldp+66,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[11]),7);
    bufp->fullCData(oldp+67,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
    bufp->fullCData(oldp+68,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
    bufp->fullCData(oldp+75,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
    bufp->fullCData(oldp+76,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
    bufp->fullCData(oldp+77,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[11]),3);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__key_list[0]),7);
    bufp->fullBit(oldp+81,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__data_list[0]));
    bufp->fullCData(oldp+82,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+83,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+84,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+85,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+88,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+89,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
    bufp->fullSData(oldp+94,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+95,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+96,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+97,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
    bufp->fullCData(oldp+101,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
    bufp->fullCData(oldp+103,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
    bufp->fullCData(oldp+104,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
    bufp->fullCData(oldp+105,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
    bufp->fullCData(oldp+106,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
    bufp->fullCData(oldp+107,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
    bufp->fullCData(oldp+110,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
    bufp->fullCData(oldp+111,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
    bufp->fullCData(oldp+112,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
    bufp->fullCData(oldp+113,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[0]),3);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[1]),3);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[2]),3);
    bufp->fullCData(oldp+120,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[3]),3);
    bufp->fullCData(oldp+121,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[4]),3);
    bufp->fullCData(oldp+122,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[5]),3);
    bufp->fullCData(oldp+123,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[6]),3);
    bufp->fullCData(oldp+124,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[0]),2);
    bufp->fullCData(oldp+125,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[1]),2);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[2]),2);
    bufp->fullQData(oldp+127,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[0]),64);
    bufp->fullQData(oldp+129,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__mem[1]),64);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__i),32);
    bufp->fullWData(oldp+132,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+135,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
    bufp->fullCData(oldp+139,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
    bufp->fullQData(oldp+140,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
    bufp->fullQData(oldp+142,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
    bufp->fullCData(oldp+144,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
    bufp->fullCData(oldp+145,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
    bufp->fullCData(oldp+146,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
    bufp->fullCData(oldp+147,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
    bufp->fullCData(oldp+148,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
    bufp->fullCData(oldp+149,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
    bufp->fullQData(oldp+150,(vlSymsp->TOP__top.__PVT__RegWdata),64);
    bufp->fullQData(oldp+152,(vlSymsp->TOP__top__IntrUnit.__PVT__dout),64);
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
    bufp->fullWData(oldp+154,(__Vtemp_hcd3257dc__0),198);
    bufp->fullWData(oldp+161,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+164,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+167,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+170,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+172,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+174,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+176,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__lut_out),64);
    bufp->fullBit(oldp+178,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__hit));
    bufp->fullQData(oldp+179,(vlSymsp->TOP__top__IntrUnit.__PVT__csrWData),64);
    bufp->fullQData(oldp+181,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top.pc
                                : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
    bufp->fullQData(oldp+183,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__IntrUnit.__PVT__eNo
                                : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
    bufp->fullQData(oldp+185,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
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
    bufp->fullWData(oldp+187,(__Vtemp_h4cdbe8bd__0),402);
    bufp->fullWData(oldp+200,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+203,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+206,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+209,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+212,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
    bufp->fullWData(oldp+215,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
    bufp->fullQData(oldp+218,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
    bufp->fullQData(oldp+220,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
    bufp->fullQData(oldp+222,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
    bufp->fullQData(oldp+224,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
    bufp->fullQData(oldp+226,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
    bufp->fullQData(oldp+228,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
    bufp->fullQData(oldp+230,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
    bufp->fullBit(oldp+232,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__hit));
    bufp->fullIData(oldp+233,(vlSymsp->TOP__top.Inst),32);
    bufp->fullQData(oldp+234,(vlSymsp->TOP__top.pc),64);
    bufp->fullQData(oldp+236,(vlSymsp->TOP__top.__PVT__R_rs1),64);
    bufp->fullQData(oldp+238,(vlSymsp->TOP__top.__PVT__R_rs2),64);
    bufp->fullCData(oldp+240,(((IData)(vlSymsp->TOP__top.__VdfgTmp_h1618d5a6__0)
                                ? 0U : (IData)(vlSymsp->TOP__top.__VdfgTmp_hc486e734__0))),5);
    bufp->fullBit(oldp+241,(vlSymsp->TOP__top.__PVT__RegWr));
    bufp->fullBit(oldp+242,((((0x67U != (0x7fU & vlSymsp->TOP__top.Inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__ContrGen__DOT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__ContrGen__DOT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__ContrGen__DOT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__ContrGen__DOT__Extop)))))));
    bufp->fullCData(oldp+243,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
    bufp->fullQData(oldp+244,(vlSymsp->TOP__top.__PVT__Imm),64);
    bufp->fullQData(oldp+246,(vlSymsp->TOP__top.__PVT__ALUres),64);
    bufp->fullQData(oldp+248,(((0ULL == vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp)
                                ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp)),64);
    bufp->fullCData(oldp+250,(vlSymsp->TOP__top.__PVT__Branch),3);
    bufp->fullBit(oldp+251,(vlSymsp->TOP__top.__PVT__Less));
    bufp->fullBit(oldp+252,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
    bufp->fullCData(oldp+253,(vlSymsp->TOP__top.__PVT__MemOP),3);
    bufp->fullCData(oldp+254,(vlSymsp->TOP__top.__PVT__RegSrc),2);
    bufp->fullBit(oldp+255,(vlSymsp->TOP__top.__PVT__MemWr));
    bufp->fullQData(oldp+256,(vlSymsp->TOP__top.__PVT__MemOut),64);
    bufp->fullBit(oldp+258,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                              & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullQData(oldp+259,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                    ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                    : vlSymsp->TOP__top.pc))),64);
    bufp->fullBit(oldp+261,(vlSymsp->TOP__top.__PVT__IntrEn));
    bufp->fullBit(oldp+262,((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp)));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__top.__PVT__clint_we));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__top.__PVT__clint_re));
    bufp->fullQData(oldp+265,(vlSymsp->TOP__top.__PVT__clint_dout),64);
    bufp->fullBit(oldp+267,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
    bufp->fullIData(oldp+268,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
    bufp->fullQData(oldp+269,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+271,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+272,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+273,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+276,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullBit(oldp+277,(vlSymsp->TOP__top.__PVT__is_jump));
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
    bufp->fullBit(oldp+291,(vlSymsp->TOP__top.__PVT__ALU__DOT__lessS));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__top.__PVT__ALU__DOT__lessUS));
    bufp->fullQData(oldp+293,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
    bufp->fullQData(oldp+295,(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR),64);
    bufp->fullQData(oldp+297,(vlSymsp->TOP__top.__PVT__ALU__DOT__OR),64);
    bufp->fullQData(oldp+299,(vlSymsp->TOP__top.__PVT__ALU__DOT__AND),64);
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
    bufp->fullWData(oldp+374,(__Vtemp_h77e10e19__0),1088);
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
    __Vtemp_hf75a5214__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h7504b383__0;
    __Vtemp_hf75a5214__0[1U] = 0U;
    __Vtemp_hf75a5214__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h76dcbd69__0 
                                      << 2U));
    __Vtemp_hf75a5214__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h76dcbd69__0 
                                >> 0x1eU);
    __Vtemp_hf75a5214__0[4U] = 0x14U;
    __Vtemp_hf75a5214__0[5U] = 0U;
    __Vtemp_hf75a5214__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                << 6U);
    __Vtemp_hf75a5214__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hf75a5214__0[8U] = (0x80U | ((IData)((VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+492,(__Vtemp_hf75a5214__0),264);
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
    __Vtemp_hd1b75b9e__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h755e34ec__0;
    __Vtemp_hd1b75b9e__0[1U] = 0U;
    __Vtemp_hd1b75b9e__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h755a1488__0 
                                      << 2U));
    __Vtemp_hd1b75b9e__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h755a1488__0 
                                >> 0x1eU);
    __Vtemp_hd1b75b9e__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                      << 4U));
    __Vtemp_hd1b75b9e__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                 >> 0x1cU) | ((IData)(
                                                      (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_hd1b75b9e__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 << 6U) | ((IData)(
                                                   (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                    >> 0x20U)) 
                                           >> 0x1cU));
    __Vtemp_hd1b75b9e__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hd1b75b9e__0[8U] = (0x80U | ((IData)((VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+524,(__Vtemp_hd1b75b9e__0),264);
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
    bufp->fullCData(oldp+556,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__Extop),3);
    bufp->fullCData(oldp+557,((0x7fU & vlSymsp->TOP__top.Inst)),7);
    bufp->fullCData(oldp+558,((7U & vlSymsp->TOP__top.Inst)),3);
    bufp->fullCData(oldp+559,((vlSymsp->TOP__top.Inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+560,((4U == (IData)(vlSymsp->TOP__top.__PVT__ContrGen__DOT__Extop))));
    bufp->fullCData(oldp+561,((5U & vlSymsp->TOP__top.Inst)),3);
    bufp->fullBit(oldp+562,((6U == (IData)(vlSymsp->TOP__top.__PVT__ContrGen__DOT__Extop))));
    bufp->fullBit(oldp+563,((0x67U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+564,((((0x33U == (0x7fU & vlSymsp->TOP__top.Inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.Inst))) 
                             & (vlSymsp->TOP__top.Inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+565,(((3U == (7U & vlSymsp->TOP__top.Inst))
                                ? 0xaU : ((((vlSymsp->TOP__top.Inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x27U 
                                                & vlSymsp->TOP__top.Inst))) 
                                           << 3U) | 
                                          (7U & vlSymsp->TOP__top.Inst)))),5);
    bufp->fullCData(oldp+566,((0x10U | ((8U & (vlSymsp->TOP__top.Inst 
                                               << 3U)) 
                                        | (7U & vlSymsp->TOP__top.Inst)))),5);
    bufp->fullBit(oldp+567,((0x37U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+568,((0x17U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+569,((0x23U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+570,((3U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullIData(oldp+571,((vlSymsp->TOP__top.Inst 
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
    bufp->fullWData(oldp+572,(__Vtemp_h75f56fbe__0),335);
    bufp->fullWData(oldp+583,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+586,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+589,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+592,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+595,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+598,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+600,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+602,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+604,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+606,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+608,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+610,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
    bufp->fullCData(oldp+611,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+612,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+613,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+614,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+615,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+616,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+617,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+618,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
    bufp->fullBit(oldp+619,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
    bufp->fullCData(oldp+620,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+621,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                   >> 2U))));
    bufp->fullBit(oldp+622,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
    bufp->fullCData(oldp+623,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+624,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+628,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
    bufp->fullCData(oldp+629,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
    bufp->fullCData(oldp+630,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+631,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
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
    bufp->fullWData(oldp+632,(__Vtemp_h8ffe19e9__0),264);
    bufp->fullWData(oldp+641,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+644,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+647,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+650,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+653,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+655,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+657,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+659,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+661,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+663,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
    bufp->fullBit(oldp+664,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+665,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+666,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+668,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.pc
                                : vlSymsp->TOP__top.__PVT__R_rs1)),64);
    bufp->fullQData(oldp+670,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp),64);
    bufp->fullCData(oldp+672,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+673,((QData)((IData)((0x898537eU 
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
    bufp->fullCData(oldp+675,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+676,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+677,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+678,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+679,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+680,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+681,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+682,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+683,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+684,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+685,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+686,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+687,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+688,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+689,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+690,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+691,((0x248adfU | ((0x1000000U 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))) 
                                                << 0x18U)) 
                                            | (((IData)(
                                                        (0U 
                                                         != vlSymsp->TOP__top.__PVT__ALU__DOT__adder)) 
                                                << 0x14U) 
                                               | (((IData)(vlSymsp->TOP__top.__PVT__Less) 
                                                   << 0xcU) 
                                                  | (0x100U 
                                                     & ((~ (IData)(vlSymsp->TOP__top.__PVT__Less)) 
                                                        << 8U))))))),28);
    bufp->fullCData(oldp+692,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+693,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+694,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+695,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+696,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+697,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+698,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
    bufp->fullBit(oldp+699,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
    bufp->fullBit(oldp+700,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
    bufp->fullBit(oldp+701,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
    bufp->fullBit(oldp+702,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
    bufp->fullBit(oldp+703,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
    bufp->fullBit(oldp+704,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
    bufp->fullBit(oldp+705,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
    bufp->fullBit(oldp+706,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__lut_out));
    bufp->fullBit(oldp+707,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__hit));
    bufp->fullQData(oldp+708,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
    bufp->fullQData(oldp+710,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
    bufp->fullIData(oldp+712,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                           >> 0x20U)))),32);
    bufp->fullCData(oldp+713,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+714,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+715,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 7U))),5);
    bufp->fullQData(oldp+716,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
    bufp->fullQData(oldp+718,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
    bufp->fullQData(oldp+720,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
    bufp->fullQData(oldp+722,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
    bufp->fullQData(oldp+724,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
    bufp->fullQData(oldp+726,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
    bufp->fullQData(oldp+728,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
    bufp->fullQData(oldp+730,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
    bufp->fullQData(oldp+732,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
    bufp->fullQData(oldp+734,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
    bufp->fullQData(oldp+736,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
    bufp->fullQData(oldp+738,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
    bufp->fullQData(oldp+740,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
    bufp->fullQData(oldp+742,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
    bufp->fullQData(oldp+744,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
    bufp->fullQData(oldp+746,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
    bufp->fullQData(oldp+748,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
    bufp->fullQData(oldp+750,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
    bufp->fullQData(oldp+752,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
    bufp->fullQData(oldp+754,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
    bufp->fullQData(oldp+756,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
    bufp->fullQData(oldp+758,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
    bufp->fullQData(oldp+760,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
    bufp->fullQData(oldp+762,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
    bufp->fullQData(oldp+764,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
    bufp->fullQData(oldp+766,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
    bufp->fullQData(oldp+768,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
    bufp->fullQData(oldp+770,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
    bufp->fullQData(oldp+772,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
    bufp->fullQData(oldp+774,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
    bufp->fullQData(oldp+776,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
    bufp->fullQData(oldp+778,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
    bufp->fullQData(oldp+780,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
    bufp->fullQData(oldp+782,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
    bufp->fullBit(oldp+784,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+785,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+786,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                             & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
    bufp->fullIData(oldp+787,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
    bufp->fullCData(oldp+788,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
    bufp->fullBit(oldp+789,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    bufp->fullSData(oldp+790,((vlSymsp->TOP__top.Inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+791,((7U & (vlSymsp->TOP__top.Inst 
                                     >> 0xcU))),3);
    bufp->fullQData(oldp+792,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
    bufp->fullQData(oldp+794,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
    bufp->fullQData(oldp+796,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
    bufp->fullQData(oldp+798,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
    bufp->fullBit(oldp+800,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 3U)))));
    bufp->fullBit(oldp+801,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                           >> 7U)))));
    bufp->fullBit(oldp+802,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
    bufp->fullBit(oldp+803,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
    bufp->fullBit(oldp+804,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
    bufp->fullQData(oldp+805,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
    bufp->fullBit(oldp+807,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
    bufp->fullBit(oldp+808,((0x305U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+809,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
    bufp->fullBit(oldp+810,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
    bufp->fullBit(oldp+811,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
    bufp->fullBit(oldp+812,((0x304U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+813,((0x344U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+814,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 7U)))));
    bufp->fullCData(oldp+815,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
    bufp->fullQData(oldp+816,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
    bufp->fullBit(oldp+818,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
    bufp->fullBit(oldp+819,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+820,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+821,(((0x304U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    bufp->fullBit(oldp+822,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+823,(((0x305U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    bufp->fullBit(oldp+824,(vlSelf->clk));
    bufp->fullBit(oldp+825,(vlSelf->rst));
    bufp->fullIData(oldp+826,(vlSelf->Inst),32);
    bufp->fullQData(oldp+827,(vlSelf->pc),64);
    bufp->fullQData(oldp+829,(vlSymsp->TOP__top__IntrUnit.mcase),64);
    bufp->fullCData(oldp+831,(vlSymsp->TOP__top.__PVT__Extop),3);
    bufp->fullQData(oldp+832,(vlSymsp->TOP__top.__PVT__waddr),64);
    bufp->fullBit(oldp+834,(1U));
    bufp->fullIData(oldp+835,(vlSymsp->TOP__top.__PVT__AWADDR),32);
    bufp->fullBit(oldp+836,(vlSymsp->TOP__top.__PVT__AWVALID));
    bufp->fullQData(oldp+837,(vlSymsp->TOP__top.__PVT__WDATA),64);
    bufp->fullBit(oldp+839,(vlSymsp->TOP__top.__PVT__WVALID));
    bufp->fullCData(oldp+840,(vlSymsp->TOP__top.__PVT__WSTRB),8);
    bufp->fullBit(oldp+841,(vlSymsp->TOP__top.__PVT__BREADY));
    bufp->fullIData(oldp+842,(0x40U),32);
    bufp->fullIData(oldp+843,(6U),32);
    bufp->fullIData(oldp+844,(4U),32);
    bufp->fullIData(oldp+845,(2U),32);
    bufp->fullIData(oldp+846,(1U),32);
    bufp->fullQData(oldp+847,(0ULL),64);
    bufp->fullIData(oldp+849,(0x42U),32);
    bufp->fullIData(oldp+850,(4U),32);
    bufp->fullIData(oldp+851,(3U),32);
    bufp->fullIData(oldp+852,(3U),32);
    bufp->fullIData(oldp+853,(0x10U),32);
    bufp->fullIData(oldp+854,(0x44U),32);
    bufp->fullIData(oldp+855,(0x10U),32);
    bufp->fullIData(oldp+856,(5U),32);
    bufp->fullIData(oldp+857,(0x43U),32);
    bufp->fullIData(oldp+858,(5U),32);
    bufp->fullIData(oldp+859,(7U),32);
    bufp->fullCData(oldp+860,(0U),2);
    bufp->fullIData(oldp+861,(0x1bceU),18);
    bufp->fullIData(oldp+862,(9U),32);
    bufp->fullIData(oldp+863,(2U),32);
    bufp->fullIData(oldp+864,(0xcU),32);
    bufp->fullCData(oldp+865,(0U),3);
    __Vtemp_hd6f60a5b__0[0U] = 0x37eceb9aU;
    __Vtemp_hd6f60a5b__0[1U] = 0xd46c1ac7U;
    __Vtemp_hd6f60a5b__0[2U] = 0x65d92f5bU;
    __Vtemp_hd6f60a5b__0[3U] = 0x268da6U;
    bufp->fullWData(oldp+866,(__Vtemp_hd6f60a5b__0),120);
    bufp->fullIData(oldp+870,(0xaU),32);
    bufp->fullIData(oldp+871,(0xcU),32);
    bufp->fullBit(oldp+872,(0U));
    bufp->fullCData(oldp+873,(0xe7U),8);
    bufp->fullIData(oldp+874,(8U),32);
    bufp->fullIData(oldp+875,(1U),32);
    bufp->fullSData(oldp+876,(0x35bdU),16);
    bufp->fullCData(oldp+877,(0U),8);
    bufp->fullQData(oldp+878,(0xc060343cffULL),40);
    bufp->fullCData(oldp+880,(1U),2);
    bufp->fullIData(oldp+881,(7U),32);
    bufp->fullBit(oldp+882,(vlSymsp->TOP__top.__PVT__IFU__DOT__pipeline_hold));
    bufp->fullBit(oldp+883,(vlSymsp->TOP__top.__PVT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+884,(vlSymsp->TOP__top.__PVT__IFU__DOT__id_ready));
    bufp->fullBit(oldp+885,(vlSymsp->TOP__top.__PVT__IFU__DOT__ifu_ready));
    bufp->fullBit(oldp+886,(vlSymsp->TOP__top.__PVT__IFU__DOT__ex_valid));
    bufp->fullIData(oldp+887,(vlSymsp->TOP__top.__PVT__IFU__DOT__inst),32);
    bufp->fullQData(oldp+888,(0x7ffffff8ULL),64);
    bufp->fullIData(oldp+890,(0x20U),32);
    bufp->fullIData(oldp+891,(0U),32);
    bufp->fullQData(oldp+892,(0x7ffffffcULL),64);
    bufp->fullQData(oldp+894,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+896,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullBit(oldp+897,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr_done));
    bufp->fullBit(oldp+898,(vlSymsp->TOP__top__IntrUnit.__PVT__isCSRw));
    __Vtemp_h058c0b04__0[0U] = 7U;
    __Vtemp_h058c0b04__0[1U] = 0x80000000U;
    __Vtemp_h058c0b04__0[2U] = 0x2eU;
    __Vtemp_h058c0b04__0[3U] = 0U;
    __Vtemp_h058c0b04__0[4U] = 4U;
    bufp->fullWData(oldp+899,(__Vtemp_h058c0b04__0),132);
    bufp->fullQData(oldp+904,(0xa00001800ULL),64);
    bufp->fullIData(oldp+906,(6U),32);
}
