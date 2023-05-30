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
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+824,"rst", false,-1);
    tracep->declBus(c+825,"Inst", false,-1, 31,0);
    tracep->declQuad(c+826,"pc", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+824,"rst", false,-1);
    tracep->declBus(c+233,"Inst", false,-1, 31,0);
    tracep->declQuad(c+234,"pc", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declBus(c+241,"Extop", false,-1, 2,0);
    tracep->declBit(c+242,"RegWr", false,-1);
    tracep->declBit(c+243,"ALUAsr", false,-1);
    tracep->declBus(c+244,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+245,"Imm", false,-1, 63,0);
    tracep->declQuad(c+247,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+249,"NextPC", false,-1, 63,0);
    tracep->declBus(c+251,"Branch", false,-1, 2,0);
    tracep->declQuad(c+830,"waddr", false,-1, 63,0);
    tracep->declBit(c+252,"Less", false,-1);
    tracep->declBit(c+253,"Zero", false,-1);
    tracep->declBus(c+254,"MemOP", false,-1, 2,0);
    tracep->declBus(c+255,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+256,"MemWr", false,-1);
    tracep->declQuad(c+257,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+150,"RegWdata", false,-1, 63,0);
    tracep->declBit(c+259,"isIntrPC", false,-1);
    tracep->declQuad(c+260,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+262,"IntrEn", false,-1);
    tracep->declQuad(c+152,"IntrOut", false,-1, 63,0);
    tracep->declBit(c+263,"clint_mtip", false,-1);
    tracep->declBit(c+264,"clint_we", false,-1);
    tracep->declBit(c+265,"clint_re", false,-1);
    tracep->declQuad(c+266,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+268,"ifu_arvalid", false,-1);
    tracep->declBus(c+269,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+832,"ifu_ready", false,-1);
    tracep->declBit(c+832,"ram_arready", false,-1);
    tracep->declQuad(c+270,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+272,"ram_rvalid", false,-1);
    tracep->declBus(c+273,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+833,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+834,"AWVALID", false,-1);
    tracep->declBit(c+274,"AWREADY", false,-1);
    tracep->declQuad(c+835,"WDATA", false,-1, 63,0);
    tracep->declBit(c+837,"WVALID", false,-1);
    tracep->declBit(c+275,"WREADY", false,-1);
    tracep->declBus(c+838,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+276,"BVALID", false,-1);
    tracep->declBus(c+277,"BRESP", false,-1, 1,0);
    tracep->declBit(c+839,"BREADY", false,-1);
    tracep->declBit(c+278,"is_jump", false,-1);
    tracep->declBit(c+279,"isTuncate", false,-1);
    tracep->declBit(c+280,"isSext", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBit(c+243,"ALUAsr", false,-1);
    tracep->declQuad(c+234,"PC", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+244,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+245,"Imm", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declBit(c+279,"isTuncate", false,-1);
    tracep->declBit(c+280,"isSext", false,-1);
    tracep->declQuad(c+247,"ALUres", false,-1, 63,0);
    tracep->declBit(c+252,"Less", false,-1);
    tracep->declBit(c+253,"Zero", false,-1);
    tracep->declQuad(c+281,"ALUA", false,-1, 63,0);
    tracep->declQuad(c+283,"ALUB", false,-1, 63,0);
    tracep->declBit(c+285,"US_S", false,-1);
    tracep->declBit(c+286,"Sub_Add", false,-1);
    tracep->declBit(c+285,"A_L", false,-1);
    tracep->declBit(c+287,"L_R", false,-1);
    tracep->declQuad(c+288,"adder", false,-1, 63,0);
    tracep->declBit(c+290,"Carry", false,-1);
    tracep->declBit(c+291,"Overflow", false,-1);
    tracep->declBit(c+292,"lessS", false,-1);
    tracep->declBit(c+293,"lessUS", false,-1);
    tracep->declQuad(c+294,"shift", false,-1, 63,0);
    tracep->declQuad(c+296,"XOR", false,-1, 63,0);
    tracep->declQuad(c+298,"OR", false,-1, 63,0);
    tracep->declQuad(c+300,"AND", false,-1, 63,0);
    tracep->declQuad(c+302,"MUL", false,-1, 63,0);
    tracep->declQuad(c+304,"DIV", false,-1, 63,0);
    tracep->declQuad(c+306,"REM", false,-1, 63,0);
    tracep->declQuad(c+308,"ALUout", false,-1, 63,0);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+281,"A", false,-1, 63,0);
    tracep->declQuad(c+283,"B", false,-1, 63,0);
    tracep->declBit(c+286,"Cin", false,-1);
    tracep->declQuad(c+288,"Result", false,-1, 63,0);
    tracep->declBit(c+290,"Carry", false,-1);
    tracep->declBit(c+291,"Overflow", false,-1);
    tracep->declBit(c+253,"zero", false,-1);
    tracep->declQuad(c+310,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+841,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+281,"din", false,-1, 63,0);
    tracep->declBus(c+312,"shamtin", false,-1, 5,0);
    tracep->declBit(c+285,"A_L", false,-1);
    tracep->declBit(c+287,"L_R", false,-1);
    tracep->declBit(c+279,"isTuncate", false,-1);
    tracep->declQuad(c+294,"dout", false,-1, 63,0);
    tracep->declBus(c+313,"shamt", false,-1, 5,0);
    tracep->declQuad(c+314,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+842,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+843,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+294,"out", false,-1, 63,0);
    tracep->declBus(c+316,"key", false,-1, 1,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+317,"lut", false,-1, 263,0);
    tracep->declBus(c+847,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+326+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+338+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+346,"lut_out", false,-1, 63,0);
    tracep->declBit(c+348,"hit", false,-1);
    tracep->declBus(c+848,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+849,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+843,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+283,"out", false,-1, 63,0);
    tracep->declBus(c+244,"key", false,-1, 1,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+349,"lut", false,-1, 197,0);
    tracep->declBus(c+847,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+356+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+365+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+371,"lut_out", false,-1, 63,0);
    tracep->declBit(c+373,"hit", false,-1);
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+851,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+842,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+308,"out", false,-1, 63,0);
    tracep->declBus(c+374,"key", false,-1, 3,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+375,"lut", false,-1, 1087,0);
    tracep->declBus(c+852,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+409+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+457+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+489,"lut_out", false,-1, 63,0);
    tracep->declBit(c+491,"hit", false,-1);
    tracep->declBus(c+853,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+842,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+843,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+304,"out", false,-1, 63,0);
    tracep->declBus(c+492,"key", false,-1, 1,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+493,"lut", false,-1, 263,0);
    tracep->declBus(c+847,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+502+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+514+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+522,"lut_out", false,-1, 63,0);
    tracep->declBit(c+524,"hit", false,-1);
    tracep->declBus(c+848,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+842,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+843,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+306,"out", false,-1, 63,0);
    tracep->declBus(c+492,"key", false,-1, 1,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+525,"lut", false,-1, 263,0);
    tracep->declBus(c+847,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+534+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+28+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+546+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+554,"lut_out", false,-1, 63,0);
    tracep->declBit(c+556,"hit", false,-1);
    tracep->declBus(c+848,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ContrGen ");
    tracep->declBus(c+557,"opcode", false,-1, 6,0);
    tracep->declBus(c+558,"func3", false,-1, 2,0);
    tracep->declBus(c+559,"func7", false,-1, 6,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declBus(c+241,"Extop", false,-1, 2,0);
    tracep->declBit(c+242,"RegWr", false,-1);
    tracep->declBit(c+243,"ALUAsr", false,-1);
    tracep->declBus(c+244,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+251,"Branch", false,-1, 2,0);
    tracep->declBit(c+256,"MemWr", false,-1);
    tracep->declBus(c+254,"MemOP", false,-1, 2,0);
    tracep->declBus(c+255,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+279,"isTuncate", false,-1);
    tracep->declBit(c+280,"isSext", false,-1);
    tracep->declBit(c+262,"IntrEn", false,-1);
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
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+843,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+854,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+843,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+255,"out", false,-1, 1,0);
    tracep->declBus(c+557,"key", false,-1, 6,0);
    tracep->declBus(c+855,"default_out", false,-1, 1,0);
    tracep->declBus(c+856,"lut", false,-1, 17,0);
    tracep->declBus(c+857,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+32+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+34+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+36+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+571,"lut_out", false,-1, 1,0);
    tracep->declBit(c+572,"hit", false,-1);
    tracep->declBus(c+858,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+859,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+854,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+849,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+241,"out", false,-1, 2,0);
    tracep->declBus(c+557,"key", false,-1, 6,0);
    tracep->declBus(c+860,"default_out", false,-1, 2,0);
    tracep->declArray(c+861,"lut", false,-1, 119,0);
    tracep->declBus(c+865,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+38+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+50+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+62+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+573,"lut_out", false,-1, 2,0);
    tracep->declBit(c+574,"hit", false,-1);
    tracep->declBus(c+866,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+844,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+854,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+262,"out", false,-1, 0,0);
    tracep->declBus(c+557,"key", false,-1, 6,0);
    tracep->declBus(c+867,"default_out", false,-1, 0,0);
    tracep->declBus(c+868,"lut", false,-1, 7,0);
    tracep->declBus(c+869,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+74+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+75+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+76+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+575,"lut_out", false,-1, 0,0);
    tracep->declBit(c+576,"hit", false,-1);
    tracep->declBus(c+870,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+842,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+849,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+242,"out", false,-1, 0,0);
    tracep->declBus(c+241,"key", false,-1, 2,0);
    tracep->declBus(c+867,"default_out", false,-1, 0,0);
    tracep->declBus(c+871,"lut", false,-1, 15,0);
    tracep->declBus(c+842,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+77+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+81+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+85+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+577,"lut_out", false,-1, 0,0);
    tracep->declBit(c+578,"hit", false,-1);
    tracep->declBus(c+848,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declQuad(c+247,"Addr", false,-1, 63,0);
    tracep->declBus(c+254,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+238,"DataIn", false,-1, 63,0);
    tracep->declBit(c+256,"WrEn", false,-1);
    tracep->declQuad(c+257,"DataOut", false,-1, 63,0);
    tracep->declBit(c+264,"clint_we", false,-1);
    tracep->declBit(c+265,"clint_re", false,-1);
    tracep->declBit(c+579,"clint_en", false,-1);
    tracep->declBus(c+580,"wmask", false,-1, 7,0);
    tracep->declBit(c+581,"isSign", false,-1);
    tracep->declBit(c+582,"RdEn", false,-1);
    tracep->declBus(c+583,"shift", false,-1, 5,0);
    tracep->declArray(c+584,"data", false,-1, 127,0);
    tracep->declBus(c+588,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+842,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+843,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+869,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+580,"out", false,-1, 7,0);
    tracep->declBus(c+589,"key", false,-1, 1,0);
    tracep->declBus(c+872,"default_out", false,-1, 7,0);
    tracep->declQuad(c+873,"lut", false,-1, 39,0);
    tracep->declBus(c+865,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+89+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+93+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+97+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+590,"lut_out", false,-1, 7,0);
    tracep->declBit(c+591,"hit", false,-1);
    tracep->declBus(c+848,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+842,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+843,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+257,"out", false,-1, 63,0);
    tracep->declBus(c+589,"key", false,-1, 1,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+592,"lut", false,-1, 263,0);
    tracep->declBus(c+847,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+601+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+101+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+613+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+621,"lut_out", false,-1, 63,0);
    tracep->declBit(c+623,"hit", false,-1);
    tracep->declBus(c+848,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+251,"Branch", false,-1, 2,0);
    tracep->declQuad(c+245,"imm", false,-1, 63,0);
    tracep->declQuad(c+234,"PC", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+252,"Less", false,-1);
    tracep->declBit(c+253,"Zero", false,-1);
    tracep->declQuad(c+249,"NextPC", false,-1, 63,0);
    tracep->declBit(c+278,"is_jump", false,-1);
    tracep->declBit(c+624,"PCAsrc", false,-1);
    tracep->declBit(c+625,"PCBsrc", false,-1);
    tracep->declQuad(c+626,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+628,"Bsrc", false,-1, 63,0);
    tracep->declQuad(c+630,"NextPCp", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+854,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+849,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+843,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+632,"out", false,-1, 1,0);
    tracep->declBus(c+251,"key", false,-1, 2,0);
    tracep->declBus(c+875,"default_out", false,-1, 1,0);
    tracep->declQuad(c+633,"lut", false,-1, 34,0);
    tracep->declBus(c+876,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+635+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+105+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+642+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+649,"lut_out", false,-1, 1,0);
    tracep->declBit(c+650,"hit", false,-1);
    tracep->declBus(c+877,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("jump_check ");
    tracep->declBus(c+854,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+849,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+278,"out", false,-1, 0,0);
    tracep->declBus(c+251,"key", false,-1, 2,0);
    tracep->declBus(c+867,"default_out", false,-1, 0,0);
    tracep->declBus(c+651,"lut", false,-1, 27,0);
    tracep->declBus(c+842,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+652+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+112+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+659+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+666,"lut_out", false,-1, 0,0);
    tracep->declBit(c+667,"hit", false,-1);
    tracep->declBus(c+877,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+824,"rst", false,-1);
    tracep->declBit(c+259,"isIntrPC", false,-1);
    tracep->declBit(c+278,"is_jump", false,-1);
    tracep->declQuad(c+249,"JumpPc", false,-1, 63,0);
    tracep->declQuad(c+260,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+878,"pipeline_hold", false,-1);
    tracep->declBit(c+268,"ARVALID", false,-1);
    tracep->declBus(c+269,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+832,"ARREADY", false,-1);
    tracep->declBit(c+832,"RREADY", false,-1);
    tracep->declQuad(c+270,"inst_i", false,-1, 63,0);
    tracep->declBit(c+272,"RVALID", false,-1);
    tracep->declBus(c+233,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+234,"pc_o", false,-1, 63,0);
    tracep->declBit(c+879,"ifu_valid", false,-1);
    tracep->declBit(c+880,"id_ready", false,-1);
    tracep->declBit(c+881,"ifu_ready", false,-1);
    tracep->declBit(c+882,"ex_valid", false,-1);
    tracep->declQuad(c+668,"dpc", false,-1, 63,0);
    tracep->declQuad(c+670,"NextPC", false,-1, 63,0);
    tracep->declBus(c+883,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("if_inst_reg ");
    tracep->declBus(c+884,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+885,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+824,"rst", false,-1);
    tracep->declBus(c+672,"din", false,-1, 31,0);
    tracep->declBus(c+233,"dout", false,-1, 31,0);
    tracep->declBit(c+272,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pc_reg ");
    tracep->declBus(c+840,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+886,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+824,"rst", false,-1);
    tracep->declQuad(c+670,"din", false,-1, 63,0);
    tracep->declQuad(c+234,"dout", false,-1, 63,0);
    tracep->declBit(c+832,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pre_pc_reg ");
    tracep->declBus(c+840,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+888,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+824,"rst", false,-1);
    tracep->declQuad(c+668,"din", false,-1, 63,0);
    tracep->declQuad(c+670,"dout", false,-1, 63,0);
    tracep->declBit(c+832,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ImmGen ");
    tracep->declBus(c+673,"Inst", false,-1, 31,7);
    tracep->declBus(c+241,"Extop", false,-1, 2,0);
    tracep->declQuad(c+245,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+876,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+849,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+245,"out", false,-1, 63,0);
    tracep->declBus(c+241,"key", false,-1, 2,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+674,"lut", false,-1, 334,0);
    tracep->declBus(c+890,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+685+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+119+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+700+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+710,"lut_out", false,-1, 63,0);
    tracep->declBit(c+712,"hit", false,-1);
    tracep->declBus(c+891,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("RegWsrcMux ");
    tracep->declBus(c+849,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+843,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+150,"out", false,-1, 63,0);
    tracep->declBus(c+255,"key", false,-1, 1,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+154,"lut", false,-1, 197,0);
    tracep->declBus(c+847,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+850,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+876,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+713,"rs1", false,-1, 4,0);
    tracep->declBus(c+714,"rs2", false,-1, 4,0);
    tracep->declBus(c+715,"waddr", false,-1, 4,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declQuad(c+150,"wdata", false,-1, 63,0);
    tracep->declBit(c+242,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+716+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declQuad(c+238,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+247,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+264,"we", false,-1);
    tracep->declBit(c+265,"re", false,-1);
    tracep->declBit(c+263,"clint_mtip", false,-1);
    tracep->declQuad(c+266,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+780,"mtime", false,-1, 63,0);
    tracep->declQuad(c+782,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+784,"ismtimecmp", false,-1);
    tracep->declBit(c+785,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+840,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+892,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+867,"rst", false,-1);
    tracep->declQuad(c+238,"din", false,-1, 63,0);
    tracep->declQuad(c+782,"dout", false,-1, 63,0);
    tracep->declBit(c+786,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_axi_lite_u ");
    tracep->declBus(c+884,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+840,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+869,"DSIZE", false,-1, 31,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+824,"resetn", false,-1);
    tracep->declBus(c+833,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+834,"AWVALID", false,-1);
    tracep->declBit(c+274,"AWREADY", false,-1);
    tracep->declQuad(c+835,"WDATA", false,-1, 63,0);
    tracep->declBit(c+837,"WVALID", false,-1);
    tracep->declBit(c+275,"WREADY", false,-1);
    tracep->declBus(c+838,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+276,"BVALID", false,-1);
    tracep->declBus(c+277,"BRESP", false,-1, 1,0);
    tracep->declBit(c+839,"BREADY", false,-1);
    tracep->declBus(c+269,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+268,"ARVALID", false,-1);
    tracep->declBit(c+832,"ARREADY", false,-1);
    tracep->declQuad(c+270,"RDATA", false,-1, 63,0);
    tracep->declBus(c+273,"RRESP", false,-1, 1,0);
    tracep->declBit(c+272,"RVALID", false,-1);
    tracep->declBit(c+832,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+127+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+787,"waddr", false,-1, 31,0);
    tracep->declBus(c+894,"raddr", false,-1, 31,0);
    tracep->declBus(c+788,"wstrb", false,-1, 7,0);
    tracep->declBit(c+789,"wdata_done", false,-1);
    tracep->declBit(c+895,"raddr_done", false,-1);
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
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+262,"IntrEn", false,-1);
    tracep->declBit(c+263,"clint_mtip", false,-1);
    tracep->declQuad(c+234,"pc", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+713,"zimm", false,-1, 4,0);
    tracep->declBus(c+790,"csr", false,-1, 11,0);
    tracep->declBus(c+558,"func3", false,-1, 2,0);
    tracep->declBit(c+259,"isIntrPC", false,-1);
    tracep->declQuad(c+260,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+152,"dout", false,-1, 63,0);
    tracep->declQuad(c+791,"mepc", false,-1, 63,0);
    tracep->declQuad(c+793,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+795,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+797,"mie", false,-1, 63,0);
    tracep->declQuad(c+845,"mip", false,-1, 63,0);
    tracep->declQuad(c+828,"mcase", false,-1, 63,0);
    tracep->declBit(c+896,"isCSRw", false,-1);
    tracep->declBit(c+799,"mstatus_MIE", false,-1);
    tracep->declBit(c+800,"mie_MTIE", false,-1);
    tracep->declBit(c+801,"timer_irq", false,-1);
    tracep->declBit(c+802,"irq_raise", false,-1);
    tracep->declBit(c+867,"mip_MTIP", false,-1);
    tracep->declBit(c+803,"isecall", false,-1);
    tracep->declQuad(c+804,"eNo", false,-1, 63,0);
    tracep->declBit(c+806,"ismret", false,-1);
    tracep->declBit(c+807,"ismtvec", false,-1);
    tracep->declBit(c+808,"ismepc", false,-1);
    tracep->declBit(c+809,"ismcase", false,-1);
    tracep->declBit(c+810,"ismstatus", false,-1);
    tracep->declBit(c+811,"ismie", false,-1);
    tracep->declBit(c+812,"ismip", false,-1);
    tracep->declQuad(c+179,"csrWData", false,-1, 63,0);
    tracep->declQuad(c+181,"mepcIn", false,-1, 63,0);
    tracep->declQuad(c+183,"mcaseIn", false,-1, 63,0);
    tracep->declBit(c+813,"mstatus_MPIE", false,-1);
    tracep->declQuad(c+185,"mstatusIn", false,-1, 63,0);
    tracep->pushNamePrefix("CSRwEn ");
    tracep->declBus(c+843,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+843,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+804,"out", false,-1, 63,0);
    tracep->declBus(c+814,"key", false,-1, 1,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+897,"lut", false,-1, 131,0);
    tracep->declBus(c+847,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+132+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+138+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+140+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+815,"lut_out", false,-1, 63,0);
    tracep->declBit(c+817,"hit", false,-1);
    tracep->declBus(c+858,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcaseReg ");
    tracep->declBus(c+840,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+845,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+867,"rst", false,-1);
    tracep->declQuad(c+183,"din", false,-1, 63,0);
    tracep->declQuad(c+828,"dout", false,-1, 63,0);
    tracep->declBit(c+818,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcReg ");
    tracep->declBus(c+840,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+845,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+867,"rst", false,-1);
    tracep->declQuad(c+181,"din", false,-1, 63,0);
    tracep->declQuad(c+791,"dout", false,-1, 63,0);
    tracep->declBit(c+819,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mieReg ");
    tracep->declBus(c+840,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+845,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+867,"rst", false,-1);
    tracep->declQuad(c+179,"din", false,-1, 63,0);
    tracep->declQuad(c+797,"dout", false,-1, 63,0);
    tracep->declBit(c+820,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatusReg ");
    tracep->declBus(c+840,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+902,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+867,"rst", false,-1);
    tracep->declQuad(c+185,"din", false,-1, 63,0);
    tracep->declQuad(c+795,"dout", false,-1, 63,0);
    tracep->declBit(c+821,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvecReg ");
    tracep->declBus(c+840,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+845,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+823,"clk", false,-1);
    tracep->declBit(c+867,"rst", false,-1);
    tracep->declQuad(c+179,"din", false,-1, 63,0);
    tracep->declQuad(c+793,"dout", false,-1, 63,0);
    tracep->declBit(c+822,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scrDataSrc ");
    tracep->declBus(c+841,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+849,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+840,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+844,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+179,"out", false,-1, 63,0);
    tracep->declBus(c+558,"key", false,-1, 2,0);
    tracep->declQuad(c+845,"default_out", false,-1, 63,0);
    tracep->declArray(c+187,"lut", false,-1, 401,0);
    tracep->declBus(c+890,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+904,"i", false,-1, 31,0);
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
    VlWide<9>/*287:0*/ __Vtemp_h9b72447f__0;
    VlWide<9>/*287:0*/ __Vtemp_h13fbf3f0__0;
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
    bufp->fullCData(oldp+112,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[0]),3);
    bufp->fullCData(oldp+113,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[1]),3);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[2]),3);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[3]),3);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[4]),3);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[5]),3);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__key_list[6]),3);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+120,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+121,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+122,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullCData(oldp+123,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
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
    bufp->fullCData(oldp+240,(((IData)(vlSymsp->TOP__top.__VdfgTmp_hd4f657a4__0)
                                ? 0U : (IData)(vlSymsp->TOP__top.__VdfgTmp_h1f2041f1__0))),5);
    bufp->fullCData(oldp+241,(vlSymsp->TOP__top.__PVT__Extop),3);
    bufp->fullBit(oldp+242,(vlSymsp->TOP__top.__PVT__RegWr));
    bufp->fullBit(oldp+243,((((0x67U != (0x7fU & vlSymsp->TOP__top.Inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__Extop)))))));
    bufp->fullCData(oldp+244,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
    bufp->fullQData(oldp+245,(vlSymsp->TOP__top.__PVT__Imm),64);
    bufp->fullQData(oldp+247,(vlSymsp->TOP__top.__PVT__ALUres),64);
    bufp->fullQData(oldp+249,(((0ULL == vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp)
                                ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp)),64);
    bufp->fullCData(oldp+251,(vlSymsp->TOP__top.__PVT__Branch),3);
    bufp->fullBit(oldp+252,(vlSymsp->TOP__top.__PVT__Less));
    bufp->fullBit(oldp+253,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
    bufp->fullCData(oldp+254,(vlSymsp->TOP__top.__PVT__MemOP),3);
    bufp->fullCData(oldp+255,(vlSymsp->TOP__top.__PVT__RegSrc),2);
    bufp->fullBit(oldp+256,(vlSymsp->TOP__top.__PVT__MemWr));
    bufp->fullQData(oldp+257,(vlSymsp->TOP__top.__PVT__MemOut),64);
    bufp->fullBit(oldp+259,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                              & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullQData(oldp+260,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                    ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                    : vlSymsp->TOP__top.pc))),64);
    bufp->fullBit(oldp+262,(vlSymsp->TOP__top.__PVT__IntrEn));
    bufp->fullBit(oldp+263,((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp)));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__top.__PVT__clint_we));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__top.__PVT__clint_re));
    bufp->fullQData(oldp+266,(vlSymsp->TOP__top.__PVT__clint_dout),64);
    bufp->fullBit(oldp+268,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
    bufp->fullIData(oldp+269,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
    bufp->fullQData(oldp+270,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+273,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+274,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+277,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullBit(oldp+278,(vlSymsp->TOP__top.__PVT__is_jump));
    bufp->fullBit(oldp+279,(vlSymsp->TOP__top.__PVT__isTuncate));
    bufp->fullBit(oldp+280,(vlSymsp->TOP__top.__PVT__isSext));
    bufp->fullQData(oldp+281,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
    bufp->fullQData(oldp+283,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
    bufp->fullBit(oldp+285,(vlSymsp->TOP__top.__PVT__ALU__DOT__US_S));
    bufp->fullBit(oldp+286,(vlSymsp->TOP__top.__PVT__ALU__DOT__Sub_Add));
    bufp->fullBit(oldp+287,((1U == (IData)(vlSymsp->TOP__top.ALU__DOT____VdfgTmp_he7b65dc9__0))));
    bufp->fullQData(oldp+288,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
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
    bufp->fullBit(oldp+290,((1U & __Vtemp_haee3d321__0[2U])));
    bufp->fullBit(oldp+291,((((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                >> 0x3fU)))) 
                             & ((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                               >> 0x3fU))) 
                                != (1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__top.__PVT__ALU__DOT__lessS));
    bufp->fullBit(oldp+293,(vlSymsp->TOP__top.__PVT__ALU__DOT__lessUS));
    bufp->fullQData(oldp+294,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
    bufp->fullQData(oldp+296,(vlSymsp->TOP__top.__PVT__ALU__DOT__XOR),64);
    bufp->fullQData(oldp+298,(vlSymsp->TOP__top.__PVT__ALU__DOT__OR),64);
    bufp->fullQData(oldp+300,(vlSymsp->TOP__top.__PVT__ALU__DOT__AND),64);
    bufp->fullQData(oldp+302,(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL),64);
    bufp->fullQData(oldp+304,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
    bufp->fullQData(oldp+306,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
    bufp->fullQData(oldp+308,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
    bufp->fullQData(oldp+310,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
    bufp->fullCData(oldp+312,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
    bufp->fullCData(oldp+313,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
    bufp->fullQData(oldp+314,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__sra),64);
    bufp->fullCData(oldp+316,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
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
    bufp->fullWData(oldp+317,(__Vtemp_heddb9346__0),264);
    bufp->fullWData(oldp+326,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+329,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+332,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+335,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+338,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+340,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+342,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+344,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
    bufp->fullQData(oldp+346,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
    bufp->fullBit(oldp+348,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
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
    bufp->fullWData(oldp+349,(__Vtemp_ha9f09867__0),198);
    bufp->fullWData(oldp+356,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+359,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+362,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+365,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+367,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+369,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+371,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
    bufp->fullBit(oldp+373,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
    bufp->fullCData(oldp+374,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
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
    bufp->fullWData(oldp+375,(__Vtemp_h77e10e19__0),1088);
    bufp->fullWData(oldp+409,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+412,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+415,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+418,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+421,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+424,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+427,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+430,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+433,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+436,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+439,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
    bufp->fullWData(oldp+442,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[11]),68);
    bufp->fullWData(oldp+445,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[12]),68);
    bufp->fullWData(oldp+448,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[13]),68);
    bufp->fullWData(oldp+451,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[14]),68);
    bufp->fullWData(oldp+454,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[15]),68);
    bufp->fullQData(oldp+457,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
    bufp->fullQData(oldp+459,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
    bufp->fullQData(oldp+461,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
    bufp->fullQData(oldp+463,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
    bufp->fullQData(oldp+465,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
    bufp->fullQData(oldp+467,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
    bufp->fullQData(oldp+469,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
    bufp->fullQData(oldp+471,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
    bufp->fullQData(oldp+473,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
    bufp->fullQData(oldp+475,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
    bufp->fullQData(oldp+477,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
    bufp->fullQData(oldp+479,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[11]),64);
    bufp->fullQData(oldp+481,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[12]),64);
    bufp->fullQData(oldp+483,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[13]),64);
    bufp->fullQData(oldp+485,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[14]),64);
    bufp->fullQData(oldp+487,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[15]),64);
    bufp->fullQData(oldp+489,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
    bufp->fullBit(oldp+491,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
    bufp->fullCData(oldp+492,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
    __Vtemp_h9b72447f__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h8507bb64__0;
    __Vtemp_h9b72447f__0[1U] = 0U;
    __Vtemp_h9b72447f__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h850e38ae__0 
                                      << 2U));
    __Vtemp_h9b72447f__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h850e38ae__0 
                                >> 0x1eU);
    __Vtemp_h9b72447f__0[4U] = 0x14U;
    __Vtemp_h9b72447f__0[5U] = 0U;
    __Vtemp_h9b72447f__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                << 6U);
    __Vtemp_h9b72447f__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h9b72447f__0[8U] = (0x80U | ((IData)((VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+493,(__Vtemp_h9b72447f__0),264);
    bufp->fullWData(oldp+502,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+505,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+508,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+511,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+514,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
    bufp->fullQData(oldp+516,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
    bufp->fullQData(oldp+518,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
    bufp->fullQData(oldp+520,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
    bufp->fullQData(oldp+522,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
    bufp->fullBit(oldp+524,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
    __Vtemp_h13fbf3f0__0[0U] = vlSymsp->TOP__top.__VdfgTmp_h858486fa__0;
    __Vtemp_h13fbf3f0__0[1U] = 0U;
    __Vtemp_h13fbf3f0__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_h8588955e__0 
                                      << 2U));
    __Vtemp_h13fbf3f0__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_h8588955e__0 
                                >> 0x1eU);
    __Vtemp_h13fbf3f0__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                      << 4U));
    __Vtemp_h13fbf3f0__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA)) 
                                 >> 0x1cU) | ((IData)(
                                                      (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h13fbf3f0__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 << 6U) | ((IData)(
                                                   (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA) 
                                                    >> 0x20U)) 
                                           >> 0x1cU));
    __Vtemp_h13fbf3f0__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h13fbf3f0__0[8U] = (0x80U | ((IData)((VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+525,(__Vtemp_h13fbf3f0__0),264);
    bufp->fullWData(oldp+534,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+537,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+540,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+543,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+546,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
    bufp->fullQData(oldp+548,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
    bufp->fullQData(oldp+550,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
    bufp->fullQData(oldp+552,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
    bufp->fullQData(oldp+554,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
    bufp->fullBit(oldp+556,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
    bufp->fullCData(oldp+557,((0x7fU & vlSymsp->TOP__top.Inst)),7);
    bufp->fullCData(oldp+558,((7U & (vlSymsp->TOP__top.Inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+559,((vlSymsp->TOP__top.Inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+560,((4U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
    bufp->fullCData(oldp+561,((5U & (vlSymsp->TOP__top.Inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+562,((6U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
    bufp->fullBit(oldp+563,((0x67U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+564,((((0x33U == (0x7fU & vlSymsp->TOP__top.Inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.Inst))) 
                             & (vlSymsp->TOP__top.Inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+565,(((3U == (7U & (vlSymsp->TOP__top.Inst 
                                             >> 0xcU)))
                                ? 0xaU : ((((vlSymsp->TOP__top.Inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x7020U 
                                                & vlSymsp->TOP__top.Inst))) 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP__top.Inst 
                                                 >> 0xcU))))),5);
    bufp->fullCData(oldp+566,((0x10U | ((8U & (vlSymsp->TOP__top.Inst 
                                               >> 9U)) 
                                        | (7U & (vlSymsp->TOP__top.Inst 
                                                 >> 0xcU))))),5);
    bufp->fullBit(oldp+567,((0x37U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+568,((0x17U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+569,((0x23U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullBit(oldp+570,((3U == (0x7fU & vlSymsp->TOP__top.Inst))));
    bufp->fullCData(oldp+571,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+572,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+573,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+574,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+575,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+576,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+577,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+578,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
    bufp->fullBit(oldp+579,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
    bufp->fullCData(oldp+580,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+581,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                   >> 2U))));
    bufp->fullBit(oldp+582,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
    bufp->fullCData(oldp+583,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+584,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+588,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
    bufp->fullCData(oldp+589,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
    bufp->fullCData(oldp+590,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+591,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
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
    bufp->fullWData(oldp+592,(__Vtemp_h8ffe19e9__0),264);
    bufp->fullWData(oldp+601,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+604,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+607,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+610,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+613,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+615,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+617,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+619,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+621,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+623,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
    bufp->fullBit(oldp+624,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+625,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+626,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+628,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.pc
                                : vlSymsp->TOP__top.__PVT__R_rs1)),64);
    bufp->fullQData(oldp+630,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__NextPCp),64);
    bufp->fullCData(oldp+632,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+633,((QData)((IData)((0x898537eU 
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
    bufp->fullCData(oldp+635,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+636,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+637,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+638,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+639,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+640,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+641,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+642,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+643,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+644,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+645,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+646,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+647,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+648,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+649,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+650,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+651,((0x248adfU | ((0x1000000U 
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
    bufp->fullCData(oldp+652,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+653,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+654,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+655,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+656,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+657,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+658,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
    bufp->fullBit(oldp+659,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
    bufp->fullBit(oldp+660,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
    bufp->fullBit(oldp+661,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
    bufp->fullBit(oldp+662,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
    bufp->fullBit(oldp+663,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
    bufp->fullBit(oldp+664,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
    bufp->fullBit(oldp+665,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
    bufp->fullBit(oldp+666,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__lut_out));
    bufp->fullBit(oldp+667,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__jump_check__DOT__hit));
    bufp->fullQData(oldp+668,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
    bufp->fullQData(oldp+670,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
    bufp->fullIData(oldp+672,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                           >> 0x20U)))),32);
    bufp->fullIData(oldp+673,((vlSymsp->TOP__top.Inst 
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
    bufp->fullWData(oldp+674,(__Vtemp_h75f56fbe__0),335);
    bufp->fullWData(oldp+685,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+688,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+691,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+694,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+697,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+700,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+702,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+704,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+706,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+708,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+710,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+712,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
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
    bufp->fullQData(oldp+791,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
    bufp->fullQData(oldp+793,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
    bufp->fullQData(oldp+795,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
    bufp->fullQData(oldp+797,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
    bufp->fullBit(oldp+799,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 3U)))));
    bufp->fullBit(oldp+800,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                           >> 7U)))));
    bufp->fullBit(oldp+801,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
    bufp->fullBit(oldp+802,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
    bufp->fullBit(oldp+803,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
    bufp->fullQData(oldp+804,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
    bufp->fullBit(oldp+806,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
    bufp->fullBit(oldp+807,((0x305U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+808,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
    bufp->fullBit(oldp+809,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
    bufp->fullBit(oldp+810,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
    bufp->fullBit(oldp+811,((0x304U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+812,((0x344U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+813,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 7U)))));
    bufp->fullCData(oldp+814,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
    bufp->fullQData(oldp+815,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
    bufp->fullBit(oldp+817,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
    bufp->fullBit(oldp+818,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+819,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+820,(((0x304U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    bufp->fullBit(oldp+821,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                              & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+822,(((0x305U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
    bufp->fullBit(oldp+823,(vlSelf->clk));
    bufp->fullBit(oldp+824,(vlSelf->rst));
    bufp->fullIData(oldp+825,(vlSelf->Inst),32);
    bufp->fullQData(oldp+826,(vlSelf->pc),64);
    bufp->fullQData(oldp+828,(vlSymsp->TOP__top__IntrUnit.mcase),64);
    bufp->fullQData(oldp+830,(vlSymsp->TOP__top.__PVT__waddr),64);
    bufp->fullBit(oldp+832,(1U));
    bufp->fullIData(oldp+833,(vlSymsp->TOP__top.__PVT__AWADDR),32);
    bufp->fullBit(oldp+834,(vlSymsp->TOP__top.__PVT__AWVALID));
    bufp->fullQData(oldp+835,(vlSymsp->TOP__top.__PVT__WDATA),64);
    bufp->fullBit(oldp+837,(vlSymsp->TOP__top.__PVT__WVALID));
    bufp->fullCData(oldp+838,(vlSymsp->TOP__top.__PVT__WSTRB),8);
    bufp->fullBit(oldp+839,(vlSymsp->TOP__top.__PVT__BREADY));
    bufp->fullIData(oldp+840,(0x40U),32);
    bufp->fullIData(oldp+841,(6U),32);
    bufp->fullIData(oldp+842,(4U),32);
    bufp->fullIData(oldp+843,(2U),32);
    bufp->fullIData(oldp+844,(1U),32);
    bufp->fullQData(oldp+845,(0ULL),64);
    bufp->fullIData(oldp+847,(0x42U),32);
    bufp->fullIData(oldp+848,(4U),32);
    bufp->fullIData(oldp+849,(3U),32);
    bufp->fullIData(oldp+850,(3U),32);
    bufp->fullIData(oldp+851,(0x10U),32);
    bufp->fullIData(oldp+852,(0x44U),32);
    bufp->fullIData(oldp+853,(0x10U),32);
    bufp->fullIData(oldp+854,(7U),32);
    bufp->fullCData(oldp+855,(0U),2);
    bufp->fullIData(oldp+856,(0x1bceU),18);
    bufp->fullIData(oldp+857,(9U),32);
    bufp->fullIData(oldp+858,(2U),32);
    bufp->fullIData(oldp+859,(0xcU),32);
    bufp->fullCData(oldp+860,(0U),3);
    __Vtemp_hd6f60a5b__0[0U] = 0x37eceb9aU;
    __Vtemp_hd6f60a5b__0[1U] = 0xd46c1ac7U;
    __Vtemp_hd6f60a5b__0[2U] = 0x65d92f5bU;
    __Vtemp_hd6f60a5b__0[3U] = 0x268da6U;
    bufp->fullWData(oldp+861,(__Vtemp_hd6f60a5b__0),120);
    bufp->fullIData(oldp+865,(0xaU),32);
    bufp->fullIData(oldp+866,(0xcU),32);
    bufp->fullBit(oldp+867,(0U));
    bufp->fullCData(oldp+868,(0xe7U),8);
    bufp->fullIData(oldp+869,(8U),32);
    bufp->fullIData(oldp+870,(1U),32);
    bufp->fullSData(oldp+871,(0x35bdU),16);
    bufp->fullCData(oldp+872,(0U),8);
    bufp->fullQData(oldp+873,(0xc060343cffULL),40);
    bufp->fullCData(oldp+875,(1U),2);
    bufp->fullIData(oldp+876,(5U),32);
    bufp->fullIData(oldp+877,(7U),32);
    bufp->fullBit(oldp+878,(vlSymsp->TOP__top.__PVT__IFU__DOT__pipeline_hold));
    bufp->fullBit(oldp+879,(vlSymsp->TOP__top.__PVT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+880,(vlSymsp->TOP__top.__PVT__IFU__DOT__id_ready));
    bufp->fullBit(oldp+881,(vlSymsp->TOP__top.__PVT__IFU__DOT__ifu_ready));
    bufp->fullBit(oldp+882,(vlSymsp->TOP__top.__PVT__IFU__DOT__ex_valid));
    bufp->fullIData(oldp+883,(vlSymsp->TOP__top.__PVT__IFU__DOT__inst),32);
    bufp->fullIData(oldp+884,(0x20U),32);
    bufp->fullIData(oldp+885,(0U),32);
    bufp->fullQData(oldp+886,(0x7ffffffcULL),64);
    bufp->fullQData(oldp+888,(0x80000000ULL),64);
    bufp->fullIData(oldp+890,(0x43U),32);
    bufp->fullIData(oldp+891,(5U),32);
    bufp->fullQData(oldp+892,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+894,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullBit(oldp+895,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr_done));
    bufp->fullBit(oldp+896,(vlSymsp->TOP__top__IntrUnit.__PVT__isCSRw));
    __Vtemp_h058c0b04__0[0U] = 7U;
    __Vtemp_h058c0b04__0[1U] = 0x80000000U;
    __Vtemp_h058c0b04__0[2U] = 0x2eU;
    __Vtemp_h058c0b04__0[3U] = 0U;
    __Vtemp_h058c0b04__0[4U] = 4U;
    bufp->fullWData(oldp+897,(__Vtemp_h058c0b04__0),132);
    bufp->fullQData(oldp+902,(0xa00001800ULL),64);
    bufp->fullIData(oldp+904,(6U),32);
}
