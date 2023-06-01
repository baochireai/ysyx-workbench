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
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+861,"Inst", false,-1, 31,0);
    tracep->declQuad(c+862,"pc", false,-1, 63,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+233,"Inst", false,-1, 31,0);
    tracep->declQuad(c+234,"pc", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declBus(c+866,"Extop", false,-1, 2,0);
    tracep->declBit(c+241,"RegWr", false,-1);
    tracep->declBit(c+242,"ALUAsr", false,-1);
    tracep->declBus(c+243,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+244,"Imm", false,-1, 63,0);
    tracep->declQuad(c+246,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+248,"NextPC", false,-1, 63,0);
    tracep->declBus(c+250,"Branch", false,-1, 2,0);
    tracep->declQuad(c+867,"waddr", false,-1, 63,0);
    tracep->declBit(c+869,"Less", false,-1);
    tracep->declBit(c+870,"Zero", false,-1);
    tracep->declBus(c+251,"MemOP", false,-1, 2,0);
    tracep->declBus(c+252,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+253,"MemWr", false,-1);
    tracep->declQuad(c+254,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+150,"RegWdata", false,-1, 63,0);
    tracep->declBit(c+256,"isIntrPC", false,-1);
    tracep->declQuad(c+257,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+259,"IntrEn", false,-1);
    tracep->declQuad(c+152,"IntrOut", false,-1, 63,0);
    tracep->declBit(c+260,"clint_mtip", false,-1);
    tracep->declBit(c+261,"clint_we", false,-1);
    tracep->declBit(c+262,"clint_re", false,-1);
    tracep->declQuad(c+263,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+265,"ifu_arvalid", false,-1);
    tracep->declBus(c+266,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+871,"ifu_ready", false,-1);
    tracep->declBit(c+871,"ram_arready", false,-1);
    tracep->declQuad(c+267,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+269,"ram_rvalid", false,-1);
    tracep->declBus(c+270,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+872,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+873,"AWVALID", false,-1);
    tracep->declBit(c+271,"AWREADY", false,-1);
    tracep->declQuad(c+874,"WDATA", false,-1, 63,0);
    tracep->declBit(c+876,"WVALID", false,-1);
    tracep->declBit(c+272,"WREADY", false,-1);
    tracep->declBus(c+877,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+273,"BVALID", false,-1);
    tracep->declBus(c+274,"BRESP", false,-1, 1,0);
    tracep->declBit(c+878,"BREADY", false,-1);
    tracep->declBit(c+275,"is_jump", false,-1);
    tracep->declQuad(c+276,"id_pc", false,-1, 63,0);
    tracep->declBus(c+278,"id_inst", false,-1, 31,0);
    tracep->declQuad(c+279,"ex_pc", false,-1, 63,0);
    tracep->declBus(c+281,"ex_inst", false,-1, 31,0);
    tracep->declBus(c+282,"rs1", false,-1, 4,0);
    tracep->declBus(c+283,"rs2", false,-1, 4,0);
    tracep->declBit(c+284,"isTuncate", false,-1);
    tracep->declBit(c+285,"isSext", false,-1);
    tracep->declQuad(c+286,"ex_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+288,"ex_Rrs2", false,-1, 63,0);
    tracep->declQuad(c+290,"mem_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+292,"mem_Rrs2", false,-1, 63,0);
    tracep->declBus(c+294,"mem_MemOP", false,-1, 2,0);
    tracep->declBit(c+295,"mem_MemWr", false,-1);
    tracep->declBit(c+296,"mem_IntrEn", false,-1);
    tracep->declBus(c+297,"BW_RegSrc", false,-1, 1,0);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declQuad(c+246,"Addr", false,-1, 63,0);
    tracep->declBus(c+294,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+292,"DataIn", false,-1, 63,0);
    tracep->declBit(c+295,"WrEn", false,-1);
    tracep->declQuad(c+254,"DataOut", false,-1, 63,0);
    tracep->declBit(c+261,"clint_we", false,-1);
    tracep->declBit(c+262,"clint_re", false,-1);
    tracep->declBit(c+298,"clint_en", false,-1);
    tracep->declBus(c+299,"wmask", false,-1, 7,0);
    tracep->declBit(c+300,"isSign", false,-1);
    tracep->declBit(c+301,"RdEn", false,-1);
    tracep->declBus(c+302,"shift", false,-1, 5,0);
    tracep->declArray(c+303,"data", false,-1, 127,0);
    tracep->declBus(c+307,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+879,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+880,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+881,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+299,"out", false,-1, 7,0);
    tracep->declBus(c+308,"key", false,-1, 1,0);
    tracep->declBus(c+883,"default_out", false,-1, 7,0);
    tracep->declQuad(c+884,"lut", false,-1, 39,0);
    tracep->declBus(c+886,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+9+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+309,"lut_out", false,-1, 7,0);
    tracep->declBit(c+310,"hit", false,-1);
    tracep->declBus(c+887,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+879,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+880,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+254,"out", false,-1, 63,0);
    tracep->declBus(c+308,"key", false,-1, 1,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+311,"lut", false,-1, 263,0);
    tracep->declBus(c+891,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+320+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+332+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+340,"lut_out", false,-1, 63,0);
    tracep->declBit(c+342,"hit", false,-1);
    tracep->declBus(c+887,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+281,"exu_inst", false,-1, 31,0);
    tracep->declQuad(c+279,"exu_pc", false,-1, 63,0);
    tracep->declBit(c+242,"ALUAsr", false,-1);
    tracep->declBus(c+243,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declBit(c+284,"isTuncate", false,-1);
    tracep->declBit(c+285,"isSext", false,-1);
    tracep->declBus(c+251,"MemOP_i", false,-1, 2,0);
    tracep->declBit(c+253,"MemWr_i", false,-1);
    tracep->declBit(c+259,"IntrEn", false,-1);
    tracep->declBus(c+250,"Branch", false,-1, 2,0);
    tracep->declBus(c+252,"RegSrc", false,-1, 1,0);
    tracep->declQuad(c+286,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+288,"R_rs2", false,-1, 63,0);
    tracep->declQuad(c+244,"Imm", false,-1, 63,0);
    tracep->declQuad(c+246,"wb_ALUres", false,-1, 63,0);
    tracep->declQuad(c+292,"R_rs2_o", false,-1, 63,0);
    tracep->declQuad(c+290,"R_rs1_o", false,-1, 63,0);
    tracep->declBus(c+294,"MemOP_o", false,-1, 2,0);
    tracep->declBit(c+295,"MemWr_o", false,-1);
    tracep->declBit(c+296,"IntrEn_o", false,-1);
    tracep->declQuad(c+248,"NextPC", false,-1, 63,0);
    tracep->declBit(c+275,"is_jump", false,-1);
    tracep->declBus(c+297,"RegSrc_o", false,-1, 1,0);
    tracep->declBus(c+233,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+234,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+343,"ALUres", false,-1, 63,0);
    tracep->declBit(c+345,"Less", false,-1);
    tracep->declBit(c+346,"Zero", false,-1);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+250,"Branch", false,-1, 2,0);
    tracep->declQuad(c+244,"imm", false,-1, 63,0);
    tracep->declQuad(c+279,"PC", false,-1, 63,0);
    tracep->declQuad(c+286,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+345,"Less", false,-1);
    tracep->declBit(c+346,"Zero", false,-1);
    tracep->declQuad(c+248,"NextPC", false,-1, 63,0);
    tracep->declBit(c+275,"is_jump", false,-1);
    tracep->declBit(c+347,"PCAsrc", false,-1);
    tracep->declBit(c+348,"PCBsrc", false,-1);
    tracep->declQuad(c+349,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+351,"Bsrc", false,-1, 63,0);
    tracep->declQuad(c+353,"NextPCp", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+892,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+893,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+880,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+355,"out", false,-1, 1,0);
    tracep->declBus(c+250,"key", false,-1, 2,0);
    tracep->declBus(c+894,"default_out", false,-1, 1,0);
    tracep->declQuad(c+356,"lut", false,-1, 34,0);
    tracep->declBus(c+895,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+358+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+365+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+372,"lut_out", false,-1, 1,0);
    tracep->declBit(c+373,"hit", false,-1);
    tracep->declBus(c+896,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("jump_check ");
    tracep->declBus(c+892,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+893,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+275,"out", false,-1, 0,0);
    tracep->declBus(c+250,"key", false,-1, 2,0);
    tracep->declBus(c+897,"default_out", false,-1, 0,0);
    tracep->declBus(c+374,"lut", false,-1, 27,0);
    tracep->declBus(c+879,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+375+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+382+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+389,"lut_out", false,-1, 0,0);
    tracep->declBit(c+390,"hit", false,-1);
    tracep->declBus(c+896,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBit(c+242,"ALUAsr", false,-1);
    tracep->declQuad(c+279,"PC", false,-1, 63,0);
    tracep->declQuad(c+286,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+243,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+244,"Imm", false,-1, 63,0);
    tracep->declQuad(c+288,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declBit(c+284,"isTuncate", false,-1);
    tracep->declBit(c+285,"isSext", false,-1);
    tracep->declQuad(c+343,"ALUres", false,-1, 63,0);
    tracep->declBit(c+345,"Less", false,-1);
    tracep->declBit(c+346,"Zero", false,-1);
    tracep->declQuad(c+391,"ALUA", false,-1, 63,0);
    tracep->declQuad(c+393,"ALUB", false,-1, 63,0);
    tracep->declBit(c+395,"US_S", false,-1);
    tracep->declBit(c+396,"Sub_Add", false,-1);
    tracep->declBit(c+395,"A_L", false,-1);
    tracep->declBit(c+397,"L_R", false,-1);
    tracep->declQuad(c+398,"adder", false,-1, 63,0);
    tracep->declBit(c+400,"Carry", false,-1);
    tracep->declBit(c+401,"Overflow", false,-1);
    tracep->declBit(c+402,"lessS", false,-1);
    tracep->declBit(c+403,"lessUS", false,-1);
    tracep->declQuad(c+404,"shift", false,-1, 63,0);
    tracep->declQuad(c+406,"XOR", false,-1, 63,0);
    tracep->declQuad(c+408,"OR", false,-1, 63,0);
    tracep->declQuad(c+410,"AND", false,-1, 63,0);
    tracep->declQuad(c+412,"MUL", false,-1, 63,0);
    tracep->declQuad(c+414,"DIV", false,-1, 63,0);
    tracep->declQuad(c+416,"REM", false,-1, 63,0);
    tracep->declQuad(c+418,"ALUout", false,-1, 63,0);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+391,"A", false,-1, 63,0);
    tracep->declQuad(c+393,"B", false,-1, 63,0);
    tracep->declBit(c+396,"Cin", false,-1);
    tracep->declQuad(c+398,"Result", false,-1, 63,0);
    tracep->declBit(c+400,"Carry", false,-1);
    tracep->declBit(c+401,"Overflow", false,-1);
    tracep->declBit(c+346,"zero", false,-1);
    tracep->declQuad(c+420,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+898,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+391,"din", false,-1, 63,0);
    tracep->declBus(c+422,"shamtin", false,-1, 5,0);
    tracep->declBit(c+395,"A_L", false,-1);
    tracep->declBit(c+397,"L_R", false,-1);
    tracep->declBit(c+284,"isTuncate", false,-1);
    tracep->declQuad(c+404,"dout", false,-1, 63,0);
    tracep->declBus(c+423,"shamt", false,-1, 5,0);
    tracep->declQuad(c+424,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+879,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+880,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+404,"out", false,-1, 63,0);
    tracep->declBus(c+426,"key", false,-1, 1,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+427,"lut", false,-1, 263,0);
    tracep->declBus(c+891,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+436+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+31+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+448+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+456,"lut_out", false,-1, 63,0);
    tracep->declBit(c+458,"hit", false,-1);
    tracep->declBus(c+887,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+893,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+880,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+393,"out", false,-1, 63,0);
    tracep->declBus(c+243,"key", false,-1, 1,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+459,"lut", false,-1, 197,0);
    tracep->declBus(c+891,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+466+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+35+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+475+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+481,"lut_out", false,-1, 63,0);
    tracep->declBit(c+483,"hit", false,-1);
    tracep->declBus(c+899,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+900,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+879,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+418,"out", false,-1, 63,0);
    tracep->declBus(c+484,"key", false,-1, 3,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+485,"lut", false,-1, 1087,0);
    tracep->declBus(c+901,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+519+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+38+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+567+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+599,"lut_out", false,-1, 63,0);
    tracep->declBit(c+601,"hit", false,-1);
    tracep->declBus(c+902,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+879,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+880,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+414,"out", false,-1, 63,0);
    tracep->declBus(c+602,"key", false,-1, 1,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+603,"lut", false,-1, 263,0);
    tracep->declBus(c+891,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+612+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+54+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+624+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+632,"lut_out", false,-1, 63,0);
    tracep->declBit(c+634,"hit", false,-1);
    tracep->declBus(c+887,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+879,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+880,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+416,"out", false,-1, 63,0);
    tracep->declBus(c+602,"key", false,-1, 1,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+635,"lut", false,-1, 263,0);
    tracep->declBus(c+891,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+644+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+58+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+656+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+664,"lut_out", false,-1, 63,0);
    tracep->declBit(c+666,"hit", false,-1);
    tracep->declBus(c+887,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem_Inst_reg ");
    tracep->declBus(c+903,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+281,"din", false,-1, 31,0);
    tracep->declBus(c+233,"dout", false,-1, 31,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_pc_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+279,"din", false,-1, 63,0);
    tracep->declQuad(c+234,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_ALUres_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+343,"din", false,-1, 63,0);
    tracep->declQuad(c+246,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+882,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+259,"din", false,-1, 0,0);
    tracep->declBus(c+296,"dout", false,-1, 0,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemOP_reg ");
    tracep->declBus(c+893,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+251,"din", false,-1, 2,0);
    tracep->declBus(c+294,"dout", false,-1, 2,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemWr_reg ");
    tracep->declBus(c+882,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+253,"din", false,-1, 0,0);
    tracep->declBus(c+295,"dout", false,-1, 0,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs1_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+286,"din", false,-1, 63,0);
    tracep->declQuad(c+290,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs2_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+288,"din", false,-1, 63,0);
    tracep->declQuad(c+292,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_RegSrc_reg ");
    tracep->declBus(c+880,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+252,"din", false,-1, 1,0);
    tracep->declBus(c+297,"dout", false,-1, 1,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+278,"id_inst", false,-1, 31,0);
    tracep->declQuad(c+276,"id_pc", false,-1, 63,0);
    tracep->declQuad(c+236,"R_rs1_i", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2_i", false,-1, 63,0);
    tracep->declBus(c+240,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+244,"Imm", false,-1, 63,0);
    tracep->declBit(c+242,"ALUAsr", false,-1);
    tracep->declBus(c+243,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+281,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+279,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+286,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+288,"R_rs2_o", false,-1, 63,0);
    tracep->declBus(c+250,"Branch", false,-1, 2,0);
    tracep->declBit(c+253,"MemWr", false,-1);
    tracep->declBus(c+251,"MemOP", false,-1, 2,0);
    tracep->declBus(c+252,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+284,"isTuncate", false,-1);
    tracep->declBit(c+285,"isSext", false,-1);
    tracep->declBit(c+259,"IntrEn", false,-1);
    tracep->declBit(c+241,"RegWr", false,-1);
    tracep->declBus(c+282,"rs1", false,-1, 4,0);
    tracep->declBus(c+283,"rs2", false,-1, 4,0);
    tracep->declBit(c+905,"ifu_valid", false,-1);
    tracep->declBit(c+871,"idu_ready", false,-1);
    tracep->declBit(c+871,"idu_valid", false,-1);
    tracep->declBit(c+906,"ifu_ready", false,-1);
    tracep->declBus(c+667,"ALUct_d", false,-1, 4,0);
    tracep->declQuad(c+668,"Imm_d", false,-1, 63,0);
    tracep->declBit(c+670,"ALUAsr_d", false,-1);
    tracep->declBus(c+671,"ALUBsr_d", false,-1, 1,0);
    tracep->declBit(c+672,"RegWr_d", false,-1);
    tracep->declBus(c+673,"Branch_d", false,-1, 2,0);
    tracep->declBit(c+674,"MemWr_d", false,-1);
    tracep->declBus(c+675,"MemOP_d", false,-1, 2,0);
    tracep->declBus(c+676,"RegSrc_d", false,-1, 1,0);
    tracep->declBit(c+677,"isTuncate_d", false,-1);
    tracep->declBit(c+678,"isSext_d", false,-1);
    tracep->declBit(c+679,"IntrEn_d", false,-1);
    tracep->pushNamePrefix("ContrGenU ");
    tracep->declBus(c+278,"id_inst", false,-1, 31,0);
    tracep->declBus(c+667,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+668,"Imm", false,-1, 63,0);
    tracep->declBit(c+670,"ALUAsr", false,-1);
    tracep->declBus(c+671,"ALUBsr", false,-1, 1,0);
    tracep->declBit(c+672,"RegWr", false,-1);
    tracep->declBus(c+673,"Branch", false,-1, 2,0);
    tracep->declBit(c+674,"MemWr", false,-1);
    tracep->declBus(c+675,"MemOP", false,-1, 2,0);
    tracep->declBus(c+676,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+677,"isTuncate", false,-1);
    tracep->declBit(c+678,"isSext", false,-1);
    tracep->declBit(c+679,"IntrEn", false,-1);
    tracep->declBus(c+680,"Extop", false,-1, 2,0);
    tracep->declBus(c+681,"opcode", false,-1, 6,0);
    tracep->declBus(c+682,"func3", false,-1, 2,0);
    tracep->declBus(c+683,"func7", false,-1, 6,0);
    tracep->declBit(c+684,"isconditionalJump", false,-1);
    tracep->declBus(c+685,"BranchOpt", false,-1, 2,0);
    tracep->declBit(c+686,"isJal", false,-1);
    tracep->declBit(c+687,"isJalr", false,-1);
    tracep->declBit(c+688,"isMul", false,-1);
    tracep->declBus(c+689,"IntALUct", false,-1, 4,0);
    tracep->declBus(c+690,"MulALUct", false,-1, 4,0);
    tracep->declBit(c+691,"islui", false,-1);
    tracep->declBit(c+692,"isauipc", false,-1);
    tracep->declBit(c+693,"isMemW", false,-1);
    tracep->declBit(c+694,"isMemR", false,-1);
    tracep->pushNamePrefix("ImmGenU ");
    tracep->declBus(c+695,"Inst", false,-1, 31,7);
    tracep->declBus(c+680,"Extop", false,-1, 2,0);
    tracep->declQuad(c+668,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+895,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+893,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+668,"out", false,-1, 63,0);
    tracep->declBus(c+680,"key", false,-1, 2,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+696,"lut", false,-1, 334,0);
    tracep->declBus(c+907,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+707+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+62+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+722+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+732,"lut_out", false,-1, 63,0);
    tracep->declBit(c+734,"hit", false,-1);
    tracep->declBus(c+908,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+880,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+892,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+880,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+676,"out", false,-1, 1,0);
    tracep->declBus(c+681,"key", false,-1, 6,0);
    tracep->declBus(c+909,"default_out", false,-1, 1,0);
    tracep->declBus(c+910,"lut", false,-1, 17,0);
    tracep->declBus(c+911,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+67+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+69+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+71+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+735,"lut_out", false,-1, 1,0);
    tracep->declBit(c+736,"hit", false,-1);
    tracep->declBus(c+912,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+913,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+892,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+893,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+680,"out", false,-1, 2,0);
    tracep->declBus(c+681,"key", false,-1, 6,0);
    tracep->declBus(c+914,"default_out", false,-1, 2,0);
    tracep->declArray(c+915,"lut", false,-1, 119,0);
    tracep->declBus(c+886,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+73+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+85+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+97+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+737,"lut_out", false,-1, 2,0);
    tracep->declBit(c+738,"hit", false,-1);
    tracep->declBus(c+919,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+882,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+892,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+679,"out", false,-1, 0,0);
    tracep->declBus(c+681,"key", false,-1, 6,0);
    tracep->declBus(c+897,"default_out", false,-1, 0,0);
    tracep->declBus(c+920,"lut", false,-1, 7,0);
    tracep->declBus(c+881,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+109+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+110+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+111+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+739,"lut_out", false,-1, 0,0);
    tracep->declBit(c+740,"hit", false,-1);
    tracep->declBus(c+921,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+879,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+893,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+672,"out", false,-1, 0,0);
    tracep->declBus(c+680,"key", false,-1, 2,0);
    tracep->declBus(c+897,"default_out", false,-1, 0,0);
    tracep->declBus(c+922,"lut", false,-1, 15,0);
    tracep->declBus(c+879,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+112+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+116+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+120+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+741,"lut_out", false,-1, 0,0);
    tracep->declBit(c+742,"hit", false,-1);
    tracep->declBus(c+887,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_ALUAsr_reg ");
    tracep->declBus(c+882,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+670,"din", false,-1, 0,0);
    tracep->declBus(c+242,"dout", false,-1, 0,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUBsr_reg ");
    tracep->declBus(c+880,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+671,"din", false,-1, 1,0);
    tracep->declBus(c+243,"dout", false,-1, 1,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUct_reg ");
    tracep->declBus(c+895,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+923,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+667,"din", false,-1, 4,0);
    tracep->declBus(c+240,"dout", false,-1, 4,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Branch_reg ");
    tracep->declBus(c+893,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+924,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+673,"din", false,-1, 2,0);
    tracep->declBus(c+250,"dout", false,-1, 2,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Imm_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+668,"din", false,-1, 63,0);
    tracep->declQuad(c+244,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Inst_reg ");
    tracep->declBus(c+903,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+278,"din", false,-1, 31,0);
    tracep->declBus(c+281,"dout", false,-1, 31,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_IntrEn_reg ");
    tracep->declBus(c+882,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+679,"din", false,-1, 0,0);
    tracep->declBus(c+259,"dout", false,-1, 0,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemOP_reg ");
    tracep->declBus(c+893,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+675,"din", false,-1, 2,0);
    tracep->declBus(c+251,"dout", false,-1, 2,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemWr_reg ");
    tracep->declBus(c+882,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+674,"din", false,-1, 0,0);
    tracep->declBus(c+253,"dout", false,-1, 0,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegSrc_reg ");
    tracep->declBus(c+880,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+676,"din", false,-1, 1,0);
    tracep->declBus(c+252,"dout", false,-1, 1,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegWr_reg ");
    tracep->declBus(c+882,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+925,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+672,"din", false,-1, 0,0);
    tracep->declBus(c+241,"dout", false,-1, 0,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs1_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+236,"din", false,-1, 63,0);
    tracep->declQuad(c+286,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs2_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+238,"din", false,-1, 63,0);
    tracep->declQuad(c+288,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isSext_reg ");
    tracep->declBus(c+882,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+678,"din", false,-1, 0,0);
    tracep->declBus(c+285,"dout", false,-1, 0,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isTuncate_reg ");
    tracep->declBus(c+882,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+925,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+677,"din", false,-1, 0,0);
    tracep->declBus(c+284,"dout", false,-1, 0,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_pc_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+276,"din", false,-1, 63,0);
    tracep->declQuad(c+279,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBit(c+256,"isIntrPC", false,-1);
    tracep->declBit(c+275,"is_jump", false,-1);
    tracep->declQuad(c+248,"JumpPc", false,-1, 63,0);
    tracep->declQuad(c+257,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+926,"pipeline_hold", false,-1);
    tracep->declBit(c+265,"ARVALID", false,-1);
    tracep->declBus(c+266,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+871,"ARREADY", false,-1);
    tracep->declBit(c+871,"RREADY", false,-1);
    tracep->declQuad(c+267,"inst_i", false,-1, 63,0);
    tracep->declBit(c+269,"RVALID", false,-1);
    tracep->declBus(c+278,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+276,"pc_o", false,-1, 63,0);
    tracep->declBit(c+927,"ifu_valid", false,-1);
    tracep->declBit(c+928,"id_ready", false,-1);
    tracep->declBit(c+929,"ifu_ready", false,-1);
    tracep->declBit(c+930,"ex_valid", false,-1);
    tracep->declQuad(c+743,"dpc", false,-1, 63,0);
    tracep->declQuad(c+745,"NextPC", false,-1, 63,0);
    tracep->declBus(c+931,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("id_pc_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+932,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+745,"din", false,-1, 63,0);
    tracep->declQuad(c+276,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_inst_reg ");
    tracep->declBus(c+903,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+904,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declBus(c+747,"din", false,-1, 31,0);
    tracep->declBus(c+278,"dout", false,-1, 31,0);
    tracep->declBit(c+269,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pre_pc_reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+934,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"rst", false,-1);
    tracep->declQuad(c+743,"din", false,-1, 63,0);
    tracep->declQuad(c+745,"dout", false,-1, 63,0);
    tracep->declBit(c+871,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegWsrcMux ");
    tracep->declBus(c+893,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+880,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+150,"out", false,-1, 63,0);
    tracep->declBus(c+297,"key", false,-1, 1,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+154,"lut", false,-1, 197,0);
    tracep->declBus(c+891,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+899,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+895,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+282,"rs1", false,-1, 4,0);
    tracep->declBus(c+283,"rs2", false,-1, 4,0);
    tracep->declBus(c+748,"waddr", false,-1, 4,0);
    tracep->declQuad(c+236,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+238,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declQuad(c+150,"wdata", false,-1, 63,0);
    tracep->declBit(c+241,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+749+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+813,"isw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declQuad(c+292,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+246,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+261,"we", false,-1);
    tracep->declBit(c+262,"re", false,-1);
    tracep->declBit(c+260,"clint_mtip", false,-1);
    tracep->declQuad(c+263,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+814,"mtime", false,-1, 63,0);
    tracep->declQuad(c+816,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+818,"ismtimecmp", false,-1);
    tracep->declBit(c+819,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+936,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+897,"rst", false,-1);
    tracep->declQuad(c+292,"din", false,-1, 63,0);
    tracep->declQuad(c+816,"dout", false,-1, 63,0);
    tracep->declBit(c+820,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_axi_lite_u ");
    tracep->declBus(c+903,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+888,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+881,"DSIZE", false,-1, 31,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+860,"resetn", false,-1);
    tracep->declBus(c+872,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+873,"AWVALID", false,-1);
    tracep->declBit(c+271,"AWREADY", false,-1);
    tracep->declQuad(c+874,"WDATA", false,-1, 63,0);
    tracep->declBit(c+876,"WVALID", false,-1);
    tracep->declBit(c+272,"WREADY", false,-1);
    tracep->declBus(c+877,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+273,"BVALID", false,-1);
    tracep->declBus(c+274,"BRESP", false,-1, 1,0);
    tracep->declBit(c+878,"BREADY", false,-1);
    tracep->declBus(c+266,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+265,"ARVALID", false,-1);
    tracep->declBit(c+871,"ARREADY", false,-1);
    tracep->declQuad(c+267,"RDATA", false,-1, 63,0);
    tracep->declBus(c+270,"RRESP", false,-1, 1,0);
    tracep->declBit(c+269,"RVALID", false,-1);
    tracep->declBit(c+871,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+127+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+821,"waddr", false,-1, 31,0);
    tracep->declBus(c+938,"raddr", false,-1, 31,0);
    tracep->declBus(c+822,"wstrb", false,-1, 7,0);
    tracep->declBit(c+823,"wdata_done", false,-1);
    tracep->declBit(c+939,"raddr_done", false,-1);
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
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+296,"IntrEn", false,-1);
    tracep->declBit(c+260,"clint_mtip", false,-1);
    tracep->declQuad(c+234,"pc", false,-1, 63,0);
    tracep->declQuad(c+290,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+824,"zimm", false,-1, 4,0);
    tracep->declBus(c+825,"csr", false,-1, 11,0);
    tracep->declBus(c+826,"func3", false,-1, 2,0);
    tracep->declBit(c+256,"isIntrPC", false,-1);
    tracep->declQuad(c+257,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+152,"dout", false,-1, 63,0);
    tracep->declQuad(c+827,"mepc", false,-1, 63,0);
    tracep->declQuad(c+829,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+831,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+833,"mie", false,-1, 63,0);
    tracep->declQuad(c+889,"mip", false,-1, 63,0);
    tracep->declQuad(c+864,"mcase", false,-1, 63,0);
    tracep->declBit(c+940,"isCSRw", false,-1);
    tracep->declBit(c+835,"mstatus_MIE", false,-1);
    tracep->declBit(c+836,"mie_MTIE", false,-1);
    tracep->declBit(c+837,"timer_irq", false,-1);
    tracep->declBit(c+838,"irq_raise", false,-1);
    tracep->declBit(c+897,"mip_MTIP", false,-1);
    tracep->declBit(c+839,"isecall", false,-1);
    tracep->declQuad(c+840,"eNo", false,-1, 63,0);
    tracep->declBit(c+842,"ismret", false,-1);
    tracep->declBit(c+843,"ismtvec", false,-1);
    tracep->declBit(c+844,"ismepc", false,-1);
    tracep->declBit(c+845,"ismcase", false,-1);
    tracep->declBit(c+846,"ismstatus", false,-1);
    tracep->declBit(c+847,"ismie", false,-1);
    tracep->declBit(c+848,"ismip", false,-1);
    tracep->declQuad(c+179,"csrWData", false,-1, 63,0);
    tracep->declQuad(c+181,"mepcIn", false,-1, 63,0);
    tracep->declQuad(c+183,"mcaseIn", false,-1, 63,0);
    tracep->declBit(c+849,"mstatus_MPIE", false,-1);
    tracep->declQuad(c+185,"mstatusIn", false,-1, 63,0);
    tracep->pushNamePrefix("CSRwEn ");
    tracep->declBus(c+880,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+880,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+840,"out", false,-1, 63,0);
    tracep->declBus(c+850,"key", false,-1, 1,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+941,"lut", false,-1, 131,0);
    tracep->declBus(c+891,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+132+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+138+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+140+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+851,"lut_out", false,-1, 63,0);
    tracep->declBit(c+853,"hit", false,-1);
    tracep->declBus(c+912,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcaseReg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+889,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+897,"rst", false,-1);
    tracep->declQuad(c+183,"din", false,-1, 63,0);
    tracep->declQuad(c+864,"dout", false,-1, 63,0);
    tracep->declBit(c+854,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcReg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+889,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+897,"rst", false,-1);
    tracep->declQuad(c+181,"din", false,-1, 63,0);
    tracep->declQuad(c+827,"dout", false,-1, 63,0);
    tracep->declBit(c+855,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mieReg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+889,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+897,"rst", false,-1);
    tracep->declQuad(c+179,"din", false,-1, 63,0);
    tracep->declQuad(c+833,"dout", false,-1, 63,0);
    tracep->declBit(c+856,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatusReg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+946,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+897,"rst", false,-1);
    tracep->declQuad(c+185,"din", false,-1, 63,0);
    tracep->declQuad(c+831,"dout", false,-1, 63,0);
    tracep->declBit(c+857,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvecReg ");
    tracep->declBus(c+888,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+889,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+859,"clk", false,-1);
    tracep->declBit(c+897,"rst", false,-1);
    tracep->declQuad(c+179,"din", false,-1, 63,0);
    tracep->declQuad(c+829,"dout", false,-1, 63,0);
    tracep->declBit(c+858,"wen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scrDataSrc ");
    tracep->declBus(c+898,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+893,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+888,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+882,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+179,"out", false,-1, 63,0);
    tracep->declBus(c+826,"key", false,-1, 2,0);
    tracep->declQuad(c+889,"default_out", false,-1, 63,0);
    tracep->declArray(c+187,"lut", false,-1, 401,0);
    tracep->declBus(c+907,"PAIR_LEN", false,-1, 31,0);
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
    tracep->declBus(c+948,"i", false,-1, 31,0);
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
    VlWide<13>/*415:0*/ __Vtemp_hea9901dc__0;
    VlWide<9>/*287:0*/ __Vtemp_h84a4ae12__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f2e9b02__0;
    VlWide<3>/*95:0*/ __Vtemp_h7583f5cb__0;
    VlWide<3>/*95:0*/ __Vtemp_hc27bab0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b84e3f2__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd5810e3__0;
    VlWide<9>/*287:0*/ __Vtemp_hb9b196fc__0;
    VlWide<7>/*223:0*/ __Vtemp_h727024d8__0;
    VlWide<34>/*1087:0*/ __Vtemp_h9798c001__0;
    VlWide<9>/*287:0*/ __Vtemp_h65cc6484__0;
    VlWide<9>/*287:0*/ __Vtemp_hd8501971__0;
    VlWide<11>/*351:0*/ __Vtemp_hf0d68bd5__0;
    VlWide<4>/*127:0*/ __Vtemp_hd6f60a5b__0;
    VlWide<5>/*159:0*/ __Vtemp_h058c0b04__0;
    // Body
    bufp->fullSData(oldp+1,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+2,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+3,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+4,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
    bufp->fullCData(oldp+5,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
    bufp->fullCData(oldp+6,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
    bufp->fullCData(oldp+8,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
    bufp->fullCData(oldp+9,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
    bufp->fullCData(oldp+12,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
    bufp->fullCData(oldp+13,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
    bufp->fullCData(oldp+16,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
    bufp->fullCData(oldp+17,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
    bufp->fullCData(oldp+19,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
    bufp->fullCData(oldp+21,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
    bufp->fullCData(oldp+22,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
    bufp->fullCData(oldp+23,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[0]),3);
    bufp->fullCData(oldp+25,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[1]),3);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[2]),3);
    bufp->fullCData(oldp+27,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[3]),3);
    bufp->fullCData(oldp+28,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[4]),3);
    bufp->fullCData(oldp+29,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[5]),3);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__key_list[6]),3);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
    bufp->fullCData(oldp+32,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
    bufp->fullCData(oldp+33,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
    bufp->fullCData(oldp+34,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[0]),2);
    bufp->fullCData(oldp+36,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[1]),2);
    bufp->fullCData(oldp+37,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__key_list[2]),2);
    bufp->fullCData(oldp+38,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[0]),4);
    bufp->fullCData(oldp+39,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[1]),4);
    bufp->fullCData(oldp+40,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[2]),4);
    bufp->fullCData(oldp+41,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[3]),4);
    bufp->fullCData(oldp+42,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[4]),4);
    bufp->fullCData(oldp+43,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[5]),4);
    bufp->fullCData(oldp+44,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[6]),4);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[7]),4);
    bufp->fullCData(oldp+46,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[8]),4);
    bufp->fullCData(oldp+47,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[9]),4);
    bufp->fullCData(oldp+48,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[10]),4);
    bufp->fullCData(oldp+49,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[11]),4);
    bufp->fullCData(oldp+50,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[12]),4);
    bufp->fullCData(oldp+51,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[13]),4);
    bufp->fullCData(oldp+52,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[14]),4);
    bufp->fullCData(oldp+53,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__key_list[15]),4);
    bufp->fullCData(oldp+54,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[0]),2);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[1]),2);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[2]),2);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__key_list[3]),2);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[0]),2);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[1]),2);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[2]),2);
    bufp->fullCData(oldp+61,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__key_list[3]),2);
    bufp->fullCData(oldp+62,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+65,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullCData(oldp+66,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__key_list[4]),3);
    bufp->fullSData(oldp+67,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+68,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__pair_list[1]),9);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[0]),7);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__key_list[1]),7);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[0]),2);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__data_list[1]),2);
    bufp->fullSData(oldp+73,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+74,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+75,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+76,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+77,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+78,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+79,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+80,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+81,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[8]),10);
    bufp->fullSData(oldp+82,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[9]),10);
    bufp->fullSData(oldp+83,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[10]),10);
    bufp->fullSData(oldp+84,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__pair_list[11]),10);
    bufp->fullCData(oldp+85,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[0]),7);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[1]),7);
    bufp->fullCData(oldp+87,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[2]),7);
    bufp->fullCData(oldp+88,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[3]),7);
    bufp->fullCData(oldp+89,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[4]),7);
    bufp->fullCData(oldp+90,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[5]),7);
    bufp->fullCData(oldp+91,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[6]),7);
    bufp->fullCData(oldp+92,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[7]),7);
    bufp->fullCData(oldp+93,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[8]),7);
    bufp->fullCData(oldp+94,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[9]),7);
    bufp->fullCData(oldp+95,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[10]),7);
    bufp->fullCData(oldp+96,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__key_list[11]),7);
    bufp->fullCData(oldp+97,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[0]),3);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[1]),3);
    bufp->fullCData(oldp+99,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[2]),3);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[3]),3);
    bufp->fullCData(oldp+101,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[4]),3);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[5]),3);
    bufp->fullCData(oldp+103,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[6]),3);
    bufp->fullCData(oldp+104,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[7]),3);
    bufp->fullCData(oldp+105,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[8]),3);
    bufp->fullCData(oldp+106,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[9]),3);
    bufp->fullCData(oldp+107,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[10]),3);
    bufp->fullCData(oldp+108,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__data_list[11]),3);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+110,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__key_list[0]),7);
    bufp->fullBit(oldp+111,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__data_list[0]));
    bufp->fullCData(oldp+112,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+113,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+114,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+115,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+116,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[0]),3);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[1]),3);
    bufp->fullCData(oldp+118,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[2]),3);
    bufp->fullCData(oldp+119,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__key_list[3]),3);
    bufp->fullBit(oldp+120,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[0]));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[1]));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[2]));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__data_list[3]));
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
    __Vtemp_hea9901dc__0[0U] = (IData)(((~ (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__top.Inst 
                                                               >> 0xfU))))) 
                                        & vlSymsp->TOP__top__IntrUnit.__PVT__dout));
    __Vtemp_hea9901dc__0[1U] = (IData)((((~ (QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__top.Inst 
                                                                >> 0xfU))))) 
                                         & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                        >> 0x20U));
    __Vtemp_hea9901dc__0[2U] = (7U | ((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__top.Inst 
                                                                     >> 0xfU)))))) 
                                      << 3U));
    __Vtemp_hea9901dc__0[3U] = (((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
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
    __Vtemp_hea9901dc__0[4U] = (0x30U | (((IData)((
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
    __Vtemp_hea9901dc__0[5U] = (((IData)(((0xffffffffffffffe0ULL 
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
    __Vtemp_hea9901dc__0[6U] = (0x140U | (((IData)(
                                                   ((~ vlSymsp->TOP__top.__PVT__mem_Rrs1) 
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
    __Vtemp_hea9901dc__0[7U] = (((IData)(((~ vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                          & vlSymsp->TOP__top__IntrUnit.__PVT__dout)) 
                                 >> 0x17U) | ((IData)(
                                                      (((~ vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                        & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_hea9901dc__0[8U] = (0x600U | (((IData)(
                                                   (vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                    | vlSymsp->TOP__top.__PVT__mem_Rrs1)) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (((~ vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                       & vlSymsp->TOP__top__IntrUnit.__PVT__dout) 
                                                      >> 0x20U)) 
                                             >> 0x17U)));
    __Vtemp_hea9901dc__0[9U] = (((IData)((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                          | vlSymsp->TOP__top.__PVT__mem_Rrs1)) 
                                 >> 0x14U) | ((IData)(
                                                      ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                        | vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_hea9901dc__0[0xaU] = (0x2000U | (((IData)(vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                              << 0xfU) 
                                             | ((IData)(
                                                        ((vlSymsp->TOP__top__IntrUnit.__PVT__dout 
                                                          | vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                                         >> 0x20U)) 
                                                >> 0x14U)));
    __Vtemp_hea9901dc__0[0xbU] = (((IData)(vlSymsp->TOP__top.__PVT__mem_Rrs1) 
                                   >> 0x11U) | ((IData)(
                                                        (vlSymsp->TOP__top.__PVT__mem_Rrs1 
                                                         >> 0x20U)) 
                                                << 0xfU));
    __Vtemp_hea9901dc__0[0xcU] = (0x8000U | ((IData)(
                                                     (vlSymsp->TOP__top.__PVT__mem_Rrs1 
                                                      >> 0x20U)) 
                                             >> 0x11U));
    bufp->fullWData(oldp+187,(__Vtemp_hea9901dc__0),402);
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
    bufp->fullQData(oldp+236,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf
                              [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+238,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf
                              [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0x14U))]),64);
    bufp->fullCData(oldp+240,(vlSymsp->TOP__top.__PVT__ALUct),5);
    bufp->fullBit(oldp+241,(vlSymsp->TOP__top.__PVT__RegWr));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__top.__PVT__ALUAsr));
    bufp->fullCData(oldp+243,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
    bufp->fullQData(oldp+244,(vlSymsp->TOP__top.__PVT__Imm),64);
    bufp->fullQData(oldp+246,(vlSymsp->TOP__top.__PVT__ALUres),64);
    bufp->fullQData(oldp+248,(((0ULL == vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)),64);
    bufp->fullCData(oldp+250,(vlSymsp->TOP__top.__PVT__Branch),3);
    bufp->fullCData(oldp+251,(vlSymsp->TOP__top.__PVT__MemOP),3);
    bufp->fullCData(oldp+252,(vlSymsp->TOP__top.__PVT__RegSrc),2);
    bufp->fullBit(oldp+253,(vlSymsp->TOP__top.__PVT__MemWr));
    bufp->fullQData(oldp+254,(vlSymsp->TOP__top.__PVT__MemOut),64);
    bufp->fullBit(oldp+256,((((IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn) 
                              & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullQData(oldp+257,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                    ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                    : vlSymsp->TOP__top.pc))),64);
    bufp->fullBit(oldp+259,(vlSymsp->TOP__top.__PVT__IntrEn));
    bufp->fullBit(oldp+260,((vlSymsp->TOP__top.__PVT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp)));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__top.__PVT__clint_we));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__top.__PVT__clint_re));
    bufp->fullQData(oldp+263,(vlSymsp->TOP__top.__PVT__clint_dout),64);
    bufp->fullBit(oldp+265,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
    bufp->fullIData(oldp+266,(vlSymsp->TOP__top.__PVT__ifu_raddr),32);
    bufp->fullQData(oldp+267,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+269,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+270,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+271,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+274,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullBit(oldp+275,(vlSymsp->TOP__top.__PVT__is_jump));
    bufp->fullQData(oldp+276,(vlSymsp->TOP__top.__PVT__id_pc),64);
    bufp->fullIData(oldp+278,(vlSymsp->TOP__top.__PVT__id_inst),32);
    bufp->fullQData(oldp+279,(vlSymsp->TOP__top.__PVT__ex_pc),64);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__top.__PVT__ex_inst),32);
    bufp->fullCData(oldp+282,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+283,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+284,(vlSymsp->TOP__top.__PVT__isTuncate));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__top.__PVT__isSext));
    bufp->fullQData(oldp+286,(vlSymsp->TOP__top.__PVT__ex_Rrs1),64);
    bufp->fullQData(oldp+288,(vlSymsp->TOP__top.__PVT__ex_Rrs2),64);
    bufp->fullQData(oldp+290,(vlSymsp->TOP__top.__PVT__mem_Rrs1),64);
    bufp->fullQData(oldp+292,(vlSymsp->TOP__top.__PVT__mem_Rrs2),64);
    bufp->fullCData(oldp+294,(vlSymsp->TOP__top.__PVT__mem_MemOP),3);
    bufp->fullBit(oldp+295,(vlSymsp->TOP__top.__PVT__mem_MemWr));
    bufp->fullBit(oldp+296,(vlSymsp->TOP__top.__PVT__mem_IntrEn));
    bufp->fullCData(oldp+297,(vlSymsp->TOP__top.__PVT__BW_RegSrc),2);
    bufp->fullBit(oldp+298,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
    bufp->fullCData(oldp+299,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__top.__PVT__mem_MemOP) 
                                   >> 2U))));
    bufp->fullBit(oldp+301,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
    bufp->fullCData(oldp+302,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+303,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+307,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
    bufp->fullCData(oldp+308,((3U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))),2);
    bufp->fullCData(oldp+309,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+310,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
    __Vtemp_h84a4ae12__0[0U] = (IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
    __Vtemp_h84a4ae12__0[1U] = (IData)((((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
    __Vtemp_h84a4ae12__0[2U] = (3U | ((IData)(((4U 
                                                & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
    __Vtemp_h84a4ae12__0[3U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
                                                         & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
    __Vtemp_h84a4ae12__0[4U] = (8U | (((IData)(((4U 
                                                 & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
                                                            & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
    __Vtemp_h84a4ae12__0[5U] = (((IData)(((4U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
                                                         & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
    __Vtemp_h84a4ae12__0[6U] = (0x10U | (((IData)((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U])))) 
                                          << 6U) | 
                                         ((IData)((
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))
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
    __Vtemp_h84a4ae12__0[7U] = (((IData)((((QData)((IData)(
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
    __Vtemp_h84a4ae12__0[8U] = ((IData)(((((QData)((IData)(
                                                           vlSymsp->TOP__top.__PVT__DataMem__DOT__data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__top.__PVT__DataMem__DOT__data[0U]))) 
                                         >> 0x20U)) 
                                >> 0x1aU);
    bufp->fullWData(oldp+311,(__Vtemp_h84a4ae12__0),264);
    bufp->fullWData(oldp+320,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+323,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+326,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+329,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+332,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+334,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+336,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+338,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+340,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+342,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
    bufp->fullQData(oldp+343,(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
                                ? ((IData)(vlSymsp->TOP__top.__PVT__isSext)
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)))
                                    : (QData)((IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)))
                                : vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout)),64);
    bufp->fullBit(oldp+345,(vlSymsp->TOP__top.__PVT__EXU__DOT__Less));
    bufp->fullBit(oldp+346,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))))));
    bufp->fullBit(oldp+347,((1U & ((IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+348,((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+349,(((2U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+351,(((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__ex_pc
                                : vlSymsp->TOP__top.__PVT__ex_Rrs1)),64);
    bufp->fullQData(oldp+353,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp),64);
    bufp->fullCData(oldp+355,(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+356,((QData)((IData)((0x898537eU 
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
    bufp->fullCData(oldp+358,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+359,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+360,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+361,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+362,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+363,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+364,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+365,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+366,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+367,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+368,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+369,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+370,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+371,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+372,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+373,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+374,((0x248adfU | ((0x1000000U 
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
    bufp->fullCData(oldp+375,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+376,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+377,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+378,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+379,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+380,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+381,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
    bufp->fullBit(oldp+382,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
    bufp->fullBit(oldp+383,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
    bufp->fullBit(oldp+384,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
    bufp->fullBit(oldp+385,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
    bufp->fullBit(oldp+386,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
    bufp->fullBit(oldp+387,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
    bufp->fullBit(oldp+388,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
    bufp->fullBit(oldp+389,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
    bufp->fullBit(oldp+390,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit));
    bufp->fullQData(oldp+391,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA),64);
    bufp->fullQData(oldp+393,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB),64);
    bufp->fullBit(oldp+395,((1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                   >> 3U))));
    bufp->fullBit(oldp+396,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add));
    bufp->fullBit(oldp+397,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__ALUct)))));
    bufp->fullQData(oldp+398,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder),64);
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
    bufp->fullBit(oldp+400,((1U & __Vtemp_hdd5810e3__0[2U])));
    bufp->fullBit(oldp+401,((((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                >> 0x3fU)))) 
                             & ((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                               >> 0x3fU))) 
                                != (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+402,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessS));
    bufp->fullBit(oldp+403,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessUS));
    bufp->fullQData(oldp+404,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift),64);
    bufp->fullQData(oldp+406,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR),64);
    bufp->fullQData(oldp+408,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR),64);
    bufp->fullQData(oldp+410,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND),64);
    bufp->fullQData(oldp+412,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL),64);
    bufp->fullQData(oldp+414,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV),64);
    bufp->fullQData(oldp+416,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM),64);
    bufp->fullQData(oldp+418,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout),64);
    bufp->fullQData(oldp+420,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin),64);
    bufp->fullCData(oldp+422,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB))),6);
    bufp->fullCData(oldp+423,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt),6);
    bufp->fullQData(oldp+424,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra),64);
    bufp->fullCData(oldp+426,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
    __Vtemp_hb9b196fc__0[0U] = (IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
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
    __Vtemp_hb9b196fc__0[1U] = (IData)((((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
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
    __Vtemp_hb9b196fc__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                      << 2U));
    __Vtemp_hb9b196fc__0[3U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_hb9b196fc__0[4U] = (0xcU | (((IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
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
    __Vtemp_hb9b196fc__0[5U] = (((IData)(((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
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
                                                      (((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
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
    __Vtemp_hb9b196fc__0[6U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 << 6U) | ((IData)(
                                                   (((IData)(vlSymsp->TOP__top.__PVT__isTuncate)
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
    __Vtemp_hb9b196fc__0[7U] = (((IData)(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0) 
                                 >> 0x1aU) | ((IData)(
                                                      (vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hb9b196fc__0[8U] = (0x40U | ((IData)((vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____VdfgTmp_h6b945586__0 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+427,(__Vtemp_hb9b196fc__0),264);
    bufp->fullWData(oldp+436,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+439,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+442,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+445,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+448,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+450,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+452,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+454,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
    bufp->fullQData(oldp+456,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
    bufp->fullBit(oldp+458,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
    __Vtemp_h727024d8__0[0U] = 4U;
    __Vtemp_h727024d8__0[1U] = 0U;
    __Vtemp_h727024d8__0[2U] = (2U | ((IData)(vlSymsp->TOP__top.__PVT__ex_Rrs2) 
                                      << 2U));
    __Vtemp_h727024d8__0[3U] = (((IData)(vlSymsp->TOP__top.__PVT__ex_Rrs2) 
                                 >> 0x1eU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__ex_Rrs2 
                                                       >> 0x20U)) 
                                              << 2U));
    __Vtemp_h727024d8__0[4U] = (4U | (((IData)(vlSymsp->TOP__top.__PVT__Imm) 
                                       << 4U) | ((IData)(
                                                         (vlSymsp->TOP__top.__PVT__ex_Rrs2 
                                                          >> 0x20U)) 
                                                 >> 0x1eU)));
    __Vtemp_h727024d8__0[5U] = (((IData)(vlSymsp->TOP__top.__PVT__Imm) 
                                 >> 0x1cU) | ((IData)(
                                                      (vlSymsp->TOP__top.__PVT__Imm 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_h727024d8__0[6U] = ((IData)((vlSymsp->TOP__top.__PVT__Imm 
                                         >> 0x20U)) 
                                >> 0x1cU);
    bufp->fullWData(oldp+459,(__Vtemp_h727024d8__0),198);
    bufp->fullWData(oldp+466,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+469,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+472,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+475,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+477,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+479,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+481,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out),64);
    bufp->fullBit(oldp+483,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit));
    bufp->fullCData(oldp+484,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key),4);
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
    bufp->fullWData(oldp+485,(__Vtemp_h9798c001__0),1088);
    bufp->fullWData(oldp+519,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+522,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+525,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+528,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+531,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+534,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+537,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+540,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+543,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+546,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+549,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[10]),68);
    bufp->fullWData(oldp+552,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[11]),68);
    bufp->fullWData(oldp+555,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[12]),68);
    bufp->fullWData(oldp+558,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[13]),68);
    bufp->fullWData(oldp+561,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[14]),68);
    bufp->fullWData(oldp+564,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[15]),68);
    bufp->fullQData(oldp+567,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0]),64);
    bufp->fullQData(oldp+569,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1]),64);
    bufp->fullQData(oldp+571,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2]),64);
    bufp->fullQData(oldp+573,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3]),64);
    bufp->fullQData(oldp+575,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4]),64);
    bufp->fullQData(oldp+577,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5]),64);
    bufp->fullQData(oldp+579,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6]),64);
    bufp->fullQData(oldp+581,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7]),64);
    bufp->fullQData(oldp+583,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8]),64);
    bufp->fullQData(oldp+585,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9]),64);
    bufp->fullQData(oldp+587,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[10]),64);
    bufp->fullQData(oldp+589,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[11]),64);
    bufp->fullQData(oldp+591,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[12]),64);
    bufp->fullQData(oldp+593,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[13]),64);
    bufp->fullQData(oldp+595,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[14]),64);
    bufp->fullQData(oldp+597,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[15]),64);
    bufp->fullQData(oldp+599,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out),64);
    bufp->fullBit(oldp+601,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit));
    bufp->fullCData(oldp+602,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__diver__key),2);
    __Vtemp_h65cc6484__0[0U] = vlSymsp->TOP__top.__VdfgTmp_he299b9b5__0;
    __Vtemp_h65cc6484__0[1U] = 0U;
    __Vtemp_h65cc6484__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_he2a2f59f__0 
                                      << 2U));
    __Vtemp_h65cc6484__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_he2a2f59f__0 
                                >> 0x1eU);
    __Vtemp_h65cc6484__0[4U] = 0x14U;
    __Vtemp_h65cc6484__0[5U] = 0U;
    __Vtemp_h65cc6484__0[6U] = ((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                << 6U);
    __Vtemp_h65cc6484__0[7U] = (((IData)(VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h65cc6484__0[8U] = (0x80U | ((IData)((VL_DIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+603,(__Vtemp_h65cc6484__0),264);
    bufp->fullWData(oldp+612,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+615,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+618,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+621,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+624,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0]),64);
    bufp->fullQData(oldp+626,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1]),64);
    bufp->fullQData(oldp+628,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2]),64);
    bufp->fullQData(oldp+630,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3]),64);
    bufp->fullQData(oldp+632,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out),64);
    bufp->fullBit(oldp+634,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit));
    __Vtemp_hd8501971__0[0U] = vlSymsp->TOP__top.__VdfgTmp_he2207a16__0;
    __Vtemp_hd8501971__0[1U] = 0U;
    __Vtemp_hd8501971__0[2U] = (3U | (vlSymsp->TOP__top.__VdfgTmp_he23c7a72__0 
                                      << 2U));
    __Vtemp_hd8501971__0[3U] = (vlSymsp->TOP__top.__VdfgTmp_he23c7a72__0 
                                >> 0x1eU);
    __Vtemp_hd8501971__0[4U] = (4U | ((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA)) 
                                      << 4U));
    __Vtemp_hd8501971__0[5U] = (((IData)(VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA)) 
                                 >> 0x1cU) | ((IData)(
                                                      (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                       >> 0x20U)) 
                                              << 4U));
    __Vtemp_hd8501971__0[6U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                 << 6U) | ((IData)(
                                                   (VL_MODDIVS_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA) 
                                                    >> 0x20U)) 
                                           >> 0x1cU));
    __Vtemp_hd8501971__0[7U] = (((IData)(VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB)) 
                                 >> 0x1aU) | ((IData)(
                                                      (VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hd8501971__0[8U] = (0x80U | ((IData)((VL_MODDIV_QQQ(64, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA, vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB) 
                                                  >> 0x20U)) 
                                         >> 0x1aU));
    bufp->fullWData(oldp+635,(__Vtemp_hd8501971__0),264);
    bufp->fullWData(oldp+644,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+647,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+650,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+653,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+656,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0]),64);
    bufp->fullQData(oldp+658,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1]),64);
    bufp->fullQData(oldp+660,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2]),64);
    bufp->fullQData(oldp+662,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3]),64);
    bufp->fullQData(oldp+664,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out),64);
    bufp->fullBit(oldp+666,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit));
    bufp->fullCData(oldp+667,((((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
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
    bufp->fullQData(oldp+668,(vlSymsp->TOP__top.__PVT__IDU__DOT__Imm_d),64);
    bufp->fullBit(oldp+670,((((0x67U != (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))));
    bufp->fullCData(oldp+671,(((IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
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
    bufp->fullBit(oldp+672,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegWr_d));
    bufp->fullCData(oldp+673,(((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                ? (5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xcU)) : 
                               ((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                 ? 6U : ((0x67U == 
                                          (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))
                                          ? 7U : 2U)))),3);
    bufp->fullBit(oldp+674,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemWr_d));
    bufp->fullCData(oldp+675,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemOP_d),3);
    bufp->fullCData(oldp+676,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegSrc_d),2);
    bufp->fullBit(oldp+677,(vlSymsp->TOP__top.__PVT__IDU__DOT__isTuncate_d));
    bufp->fullBit(oldp+678,(vlSymsp->TOP__top.__PVT__IDU__DOT__isSext_d));
    bufp->fullBit(oldp+679,(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d));
    bufp->fullCData(oldp+680,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop),3);
    bufp->fullCData(oldp+681,((0x7fU & vlSymsp->TOP__top.__PVT__id_inst)),7);
    bufp->fullCData(oldp+682,((7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+683,((vlSymsp->TOP__top.__PVT__id_inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+684,((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullCData(oldp+685,((5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+686,((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullBit(oldp+687,((0x67U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+688,((((0x33U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))) 
                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+689,(((3U == (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0xcU)))
                                ? 0xaU : ((((vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x7020U 
                                                & vlSymsp->TOP__top.__PVT__id_inst))) 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullCData(oldp+690,((0x10U | ((8U & (vlSymsp->TOP__top.__PVT__id_inst 
                                               >> 9U)) 
                                        | (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullBit(oldp+691,((0x37U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+692,((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+693,((0x23U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+694,((3U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullIData(oldp+695,((vlSymsp->TOP__top.__PVT__id_inst 
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
    bufp->fullWData(oldp+696,(__Vtemp_hf0d68bd5__0),335);
    bufp->fullWData(oldp+707,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+710,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+713,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+716,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+719,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+722,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+724,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+726,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+728,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+730,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+732,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+734,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
    bufp->fullCData(oldp+735,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+736,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+737,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+738,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+739,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+740,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+741,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+742,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit));
    bufp->fullQData(oldp+743,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
    bufp->fullQData(oldp+745,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
    bufp->fullIData(oldp+747,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                           >> 0x20U)))),32);
    bufp->fullCData(oldp+748,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 7U))),5);
    bufp->fullQData(oldp+749,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
    bufp->fullQData(oldp+751,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
    bufp->fullQData(oldp+753,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
    bufp->fullQData(oldp+755,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
    bufp->fullQData(oldp+757,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
    bufp->fullQData(oldp+759,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
    bufp->fullQData(oldp+761,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
    bufp->fullQData(oldp+763,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
    bufp->fullQData(oldp+765,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
    bufp->fullQData(oldp+767,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
    bufp->fullQData(oldp+769,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
    bufp->fullQData(oldp+771,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
    bufp->fullQData(oldp+773,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
    bufp->fullQData(oldp+775,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
    bufp->fullQData(oldp+777,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
    bufp->fullQData(oldp+779,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
    bufp->fullQData(oldp+781,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
    bufp->fullQData(oldp+783,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
    bufp->fullQData(oldp+785,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
    bufp->fullQData(oldp+787,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
    bufp->fullQData(oldp+789,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
    bufp->fullQData(oldp+791,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
    bufp->fullQData(oldp+793,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
    bufp->fullQData(oldp+795,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
    bufp->fullQData(oldp+797,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
    bufp->fullQData(oldp+799,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
    bufp->fullQData(oldp+801,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
    bufp->fullQData(oldp+803,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
    bufp->fullQData(oldp+805,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
    bufp->fullQData(oldp+807,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
    bufp->fullQData(oldp+809,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
    bufp->fullQData(oldp+811,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
    bufp->fullBit(oldp+813,(((IData)(vlSymsp->TOP__top.__PVT__RegWr) 
                             & (0U != (0x1fU & (vlSymsp->TOP__top.Inst 
                                                >> 7U))))));
    bufp->fullQData(oldp+814,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
    bufp->fullQData(oldp+816,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
    bufp->fullBit(oldp+818,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+819,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+820,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                             & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
    bufp->fullIData(oldp+821,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
    bufp->fullCData(oldp+822,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
    bufp->fullBit(oldp+823,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    bufp->fullCData(oldp+824,((0x1fU & (vlSymsp->TOP__top.Inst 
                                        >> 0xfU))),5);
    bufp->fullSData(oldp+825,((vlSymsp->TOP__top.Inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+826,((7U & (vlSymsp->TOP__top.Inst 
                                     >> 0xcU))),3);
    bufp->fullQData(oldp+827,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
    bufp->fullQData(oldp+829,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
    bufp->fullQData(oldp+831,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
    bufp->fullQData(oldp+833,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
    bufp->fullBit(oldp+835,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 3U)))));
    bufp->fullBit(oldp+836,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                           >> 7U)))));
    bufp->fullBit(oldp+837,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
    bufp->fullBit(oldp+838,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
    bufp->fullQData(oldp+840,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
    bufp->fullBit(oldp+842,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
    bufp->fullBit(oldp+843,((0x305U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+844,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
    bufp->fullBit(oldp+845,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
    bufp->fullBit(oldp+846,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
    bufp->fullBit(oldp+847,((0x304U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+848,((0x344U == (vlSymsp->TOP__top.Inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+849,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                           >> 7U)))));
    bufp->fullCData(oldp+850,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
    bufp->fullQData(oldp+851,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
    bufp->fullBit(oldp+853,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
    bufp->fullBit(oldp+854,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                              & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+855,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                              & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+856,(((0x304U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn))));
    bufp->fullBit(oldp+857,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                              & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+858,(((0x305U == (vlSymsp->TOP__top.Inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__mem_IntrEn))));
    bufp->fullBit(oldp+859,(vlSelf->clk));
    bufp->fullBit(oldp+860,(vlSelf->rst));
    bufp->fullIData(oldp+861,(vlSelf->Inst),32);
    bufp->fullQData(oldp+862,(vlSelf->pc),64);
    bufp->fullQData(oldp+864,(vlSymsp->TOP__top__IntrUnit.mcase),64);
    bufp->fullCData(oldp+866,(vlSymsp->TOP__top.__PVT__Extop),3);
    bufp->fullQData(oldp+867,(vlSymsp->TOP__top.__PVT__waddr),64);
    bufp->fullBit(oldp+869,(vlSymsp->TOP__top.__PVT__Less));
    bufp->fullBit(oldp+870,(vlSymsp->TOP__top.__PVT__Zero));
    bufp->fullBit(oldp+871,(1U));
    bufp->fullIData(oldp+872,(vlSymsp->TOP__top.__PVT__AWADDR),32);
    bufp->fullBit(oldp+873,(vlSymsp->TOP__top.__PVT__AWVALID));
    bufp->fullQData(oldp+874,(vlSymsp->TOP__top.__PVT__WDATA),64);
    bufp->fullBit(oldp+876,(vlSymsp->TOP__top.__PVT__WVALID));
    bufp->fullCData(oldp+877,(vlSymsp->TOP__top.__PVT__WSTRB),8);
    bufp->fullBit(oldp+878,(vlSymsp->TOP__top.__PVT__BREADY));
    bufp->fullIData(oldp+879,(4U),32);
    bufp->fullIData(oldp+880,(2U),32);
    bufp->fullIData(oldp+881,(8U),32);
    bufp->fullIData(oldp+882,(1U),32);
    bufp->fullCData(oldp+883,(0U),8);
    bufp->fullQData(oldp+884,(0xc060343cffULL),40);
    bufp->fullIData(oldp+886,(0xaU),32);
    bufp->fullIData(oldp+887,(4U),32);
    bufp->fullIData(oldp+888,(0x40U),32);
    bufp->fullQData(oldp+889,(0ULL),64);
    bufp->fullIData(oldp+891,(0x42U),32);
    bufp->fullIData(oldp+892,(7U),32);
    bufp->fullIData(oldp+893,(3U),32);
    bufp->fullCData(oldp+894,(1U),2);
    bufp->fullIData(oldp+895,(5U),32);
    bufp->fullIData(oldp+896,(7U),32);
    bufp->fullBit(oldp+897,(0U));
    bufp->fullIData(oldp+898,(6U),32);
    bufp->fullIData(oldp+899,(3U),32);
    bufp->fullIData(oldp+900,(0x10U),32);
    bufp->fullIData(oldp+901,(0x44U),32);
    bufp->fullIData(oldp+902,(0x10U),32);
    bufp->fullIData(oldp+903,(0x20U),32);
    bufp->fullIData(oldp+904,(0U),32);
    bufp->fullBit(oldp+905,(vlSymsp->TOP__top.__PVT__IDU__DOT__ifu_valid));
    bufp->fullBit(oldp+906,(vlSymsp->TOP__top.__PVT__IDU__DOT__ifu_ready));
    bufp->fullIData(oldp+907,(0x43U),32);
    bufp->fullIData(oldp+908,(5U),32);
    bufp->fullCData(oldp+909,(0U),2);
    bufp->fullIData(oldp+910,(0x1bceU),18);
    bufp->fullIData(oldp+911,(9U),32);
    bufp->fullIData(oldp+912,(2U),32);
    bufp->fullIData(oldp+913,(0xcU),32);
    bufp->fullCData(oldp+914,(0U),3);
    __Vtemp_hd6f60a5b__0[0U] = 0x37eceb9aU;
    __Vtemp_hd6f60a5b__0[1U] = 0xd46c1ac7U;
    __Vtemp_hd6f60a5b__0[2U] = 0x65d92f5bU;
    __Vtemp_hd6f60a5b__0[3U] = 0x268da6U;
    bufp->fullWData(oldp+915,(__Vtemp_hd6f60a5b__0),120);
    bufp->fullIData(oldp+919,(0xcU),32);
    bufp->fullCData(oldp+920,(0xe7U),8);
    bufp->fullIData(oldp+921,(1U),32);
    bufp->fullSData(oldp+922,(0x35bdU),16);
    bufp->fullCData(oldp+923,(0U),5);
    bufp->fullIData(oldp+924,(2U),32);
    bufp->fullBit(oldp+925,(0U));
    bufp->fullBit(oldp+926,(vlSymsp->TOP__top.__PVT__IFU__DOT__pipeline_hold));
    bufp->fullBit(oldp+927,(vlSymsp->TOP__top.__PVT__IFU__DOT__ifu_valid));
    bufp->fullBit(oldp+928,(vlSymsp->TOP__top.__PVT__IFU__DOT__id_ready));
    bufp->fullBit(oldp+929,(vlSymsp->TOP__top.__PVT__IFU__DOT__ifu_ready));
    bufp->fullBit(oldp+930,(vlSymsp->TOP__top.__PVT__IFU__DOT__ex_valid));
    bufp->fullIData(oldp+931,(vlSymsp->TOP__top.__PVT__IFU__DOT__inst),32);
    bufp->fullQData(oldp+932,(0x7ffffff8ULL),64);
    bufp->fullQData(oldp+934,(0x7ffffffcULL),64);
    bufp->fullQData(oldp+936,(0xffffffffffffffffULL),64);
    bufp->fullIData(oldp+938,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullBit(oldp+939,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr_done));
    bufp->fullBit(oldp+940,(vlSymsp->TOP__top__IntrUnit.__PVT__isCSRw));
    __Vtemp_h058c0b04__0[0U] = 7U;
    __Vtemp_h058c0b04__0[1U] = 0x80000000U;
    __Vtemp_h058c0b04__0[2U] = 0x2eU;
    __Vtemp_h058c0b04__0[3U] = 0U;
    __Vtemp_h058c0b04__0[4U] = 4U;
    bufp->fullWData(oldp+941,(__Vtemp_h058c0b04__0),132);
    bufp->fullQData(oldp+946,(0xa00001800ULL),64);
    bufp->fullIData(oldp+948,(6U),32);
}
