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
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+942,"Inst", false,-1, 31,0);
    tracep->declQuad(c+943,"pc", false,-1, 63,0);
    tracep->declBit(c+945,"valid", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+394,"Inst", false,-1, 31,0);
    tracep->declQuad(c+395,"pc", false,-1, 63,0);
    tracep->declBit(c+235,"valid", false,-1);
    tracep->declQuad(c+946,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+948,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+987,"Extop", false,-1, 2,0);
    tracep->declQuad(c+397,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+988,"waddr", false,-1, 63,0);
    tracep->declBit(c+990,"Less", false,-1);
    tracep->declBit(c+991,"Zero", false,-1);
    tracep->declQuad(c+992,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+994,"RegWdata", false,-1, 63,0);
    tracep->declBit(c+996,"IntrEn", false,-1);
    tracep->declQuad(c+997,"IntrOut", false,-1, 63,0);
    tracep->declBit(c+236,"clint_mtip", false,-1);
    tracep->declBit(c+999,"clint_we", false,-1);
    tracep->declBit(c+1000,"clint_re", false,-1);
    tracep->declQuad(c+1001,"clint_dout", false,-1, 63,0);
    tracep->declBus(c+399,"rs1", false,-1, 4,0);
    tracep->declBus(c+400,"rs2", false,-1, 4,0);
    tracep->declBus(c+401,"rd", false,-1, 4,0);
    tracep->declBit(c+402,"RegWr_d", false,-1);
    tracep->declBit(c+403,"ifu_is_jump", false,-1);
    tracep->declQuad(c+404,"ifu_JumpPc", false,-1, 63,0);
    tracep->declBit(c+374,"ifu_isIntrPC", false,-1);
    tracep->declQuad(c+375,"ifu_IntrPC", false,-1, 63,0);
    tracep->declBit(c+932,"ifu_arvalid", false,-1);
    tracep->declBus(c+933,"ifu_raddr", false,-1, 31,0);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+1003,"ram_arready", false,-1);
    tracep->declQuad(c+864,"ram_rdata", false,-1, 63,0);
    tracep->declBit(c+225,"ram_rvalid", false,-1);
    tracep->declBus(c+226,"ram_rresp", false,-1, 1,0);
    tracep->declBus(c+1004,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+1005,"AWVALID", false,-1);
    tracep->declBit(c+227,"AWREADY", false,-1);
    tracep->declQuad(c+1006,"WDATA", false,-1, 63,0);
    tracep->declBit(c+1008,"WVALID", false,-1);
    tracep->declBit(c+228,"WREADY", false,-1);
    tracep->declBus(c+1009,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+229,"BVALID", false,-1);
    tracep->declBus(c+230,"BRESP", false,-1, 1,0);
    tracep->declBit(c+1010,"BREADY", false,-1);
    tracep->declQuad(c+406,"id_pc", false,-1, 63,0);
    tracep->declBus(c+408,"id_inst", false,-1, 31,0);
    tracep->declBit(c+237,"ifu_valid", false,-1);
    tracep->declBit(c+238,"idu_valid", false,-1);
    tracep->declBit(c+934,"idu_ready", false,-1);
    tracep->declBit(c+239,"exu_valid", false,-1);
    tracep->declBit(c+950,"exu_ready", false,-1);
    tracep->declBit(c+235,"lsu_valid", false,-1);
    tracep->declBit(c+951,"lsu_ready", false,-1);
    tracep->declBit(c+377,"wb_valid", false,-1);
    tracep->declBit(c+378,"wb_ready", false,-1);
    tracep->declBit(c+409,"exu_isTuncate", false,-1);
    tracep->declBit(c+410,"exu_isSext", false,-1);
    tracep->declQuad(c+240,"ex_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+411,"ex_Rrs2", false,-1, 63,0);
    tracep->declBit(c+413,"exu_IntrEn", false,-1);
    tracep->declBus(c+242,"exu_ALUct", false,-1, 4,0);
    tracep->declQuad(c+243,"exu_Imm", false,-1, 63,0);
    tracep->declBit(c+245,"exu_ALUAsr", false,-1);
    tracep->declBus(c+246,"exu_ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+414,"ex_pc", false,-1, 63,0);
    tracep->declBus(c+416,"ex_inst", false,-1, 31,0);
    tracep->declBit(c+247,"exu_RegWr", false,-1);
    tracep->declBus(c+248,"exu_Branch", false,-1, 2,0);
    tracep->declBus(c+249,"exu_MemOP", false,-1, 2,0);
    tracep->declBit(c+250,"exu_MemWr", false,-1);
    tracep->declBus(c+251,"exu_RegSrc", false,-1, 1,0);
    tracep->declBit(c+417,"isRAW", false,-1);
    tracep->declBit(c+252,"witf_full", false,-1);
    tracep->declBit(c+253,"witf_empty", false,-1);
    tracep->declQuad(c+254,"mem_Rrs1", false,-1, 63,0);
    tracep->declQuad(c+418,"mem_Rrs2", false,-1, 63,0);
    tracep->declBus(c+256,"mem_MemOP", false,-1, 2,0);
    tracep->declBit(c+257,"mem_MemWr", false,-1);
    tracep->declBit(c+420,"mem_IntrEn", false,-1);
    tracep->declBus(c+258,"lsu_RegSrc", false,-1, 1,0);
    tracep->declBit(c+259,"lsu_Regwr", false,-1);
    tracep->declQuad(c+421,"lsu_pc", false,-1, 63,0);
    tracep->declBus(c+423,"lsu_inst", false,-1, 31,0);
    tracep->declBit(c+424,"wb_IntrEn", false,-1);
    tracep->declBus(c+260,"wb_RegSrc", false,-1, 1,0);
    tracep->declBit(c+261,"wb_RegWr", false,-1);
    tracep->declQuad(c+395,"wb_pc", false,-1, 63,0);
    tracep->declBus(c+394,"wb_inst", false,-1, 31,0);
    tracep->declQuad(c+262,"wb_ALUres", false,-1, 63,0);
    tracep->declQuad(c+952,"memout", false,-1, 63,0);
    tracep->declQuad(c+264,"wb_Rrs1", false,-1, 63,0);
    tracep->pushNamePrefix("EXU ");
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+416,"exu_inst", false,-1, 31,0);
    tracep->declQuad(c+414,"exu_pc", false,-1, 63,0);
    tracep->declBit(c+245,"ALUAsr", false,-1);
    tracep->declBus(c+246,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+242,"ALUct", false,-1, 4,0);
    tracep->declBit(c+409,"isTuncate", false,-1);
    tracep->declBit(c+410,"isSext", false,-1);
    tracep->declBit(c+247,"Regwr_i", false,-1);
    tracep->declBus(c+249,"MemOP_i", false,-1, 2,0);
    tracep->declBit(c+250,"MemWr_i", false,-1);
    tracep->declBit(c+413,"IntrEn", false,-1);
    tracep->declBus(c+248,"Branch", false,-1, 2,0);
    tracep->declBus(c+251,"RegSrc", false,-1, 1,0);
    tracep->declQuad(c+240,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+411,"R_rs2", false,-1, 63,0);
    tracep->declQuad(c+243,"Imm", false,-1, 63,0);
    tracep->declQuad(c+397,"wb_ALUres", false,-1, 63,0);
    tracep->declBit(c+259,"Regwr_o", false,-1);
    tracep->declQuad(c+418,"R_rs2_o", false,-1, 63,0);
    tracep->declQuad(c+254,"R_rs1_o", false,-1, 63,0);
    tracep->declBus(c+256,"MemOP_o", false,-1, 2,0);
    tracep->declBit(c+257,"MemWr_o", false,-1);
    tracep->declBit(c+420,"IntrEn_o", false,-1);
    tracep->declQuad(c+404,"NextPC", false,-1, 63,0);
    tracep->declBit(c+403,"is_jump", false,-1);
    tracep->declBus(c+258,"RegSrc_o", false,-1, 1,0);
    tracep->declBus(c+423,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+421,"pc_o", false,-1, 63,0);
    tracep->declBit(c+238,"idu_valid", false,-1);
    tracep->declBit(c+950,"exu_ready", false,-1);
    tracep->declBit(c+951,"lsu_ready", false,-1);
    tracep->declBit(c+239,"exu_valid", false,-1);
    tracep->declBit(c+954,"exu_valid_next", false,-1);
    tracep->declBit(c+935,"popline_wen", false,-1);
    tracep->declQuad(c+425,"ALUres", false,-1, 63,0);
    tracep->declBit(c+427,"Less", false,-1);
    tracep->declBit(c+428,"Zero", false,-1);
    tracep->pushNamePrefix("GenNextPC ");
    tracep->declBus(c+248,"Branch", false,-1, 2,0);
    tracep->declQuad(c+243,"imm", false,-1, 63,0);
    tracep->declQuad(c+414,"PC", false,-1, 63,0);
    tracep->declQuad(c+240,"R_rs1", false,-1, 63,0);
    tracep->declBit(c+427,"Less", false,-1);
    tracep->declBit(c+428,"Zero", false,-1);
    tracep->declQuad(c+404,"NextPC", false,-1, 63,0);
    tracep->declBit(c+403,"is_jump", false,-1);
    tracep->declBit(c+429,"PCAsrc", false,-1);
    tracep->declBit(c+430,"PCBsrc", false,-1);
    tracep->declQuad(c+312,"Asrc", false,-1, 63,0);
    tracep->declQuad(c+314,"Bsrc", false,-1, 63,0);
    tracep->declQuad(c+431,"NextPCp", false,-1, 63,0);
    tracep->pushNamePrefix("dePCsrc ");
    tracep->declBus(c+1011,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1012,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1013,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+433,"out", false,-1, 1,0);
    tracep->declBus(c+248,"key", false,-1, 2,0);
    tracep->declBus(c+1015,"default_out", false,-1, 1,0);
    tracep->declQuad(c+434,"lut", false,-1, 34,0);
    tracep->declBus(c+1016,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+436+i*1,"pair_list", true,(i+0), 4,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+2+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+443+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+450,"lut_out", false,-1, 1,0);
    tracep->declBit(c+451,"hit", false,-1);
    tracep->declBus(c+1017,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("jump_check ");
    tracep->declBus(c+1011,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1012,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+403,"out", false,-1, 0,0);
    tracep->declBus(c+248,"key", false,-1, 2,0);
    tracep->declBus(c+1018,"default_out", false,-1, 0,0);
    tracep->declBus(c+452,"lut", false,-1, 27,0);
    tracep->declBus(c+1019,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+453+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+460+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+467,"lut_out", false,-1, 0,0);
    tracep->declBit(c+468,"hit", false,-1);
    tracep->declBus(c+1017,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_alu ");
    tracep->declBit(c+245,"ALUAsr", false,-1);
    tracep->declQuad(c+414,"PC", false,-1, 63,0);
    tracep->declQuad(c+240,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+246,"ALUBsr", false,-1, 1,0);
    tracep->declQuad(c+243,"Imm", false,-1, 63,0);
    tracep->declQuad(c+411,"R_rs2", false,-1, 63,0);
    tracep->declBus(c+242,"ALUct", false,-1, 4,0);
    tracep->declBit(c+409,"isTuncate", false,-1);
    tracep->declBit(c+410,"isSext", false,-1);
    tracep->declQuad(c+425,"ALUres", false,-1, 63,0);
    tracep->declBit(c+427,"Less", false,-1);
    tracep->declBit(c+428,"Zero", false,-1);
    tracep->declQuad(c+469,"ALUA", false,-1, 63,0);
    tracep->declQuad(c+471,"ALUB", false,-1, 63,0);
    tracep->declBit(c+266,"US_S", false,-1);
    tracep->declBit(c+267,"Sub_Add", false,-1);
    tracep->declBit(c+266,"A_L", false,-1);
    tracep->declBit(c+268,"L_R", false,-1);
    tracep->declQuad(c+473,"adder", false,-1, 63,0);
    tracep->declBit(c+316,"Carry", false,-1);
    tracep->declBit(c+475,"Overflow", false,-1);
    tracep->declBit(c+476,"lessS", false,-1);
    tracep->declBit(c+477,"lessUS", false,-1);
    tracep->declQuad(c+478,"shift", false,-1, 63,0);
    tracep->declQuad(c+480,"XOR", false,-1, 63,0);
    tracep->declQuad(c+482,"OR", false,-1, 63,0);
    tracep->declQuad(c+484,"AND", false,-1, 63,0);
    tracep->declQuad(c+486,"MUL", false,-1, 63,0);
    tracep->declQuad(c+488,"DIV", false,-1, 63,0);
    tracep->declQuad(c+490,"REM", false,-1, 63,0);
    tracep->declQuad(c+492,"ALUout", false,-1, 63,0);
    tracep->pushNamePrefix("Adder ");
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+469,"A", false,-1, 63,0);
    tracep->declQuad(c+471,"B", false,-1, 63,0);
    tracep->declBit(c+267,"Cin", false,-1);
    tracep->declQuad(c+473,"Result", false,-1, 63,0);
    tracep->declBit(c+316,"Carry", false,-1);
    tracep->declBit(c+475,"Overflow", false,-1);
    tracep->declBit(c+428,"zero", false,-1);
    tracep->declQuad(c+494,"t_no_Cin", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BarrelShifter ");
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1021,"SHT_LEN", false,-1, 31,0);
    tracep->declQuad(c+469,"din", false,-1, 63,0);
    tracep->declBus(c+496,"shamtin", false,-1, 5,0);
    tracep->declBit(c+266,"A_L", false,-1);
    tracep->declBit(c+268,"L_R", false,-1);
    tracep->declBit(c+409,"isTuncate", false,-1);
    tracep->declQuad(c+478,"dout", false,-1, 63,0);
    tracep->declBus(c+497,"shamt", false,-1, 5,0);
    tracep->declQuad(c+498,"sra", false,-1, 63,0);
    tracep->pushNamePrefix("ShifterMux ");
    tracep->declBus(c+1019,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+478,"out", false,-1, 63,0);
    tracep->declBus(c+269,"key", false,-1, 1,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+500,"lut", false,-1, 263,0);
    tracep->declBus(c+1024,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+509+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+16+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+521+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+529,"lut_out", false,-1, 63,0);
    tracep->declBit(c+531,"hit", false,-1);
    tracep->declBus(c+1025,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deALUBsr ");
    tracep->declBus(c+1012,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+471,"out", false,-1, 63,0);
    tracep->declBus(c+246,"key", false,-1, 1,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+317,"lut", false,-1, 197,0);
    tracep->declBus(c+1024,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+324+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+20+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+333+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+532,"lut_out", false,-1, 63,0);
    tracep->declBit(c+534,"hit", false,-1);
    tracep->declBus(c+1026,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+1027,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1019,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+492,"out", false,-1, 63,0);
    tracep->declBus(c+270,"key", false,-1, 3,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+535,"lut", false,-1, 1087,0);
    tracep->declBus(c+1028,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+569+i*3,"pair_list", true,(i+0), 67,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+23+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+617+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+649,"lut_out", false,-1, 63,0);
    tracep->declBit(c+651,"hit", false,-1);
    tracep->declBus(c+1029,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("diver ");
    tracep->declBus(c+1019,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+488,"out", false,-1, 63,0);
    tracep->declBus(c+652,"key", false,-1, 1,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+653,"lut", false,-1, 263,0);
    tracep->declBus(c+1024,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+662+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+39+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+674+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+682,"lut_out", false,-1, 63,0);
    tracep->declBit(c+684,"hit", false,-1);
    tracep->declBus(c+1025,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("remer ");
    tracep->declBus(c+1019,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+490,"out", false,-1, 63,0);
    tracep->declBus(c+652,"key", false,-1, 1,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+685,"lut", false,-1, 263,0);
    tracep->declBus(c+1024,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+694+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+43+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+706+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+714,"lut_out", false,-1, 63,0);
    tracep->declBit(c+716,"hit", false,-1);
    tracep->declBus(c+1025,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("exu_valid_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+954,"din", false,-1, 0,0);
    tracep->declBus(c+239,"dout", false,-1, 0,0);
    tracep->declBit(c+1003,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_Inst_reg ");
    tracep->declBus(c+1031,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+416,"din", false,-1, 31,0);
    tracep->declBus(c+423,"dout", false,-1, 31,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_pc_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+414,"din", false,-1, 63,0);
    tracep->declQuad(c+421,"dout", false,-1, 63,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_ALUres_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+425,"din", false,-1, 63,0);
    tracep->declQuad(c+397,"dout", false,-1, 63,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+413,"din", false,-1, 0,0);
    tracep->declBus(c+420,"dout", false,-1, 0,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemOP_reg ");
    tracep->declBus(c+1012,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+249,"din", false,-1, 2,0);
    tracep->declBus(c+256,"dout", false,-1, 2,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_MemWr_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+250,"din", false,-1, 0,0);
    tracep->declBus(c+257,"dout", false,-1, 0,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs1_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+240,"din", false,-1, 63,0);
    tracep->declQuad(c+254,"dout", false,-1, 63,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_R_rs2_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+411,"din", false,-1, 63,0);
    tracep->declQuad(c+418,"dout", false,-1, 63,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_RegSrc_reg ");
    tracep->declBus(c+1013,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+251,"din", false,-1, 1,0);
    tracep->declBus(c+258,"dout", false,-1, 1,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_Regwr_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+247,"din", false,-1, 0,0);
    tracep->declBus(c+259,"dout", false,-1, 0,0);
    tracep->declBit(c+935,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IDU ");
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+408,"id_inst", false,-1, 31,0);
    tracep->declQuad(c+406,"id_pc", false,-1, 63,0);
    tracep->declQuad(c+946,"R_rs1_i", false,-1, 63,0);
    tracep->declQuad(c+948,"R_rs2_i", false,-1, 63,0);
    tracep->declBit(c+417,"isRAW", false,-1);
    tracep->declBit(c+252,"witf_full", false,-1);
    tracep->declBus(c+242,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+243,"Imm", false,-1, 63,0);
    tracep->declBit(c+245,"ALUAsr", false,-1);
    tracep->declBus(c+246,"ALUBsr", false,-1, 1,0);
    tracep->declBus(c+416,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+414,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+240,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+411,"R_rs2_o", false,-1, 63,0);
    tracep->declBus(c+248,"Branch", false,-1, 2,0);
    tracep->declBit(c+250,"MemWr", false,-1);
    tracep->declBus(c+249,"MemOP", false,-1, 2,0);
    tracep->declBus(c+251,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+409,"isTuncate", false,-1);
    tracep->declBit(c+410,"isSext", false,-1);
    tracep->declBit(c+413,"IntrEn", false,-1);
    tracep->declBit(c+247,"RegWr", false,-1);
    tracep->declBus(c+399,"rs1", false,-1, 4,0);
    tracep->declBus(c+400,"rs2", false,-1, 4,0);
    tracep->declBus(c+401,"rd", false,-1, 4,0);
    tracep->declBit(c+402,"RegWr_d", false,-1);
    tracep->declBit(c+237,"ifu_valid", false,-1);
    tracep->declBit(c+934,"idu_ready", false,-1);
    tracep->declBit(c+238,"idu_valid", false,-1);
    tracep->declBit(c+950,"exu_ready", false,-1);
    tracep->declBit(c+957,"idu_valid_next", false,-1);
    tracep->declBit(c+936,"popline_wen", false,-1);
    tracep->declBus(c+717,"ALUct_d", false,-1, 4,0);
    tracep->declQuad(c+718,"Imm_d", false,-1, 63,0);
    tracep->declBit(c+720,"ALUAsr_d", false,-1);
    tracep->declBus(c+721,"ALUBsr_d", false,-1, 1,0);
    tracep->declBus(c+722,"Branch_d", false,-1, 2,0);
    tracep->declBit(c+723,"MemWr_d", false,-1);
    tracep->declBus(c+724,"MemOP_d", false,-1, 2,0);
    tracep->declBus(c+725,"RegSrc_d", false,-1, 1,0);
    tracep->declBit(c+726,"isTuncate_d", false,-1);
    tracep->declBit(c+727,"isSext_d", false,-1);
    tracep->declBit(c+728,"IntrEn_d", false,-1);
    tracep->pushNamePrefix("ContrGenU ");
    tracep->declBus(c+408,"id_inst", false,-1, 31,0);
    tracep->declBus(c+717,"ALUct", false,-1, 4,0);
    tracep->declQuad(c+718,"Imm", false,-1, 63,0);
    tracep->declBit(c+720,"ALUAsr", false,-1);
    tracep->declBus(c+721,"ALUBsr", false,-1, 1,0);
    tracep->declBit(c+402,"RegWr", false,-1);
    tracep->declBus(c+722,"Branch", false,-1, 2,0);
    tracep->declBit(c+723,"MemWr", false,-1);
    tracep->declBus(c+724,"MemOP", false,-1, 2,0);
    tracep->declBus(c+725,"RegSrc", false,-1, 1,0);
    tracep->declBit(c+726,"isTuncate", false,-1);
    tracep->declBit(c+727,"isSext", false,-1);
    tracep->declBit(c+728,"IntrEn", false,-1);
    tracep->declBus(c+729,"Extop", false,-1, 2,0);
    tracep->declBus(c+730,"opcode", false,-1, 6,0);
    tracep->declBus(c+731,"func3", false,-1, 2,0);
    tracep->declBus(c+732,"func7", false,-1, 6,0);
    tracep->declBit(c+733,"isconditionalJump", false,-1);
    tracep->declBus(c+734,"BranchOpt", false,-1, 2,0);
    tracep->declBit(c+735,"isJal", false,-1);
    tracep->declBit(c+736,"isJalr", false,-1);
    tracep->declBit(c+737,"isMul", false,-1);
    tracep->declBus(c+738,"IntALUct", false,-1, 4,0);
    tracep->declBus(c+739,"MulALUct", false,-1, 4,0);
    tracep->declBit(c+740,"islui", false,-1);
    tracep->declBit(c+741,"isauipc", false,-1);
    tracep->declBit(c+742,"isMemW", false,-1);
    tracep->declBit(c+743,"isMemR", false,-1);
    tracep->pushNamePrefix("ImmGenU ");
    tracep->declBus(c+744,"Inst", false,-1, 31,7);
    tracep->declBus(c+729,"Extop", false,-1, 2,0);
    tracep->declQuad(c+718,"Imm", false,-1, 63,0);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+1016,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1012,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+718,"out", false,-1, 63,0);
    tracep->declBus(c+729,"key", false,-1, 2,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+745,"lut", false,-1, 334,0);
    tracep->declBus(c+1032,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+756+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+47+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+771+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+781,"lut_out", false,-1, 63,0);
    tracep->declBit(c+783,"hit", false,-1);
    tracep->declBus(c+1033,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("RegSrcMux ");
    tracep->declBus(c+1013,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1011,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1013,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+725,"out", false,-1, 1,0);
    tracep->declBus(c+730,"key", false,-1, 6,0);
    tracep->declBus(c+1034,"default_out", false,-1, 1,0);
    tracep->declBus(c+1035,"lut", false,-1, 17,0);
    tracep->declBus(c+1036,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+52+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+54+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+784,"lut_out", false,-1, 1,0);
    tracep->declBit(c+785,"hit", false,-1);
    tracep->declBus(c+1037,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deExtop ");
    tracep->declBus(c+1038,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1011,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1012,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+729,"out", false,-1, 2,0);
    tracep->declBus(c+730,"key", false,-1, 6,0);
    tracep->declBus(c+1039,"default_out", false,-1, 2,0);
    tracep->declArray(c+1040,"lut", false,-1, 119,0);
    tracep->declBus(c+1044,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+58+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+70+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+82+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+786,"lut_out", false,-1, 2,0);
    tracep->declBit(c+787,"hit", false,-1);
    tracep->declBus(c+1045,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isIntr ");
    tracep->declBus(c+1014,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1011,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+728,"out", false,-1, 0,0);
    tracep->declBus(c+730,"key", false,-1, 6,0);
    tracep->declBus(c+1018,"default_out", false,-1, 0,0);
    tracep->declBus(c+1046,"lut", false,-1, 7,0);
    tracep->declBus(c+1047,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+94+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+95+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+96+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+788,"lut_out", false,-1, 0,0);
    tracep->declBit(c+789,"hit", false,-1);
    tracep->declBus(c+1048,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("isRegWr ");
    tracep->declBus(c+1019,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1012,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+402,"out", false,-1, 0,0);
    tracep->declBus(c+729,"key", false,-1, 2,0);
    tracep->declBus(c+1018,"default_out", false,-1, 0,0);
    tracep->declBus(c+1049,"lut", false,-1, 15,0);
    tracep->declBus(c+1019,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+97+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+101+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+105+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+790,"lut_out", false,-1, 0,0);
    tracep->declBit(c+791,"hit", false,-1);
    tracep->declBus(c+1025,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ex_ALUAsr_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+720,"din", false,-1, 0,0);
    tracep->declBus(c+245,"dout", false,-1, 0,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUBsr_reg ");
    tracep->declBus(c+1013,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+721,"din", false,-1, 1,0);
    tracep->declBus(c+246,"dout", false,-1, 1,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_ALUct_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1050,"RESET_VAL", false,-1, 4,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+717,"din", false,-1, 4,0);
    tracep->declBus(c+242,"dout", false,-1, 4,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Branch_reg ");
    tracep->declBus(c+1012,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1051,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+722,"din", false,-1, 2,0);
    tracep->declBus(c+248,"dout", false,-1, 2,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Imm_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+718,"din", false,-1, 63,0);
    tracep->declQuad(c+243,"dout", false,-1, 63,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Inst_reg ");
    tracep->declBus(c+1031,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+408,"din", false,-1, 31,0);
    tracep->declBus(c+416,"dout", false,-1, 31,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_IntrEn_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+728,"din", false,-1, 0,0);
    tracep->declBus(c+413,"dout", false,-1, 0,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemOP_reg ");
    tracep->declBus(c+1012,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+724,"din", false,-1, 2,0);
    tracep->declBus(c+249,"dout", false,-1, 2,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_MemWr_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+723,"din", false,-1, 0,0);
    tracep->declBus(c+250,"dout", false,-1, 0,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegSrc_reg ");
    tracep->declBus(c+1013,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+725,"din", false,-1, 1,0);
    tracep->declBus(c+251,"dout", false,-1, 1,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_RegWr_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1052,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+402,"din", false,-1, 0,0);
    tracep->declBus(c+247,"dout", false,-1, 0,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs1_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+946,"din", false,-1, 63,0);
    tracep->declQuad(c+240,"dout", false,-1, 63,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_Rrs2_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+948,"din", false,-1, 63,0);
    tracep->declQuad(c+411,"dout", false,-1, 63,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isSext_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+727,"din", false,-1, 0,0);
    tracep->declBus(c+410,"dout", false,-1, 0,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_isTuncate_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1052,"RESET_VAL", false,-1, 0,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+726,"din", false,-1, 0,0);
    tracep->declBus(c+409,"dout", false,-1, 0,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_pc_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+406,"din", false,-1, 63,0);
    tracep->declQuad(c+414,"dout", false,-1, 63,0);
    tracep->declBit(c+936,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu_valid_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+957,"din", false,-1, 0,0);
    tracep->declBus(c+238,"dout", false,-1, 0,0);
    tracep->declBit(c+1003,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBit(c+374,"isIntrPC", false,-1);
    tracep->declBit(c+403,"is_jump", false,-1);
    tracep->declQuad(c+404,"JumpPc", false,-1, 63,0);
    tracep->declQuad(c+375,"IntrPC", false,-1, 63,0);
    tracep->declBit(c+932,"ARVALID", false,-1);
    tracep->declBus(c+933,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+1003,"ARREADY", false,-1);
    tracep->declBit(c+1,"RREADY", false,-1);
    tracep->declQuad(c+864,"inst_i", false,-1, 63,0);
    tracep->declBit(c+225,"RVALID", false,-1);
    tracep->declBus(c+408,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+406,"pc_o", false,-1, 63,0);
    tracep->declBit(c+237,"ifu_valid", false,-1);
    tracep->declBit(c+934,"idu_ready", false,-1);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+377,"wb_valid", false,-1);
    tracep->declBit(c+932,"popline_wen", false,-1);
    tracep->declBit(c+958,"nextpc_valid", false,-1);
    tracep->declBit(c+271,"nextpc_valid_r", false,-1);
    tracep->declQuad(c+937,"dpc", false,-1, 63,0);
    tracep->declQuad(c+792,"NextPC", false,-1, 63,0);
    tracep->declBus(c+959,"inst", false,-1, 31,0);
    tracep->pushNamePrefix("id_pc_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1053,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+792,"din", false,-1, 63,0);
    tracep->declQuad(c+406,"dout", false,-1, 63,0);
    tracep->declBit(c+932,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_inst_reg ");
    tracep->declBus(c+1031,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+959,"din", false,-1, 31,0);
    tracep->declBus(c+408,"dout", false,-1, 31,0);
    tracep->declBit(c+932,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_pre_pc_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1055,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+937,"din", false,-1, 63,0);
    tracep->declQuad(c+792,"dout", false,-1, 63,0);
    tracep->declBit(c+932,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu_valid_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+271,"din", false,-1, 0,0);
    tracep->declBus(c+237,"dout", false,-1, 0,0);
    tracep->declBit(c+1003,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("nextpc_valid_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+958,"din", false,-1, 0,0);
    tracep->declBus(c+271,"dout", false,-1, 0,0);
    tracep->declBit(c+1003,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+397,"addr", false,-1, 63,0);
    tracep->declQuad(c+418,"wdata", false,-1, 63,0);
    tracep->declBus(c+256,"MemOP", false,-1, 2,0);
    tracep->declBit(c+257,"we", false,-1);
    tracep->declQuad(c+952,"dataout", false,-1, 63,0);
    tracep->declBit(c+236,"clint_mtip", false,-1);
    tracep->declBit(c+420,"IntrEn_i", false,-1);
    tracep->declBus(c+258,"RegWdata_src_i", false,-1, 1,0);
    tracep->declBit(c+259,"RegWr_i", false,-1);
    tracep->declBus(c+423,"lsu_inst", false,-1, 31,0);
    tracep->declQuad(c+421,"lsu_pc", false,-1, 63,0);
    tracep->declQuad(c+254,"R_rs1_i", false,-1, 63,0);
    tracep->declBit(c+424,"IntrEn_o", false,-1);
    tracep->declBus(c+260,"RegWdata_src_o", false,-1, 1,0);
    tracep->declBit(c+261,"RegWr_o", false,-1);
    tracep->declBus(c+394,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+395,"pc_o", false,-1, 63,0);
    tracep->declQuad(c+264,"R_rs1_o", false,-1, 63,0);
    tracep->declQuad(c+262,"ALUres_o", false,-1, 63,0);
    tracep->declBit(c+239,"exu_valid", false,-1);
    tracep->declBit(c+951,"lsu_ready", false,-1);
    tracep->declBit(c+235,"lsu_valid", false,-1);
    tracep->declBit(c+378,"wb_ready", false,-1);
    tracep->declBit(c+960,"lsu_valid_next", false,-1);
    tracep->declBit(c+939,"popline_wen", false,-1);
    tracep->declBit(c+794,"isclint", false,-1);
    tracep->declBit(c+272,"RdEn", false,-1);
    tracep->declBit(c+795,"Datamem_we", false,-1);
    tracep->declBit(c+796,"clint_we", false,-1);
    tracep->declBit(c+339,"clint_re", false,-1);
    tracep->declQuad(c+797,"dataMem_out", false,-1, 63,0);
    tracep->declQuad(c+961,"clint_dout", false,-1, 63,0);
    tracep->declBit(c+963,"clint_mtip_next", false,-1);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declQuad(c+397,"Addr", false,-1, 63,0);
    tracep->declBus(c+256,"MemOP", false,-1, 2,0);
    tracep->declQuad(c+418,"DataIn", false,-1, 63,0);
    tracep->declBit(c+795,"WrEn", false,-1);
    tracep->declQuad(c+797,"DataOut", false,-1, 63,0);
    tracep->declBus(c+273,"wmask", false,-1, 7,0);
    tracep->declBit(c+274,"isSign", false,-1);
    tracep->declBit(c+340,"RdEn", false,-1);
    tracep->declBus(c+799,"shift", false,-1, 5,0);
    tracep->declArray(c+800,"data", false,-1, 127,0);
    tracep->declBus(c+804,"extmask", false,-1, 15,0);
    tracep->pushNamePrefix("deMemOP ");
    tracep->declBus(c+1019,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1047,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+273,"out", false,-1, 7,0);
    tracep->declBus(c+275,"key", false,-1, 1,0);
    tracep->declBus(c+1057,"default_out", false,-1, 7,0);
    tracep->declQuad(c+1058,"lut", false,-1, 39,0);
    tracep->declBus(c+1044,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+109+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+113+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+117+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+276,"lut_out", false,-1, 7,0);
    tracep->declBit(c+277,"hit", false,-1);
    tracep->declBus(c+1025,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sext ");
    tracep->declBus(c+1019,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+797,"out", false,-1, 63,0);
    tracep->declBus(c+275,"key", false,-1, 1,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+341,"lut", false,-1, 263,0);
    tracep->declBus(c+1024,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+805+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+121+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+817+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+825,"lut_out", false,-1, 63,0);
    tracep->declBit(c+827,"hit", false,-1);
    tracep->declBus(c+1025,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("clintU ");
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declQuad(c+418,"clint_din", false,-1, 63,0);
    tracep->declQuad(c+397,"clint_addr", false,-1, 63,0);
    tracep->declBit(c+796,"we", false,-1);
    tracep->declBit(c+339,"re", false,-1);
    tracep->declBit(c+963,"clint_mtip", false,-1);
    tracep->declQuad(c+961,"clint_dout", false,-1, 63,0);
    tracep->declQuad(c+390,"mtime", false,-1, 63,0);
    tracep->declQuad(c+964,"mtimecmp", false,-1, 63,0);
    tracep->declBit(c+828,"ismtimecmp", false,-1);
    tracep->declBit(c+829,"ismtime", false,-1);
    tracep->pushNamePrefix("mtimecmp_Reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1060,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+1018,"rst", false,-1);
    tracep->declQuad(c+418,"din", false,-1, 63,0);
    tracep->declQuad(c+964,"dout", false,-1, 63,0);
    tracep->declBit(c+830,"wen", false,-1);
    tracep->declBit(c+866,"rst_r1", false,-1);
    tracep->declBit(c+867,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu_valid_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+960,"din", false,-1, 0,0);
    tracep->declBus(c+235,"dout", false,-1, 0,0);
    tracep->declBit(c+1003,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrEn_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+420,"din", false,-1, 0,0);
    tracep->declBus(c+424,"dout", false,-1, 0,0);
    tracep->declBit(c+939,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_Rrs1_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+254,"din", false,-1, 63,0);
    tracep->declQuad(c+264,"dout", false,-1, 63,0);
    tracep->declBit(c+939,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_alures_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+397,"din", false,-1, 63,0);
    tracep->declQuad(c+262,"dout", false,-1, 63,0);
    tracep->declBit(c+939,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst_reg ");
    tracep->declBus(c+1031,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+423,"din", false,-1, 31,0);
    tracep->declBus(c+394,"dout", false,-1, 31,0);
    tracep->declBit(c+939,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_mtip_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+963,"din", false,-1, 0,0);
    tracep->declBus(c+236,"dout", false,-1, 0,0);
    tracep->declBit(c+939,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_pc_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+421,"din", false,-1, 63,0);
    tracep->declQuad(c+395,"dout", false,-1, 63,0);
    tracep->declBit(c+939,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_regdataSrc_reg ");
    tracep->declBus(c+1013,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+258,"din", false,-1, 1,0);
    tracep->declBus(c+260,"dout", false,-1, 1,0);
    tracep->declBit(c+939,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_regwr_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+259,"din", false,-1, 0,0);
    tracep->declBus(c+261,"dout", false,-1, 0,0);
    tracep->declBit(c+939,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_axi_lite_u ");
    tracep->declBus(c+1031,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+1020,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+1047,"DSIZE", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"resetn", false,-1);
    tracep->declBus(c+1004,"AWADDR", false,-1, 31,0);
    tracep->declBit(c+1005,"AWVALID", false,-1);
    tracep->declBit(c+227,"AWREADY", false,-1);
    tracep->declQuad(c+1006,"WDATA", false,-1, 63,0);
    tracep->declBit(c+1008,"WVALID", false,-1);
    tracep->declBit(c+228,"WREADY", false,-1);
    tracep->declBus(c+1009,"WSTRB", false,-1, 7,0);
    tracep->declBit(c+229,"BVALID", false,-1);
    tracep->declBus(c+230,"BRESP", false,-1, 1,0);
    tracep->declBit(c+1010,"BREADY", false,-1);
    tracep->declBus(c+933,"ARADDR", false,-1, 31,0);
    tracep->declBit(c+932,"ARVALID", false,-1);
    tracep->declBit(c+1003,"ARREADY", false,-1);
    tracep->declQuad(c+864,"RDATA", false,-1, 63,0);
    tracep->declBus(c+226,"RRESP", false,-1, 1,0);
    tracep->declBit(c+225,"RVALID", false,-1);
    tracep->declBit(c+1,"RREADY", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+125+i*2,"mem", true,(i+-1), 63,0);
    }
    tracep->declBus(c+231,"waddr", false,-1, 31,0);
    tracep->declBus(c+232,"raddr", false,-1, 31,0);
    tracep->declBus(c+233,"wstrb", false,-1, 7,0);
    tracep->declBit(c+234,"wdata_done", false,-1);
    tracep->declBit(c+1062,"raddr_done", false,-1);
    tracep->declBus(c+129,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("witf ");
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+399,"rs1", false,-1, 4,0);
    tracep->declBus(c+400,"rs2", false,-1, 4,0);
    tracep->declBus(c+401,"rd", false,-1, 4,0);
    tracep->declBit(c+417,"isRAW", false,-1);
    tracep->declBit(c+402,"Regwr", false,-1);
    tracep->declBit(c+261,"isWB", false,-1);
    tracep->declBit(c+252,"witf_full", false,-1);
    tracep->declBit(c+253,"witf_empty", false,-1);
    tracep->declBus(c+278,"wptr_r", false,-1, 2,0);
    tracep->declBus(c+279,"rptr_r", false,-1, 2,0);
    tracep->declBus(c+280,"vld_r", false,-1, 7,0);
    tracep->declBus(c+831,"vld_set", false,-1, 7,0);
    tracep->declBus(c+281,"vld_clr", false,-1, 7,0);
    tracep->declBus(c+350,"vld_ena", false,-1, 7,0);
    tracep->declBus(c+351,"vld_nxt", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+282+i*1,"rdidx_r", true,(i+0), 4,0);
    }
    tracep->declBus(c+352,"rd_match_rs1idx", false,-1, 7,0);
    tracep->declBus(c+353,"rd_match_rs2idx", false,-1, 7,0);
    tracep->declBit(c+354,"witfrd_match_disprs1", false,-1);
    tracep->declBit(c+355,"witfrd_match_disprs2", false,-1);
    tracep->pushNamePrefix("depth_gt1 ");
    tracep->declBit(c+290,"wptr_flg_r", false,-1);
    tracep->declBit(c+291,"wptr_flg_nxt", false,-1);
    tracep->declBit(c+832,"wptr_flg_ena", false,-1);
    tracep->declBus(c+356,"wptr_nxt", false,-1, 2,0);
    tracep->declBit(c+292,"rptr_flg_r", false,-1);
    tracep->declBit(c+293,"rptr_flg_nxt", false,-1);
    tracep->declBit(c+294,"rptr_flg_ena", false,-1);
    tracep->declBus(c+295,"rptr_nxt", false,-1, 2,0);
    tracep->pushNamePrefix("rptr_flg_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+293,"din", false,-1, 0,0);
    tracep->declBus(c+292,"dout", false,-1, 0,0);
    tracep->declBit(c+294,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rptr_reg ");
    tracep->declBus(c+1012,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+295,"din", false,-1, 2,0);
    tracep->declBus(c+279,"dout", false,-1, 2,0);
    tracep->declBit(c+261,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wptr_flg_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+291,"din", false,-1, 0,0);
    tracep->declBus(c+290,"dout", false,-1, 0,0);
    tracep->declBit(c+832,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wptr_reg ");
    tracep->declBus(c+1012,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+356,"din", false,-1, 2,0);
    tracep->declBus(c+278,"dout", false,-1, 2,0);
    tracep->declBit(c+833,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[0] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 4,0);
    tracep->declBus(c+296,"dout", false,-1, 4,0);
    tracep->declBit(c+834,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+357,"din", false,-1, 0,0);
    tracep->declBus(c+297,"dout", false,-1, 0,0);
    tracep->declBit(c+358,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[1] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 4,0);
    tracep->declBus(c+298,"dout", false,-1, 4,0);
    tracep->declBit(c+835,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+359,"din", false,-1, 0,0);
    tracep->declBus(c+299,"dout", false,-1, 0,0);
    tracep->declBit(c+360,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[2] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 4,0);
    tracep->declBus(c+300,"dout", false,-1, 4,0);
    tracep->declBit(c+836,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+361,"din", false,-1, 0,0);
    tracep->declBus(c+301,"dout", false,-1, 0,0);
    tracep->declBit(c+362,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[3] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 4,0);
    tracep->declBus(c+302,"dout", false,-1, 4,0);
    tracep->declBit(c+837,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+363,"din", false,-1, 0,0);
    tracep->declBus(c+303,"dout", false,-1, 0,0);
    tracep->declBit(c+364,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[4] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 4,0);
    tracep->declBus(c+304,"dout", false,-1, 4,0);
    tracep->declBit(c+838,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+365,"din", false,-1, 0,0);
    tracep->declBus(c+305,"dout", false,-1, 0,0);
    tracep->declBit(c+366,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[5] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 4,0);
    tracep->declBus(c+306,"dout", false,-1, 4,0);
    tracep->declBit(c+839,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+367,"din", false,-1, 0,0);
    tracep->declBus(c+307,"dout", false,-1, 0,0);
    tracep->declBit(c+368,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[6] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 4,0);
    tracep->declBus(c+308,"dout", false,-1, 4,0);
    tracep->declBit(c+840,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+369,"din", false,-1, 0,0);
    tracep->declBus(c+309,"dout", false,-1, 0,0);
    tracep->declBit(c+370,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("witf_entries[7] ");
    tracep->pushNamePrefix("rdidx_reg ");
    tracep->declBus(c+1016,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+401,"din", false,-1, 4,0);
    tracep->declBus(c+310,"dout", false,-1, 4,0);
    tracep->declBit(c+841,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("vld_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+371,"din", false,-1, 0,0);
    tracep->declBus(c+311,"dout", false,-1, 0,0);
    tracep->declBit(c+372,"wen", false,-1);
    tracep->declBit(c+955,"rst_r1", false,-1);
    tracep->declBit(c+956,"rst_r2", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__WB__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__WB__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBit(c+424,"IntrEn", false,-1);
    tracep->declBit(c+236,"clint_mtip", false,-1);
    tracep->declBus(c+260,"Wdata_src", false,-1, 1,0);
    tracep->declBit(c+261,"RegWr", false,-1);
    tracep->declQuad(c+395,"wb_pc", false,-1, 63,0);
    tracep->declBus(c+394,"wb_inst", false,-1, 31,0);
    tracep->declQuad(c+262,"ALUres", false,-1, 63,0);
    tracep->declQuad(c+952,"MemOut", false,-1, 63,0);
    tracep->declQuad(c+264,"R_rs1_i", false,-1, 63,0);
    tracep->declBit(c+374,"isIntrPC", false,-1);
    tracep->declQuad(c+375,"IntrPC", false,-1, 63,0);
    tracep->declBus(c+399,"rs1", false,-1, 4,0);
    tracep->declBus(c+400,"rs2", false,-1, 4,0);
    tracep->declQuad(c+946,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+948,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+235,"lsu_valid", false,-1);
    tracep->declBit(c+378,"wb_ready", false,-1);
    tracep->declBit(c+377,"wb_valid", false,-1);
    tracep->declBit(c+1,"ifu_ready", false,-1);
    tracep->declBit(c+966,"wb_valid_next", false,-1);
    tracep->declBit(c+967,"popline_wen", false,-1);
    tracep->declQuad(c+216,"IntrOut", false,-1, 63,0);
    tracep->declQuad(c+968,"RegWdata", false,-1, 63,0);
    tracep->declQuad(c+970,"IntrPC_next", false,-1, 63,0);
    tracep->declBit(c+972,"isIntrPC_next", false,-1);
    tracep->pushNamePrefix("RegWsrcMux ");
    tracep->declBus(c+1012,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+968,"out", false,-1, 63,0);
    tracep->declBus(c+260,"key", false,-1, 1,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+194,"lut", false,-1, 197,0);
    tracep->declBus(c+1024,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+201+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+130+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+210+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+973,"lut_out", false,-1, 63,0);
    tracep->declBit(c+975,"hit", false,-1);
    tracep->declBus(c+1026,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+1016,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+399,"rs1", false,-1, 4,0);
    tracep->declBus(c+400,"rs2", false,-1, 4,0);
    tracep->declBus(c+842,"waddr", false,-1, 4,0);
    tracep->declQuad(c+946,"R_rs1", false,-1, 63,0);
    tracep->declQuad(c+948,"R_rs2", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declQuad(c+968,"wdata", false,-1, 63,0);
    tracep->declBit(c+261,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+868+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+373,"isw", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_IntrPC_reg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declQuad(c+970,"din", false,-1, 63,0);
    tracep->declQuad(c+375,"dout", false,-1, 63,0);
    tracep->declBit(c+1003,"wen", false,-1);
    tracep->declBit(c+976,"rst_r1", false,-1);
    tracep->declBit(c+977,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_isIntrPC_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+972,"din", false,-1, 0,0);
    tracep->declBus(c+374,"dout", false,-1, 0,0);
    tracep->declBit(c+1003,"wen", false,-1);
    tracep->declBit(c+976,"rst_r1", false,-1);
    tracep->declBit(c+977,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_valid_reg ");
    tracep->declBus(c+1014,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1030,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+941,"rst", false,-1);
    tracep->declBus(c+966,"din", false,-1, 0,0);
    tracep->declBus(c+377,"dout", false,-1, 0,0);
    tracep->declBit(c+1003,"wen", false,-1);
    tracep->declBit(c+976,"rst_r1", false,-1);
    tracep->declBit(c+977,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__top__WB__IntrUnit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__top__WB__IntrUnit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+424,"IntrEn", false,-1);
    tracep->declBit(c+236,"clint_mtip", false,-1);
    tracep->declQuad(c+395,"pc", false,-1, 63,0);
    tracep->declQuad(c+264,"R_rs1", false,-1, 63,0);
    tracep->declBus(c+843,"zimm", false,-1, 4,0);
    tracep->declBus(c+844,"csr", false,-1, 11,0);
    tracep->declBus(c+845,"func3", false,-1, 2,0);
    tracep->declBit(c+972,"isIntrPC", false,-1);
    tracep->declQuad(c+970,"IntrPC", false,-1, 63,0);
    tracep->declQuad(c+216,"dout", false,-1, 63,0);
    tracep->declQuad(c+379,"mepc", false,-1, 63,0);
    tracep->declQuad(c+381,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+383,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+385,"mie", false,-1, 63,0);
    tracep->declQuad(c+1022,"mip", false,-1, 63,0);
    tracep->declQuad(c+978,"mcase", false,-1, 63,0);
    tracep->declBit(c+1063,"isCSRw", false,-1);
    tracep->declBit(c+387,"mstatus_MIE", false,-1);
    tracep->declBit(c+388,"mie_MTIE", false,-1);
    tracep->declBit(c+854,"timer_irq", false,-1);
    tracep->declBit(c+855,"irq_raise", false,-1);
    tracep->declBit(c+1018,"mip_MTIP", false,-1);
    tracep->declBit(c+846,"isecall", false,-1);
    tracep->declQuad(c+856,"eNo", false,-1, 63,0);
    tracep->declBit(c+847,"ismret", false,-1);
    tracep->declBit(c+848,"ismtvec", false,-1);
    tracep->declBit(c+858,"ismepc", false,-1);
    tracep->declBit(c+859,"ismcase", false,-1);
    tracep->declBit(c+849,"ismstatus", false,-1);
    tracep->declBit(c+850,"ismie", false,-1);
    tracep->declBit(c+851,"ismip", false,-1);
    tracep->declQuad(c+218,"csrWData", false,-1, 63,0);
    tracep->declQuad(c+980,"mepcIn", false,-1, 63,0);
    tracep->declQuad(c+220,"mcaseIn", false,-1, 63,0);
    tracep->declBit(c+389,"mstatus_MPIE", false,-1);
    tracep->declQuad(c+982,"mstatusIn", false,-1, 63,0);
    tracep->pushNamePrefix("CSRwEn ");
    tracep->declBus(c+1013,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1013,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+856,"out", false,-1, 63,0);
    tracep->declBus(c+860,"key", false,-1, 1,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+1064,"lut", false,-1, 131,0);
    tracep->declBus(c+1024,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+133+i*3,"pair_list", true,(i+0), 65,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+139+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+141+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+861,"lut_out", false,-1, 63,0);
    tracep->declBit(c+863,"hit", false,-1);
    tracep->declBus(c+1037,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mcaseReg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1022,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+1018,"rst", false,-1);
    tracep->declQuad(c+220,"din", false,-1, 63,0);
    tracep->declQuad(c+978,"dout", false,-1, 63,0);
    tracep->declBit(c+984,"wen", false,-1);
    tracep->declBit(c+392,"rst_r1", false,-1);
    tracep->declBit(c+393,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mepcReg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1022,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+1018,"rst", false,-1);
    tracep->declQuad(c+980,"din", false,-1, 63,0);
    tracep->declQuad(c+379,"dout", false,-1, 63,0);
    tracep->declBit(c+985,"wen", false,-1);
    tracep->declBit(c+392,"rst_r1", false,-1);
    tracep->declBit(c+393,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mieReg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1022,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+1018,"rst", false,-1);
    tracep->declQuad(c+218,"din", false,-1, 63,0);
    tracep->declQuad(c+385,"dout", false,-1, 63,0);
    tracep->declBit(c+852,"wen", false,-1);
    tracep->declBit(c+392,"rst_r1", false,-1);
    tracep->declBit(c+393,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mstatusReg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1069,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+1018,"rst", false,-1);
    tracep->declQuad(c+982,"din", false,-1, 63,0);
    tracep->declQuad(c+383,"dout", false,-1, 63,0);
    tracep->declBit(c+986,"wen", false,-1);
    tracep->declBit(c+392,"rst_r1", false,-1);
    tracep->declBit(c+393,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mtvecReg ");
    tracep->declBus(c+1020,"WIDTH", false,-1, 31,0);
    tracep->declQuad(c+1022,"RESET_VAL", false,-1, 63,0);
    tracep->declBit(c+940,"clk", false,-1);
    tracep->declBit(c+1018,"rst", false,-1);
    tracep->declQuad(c+218,"din", false,-1, 63,0);
    tracep->declQuad(c+381,"dout", false,-1, 63,0);
    tracep->declBit(c+853,"wen", false,-1);
    tracep->declBit(c+392,"rst_r1", false,-1);
    tracep->declBit(c+393,"rst_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scrDataSrc ");
    tracep->declBus(c+1021,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1012,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1020,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1014,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+218,"out", false,-1, 63,0);
    tracep->declBus(c+845,"key", false,-1, 2,0);
    tracep->declQuad(c+1022,"default_out", false,-1, 63,0);
    tracep->declArray(c+151,"lut", false,-1, 401,0);
    tracep->declBus(c+1032,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declArray(c+164+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+145+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+182+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+222,"lut_out", false,-1, 63,0);
    tracep->declBit(c+224,"hit", false,-1);
    tracep->declBus(c+1071,"i", false,-1, 31,0);
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
    VlWide<13>/*415:0*/ __Vtemp_h1699453b__0;
    VlWide<7>/*223:0*/ __Vtemp_h8ea2cfd7__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f2e9b02__0;
    VlWide<3>/*95:0*/ __Vtemp_h7583f5cb__0;
    VlWide<3>/*95:0*/ __Vtemp_hc27bab0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b84e3f2__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd5810e3__0;
    VlWide<7>/*223:0*/ __Vtemp_hef6aeef8__0;
    VlWide<9>/*287:0*/ __Vtemp_h76b581e7__0;
    VlWide<9>/*287:0*/ __Vtemp_h2d6007f7__0;
    VlWide<34>/*1087:0*/ __Vtemp_h9798c001__0;
    VlWide<9>/*287:0*/ __Vtemp_hdf62be76__0;
    VlWide<9>/*287:0*/ __Vtemp_hbbbb0901__0;
    VlWide<11>/*351:0*/ __Vtemp_hf0d68bd5__0;
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
    bufp->fullWData(oldp+151,(__Vtemp_h1699453b__0),402);
    bufp->fullWData(oldp+164,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+167,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+170,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+173,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+176,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
    bufp->fullWData(oldp+179,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
    bufp->fullQData(oldp+182,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
    bufp->fullQData(oldp+184,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
    bufp->fullQData(oldp+186,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
    bufp->fullQData(oldp+188,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
    bufp->fullQData(oldp+190,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
    bufp->fullQData(oldp+192,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
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
    bufp->fullWData(oldp+194,(__Vtemp_h8ea2cfd7__0),198);
    bufp->fullWData(oldp+201,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+204,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+207,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+210,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+212,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+214,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+216,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__dout),64);
    bufp->fullQData(oldp+218,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData),64);
    bufp->fullQData(oldp+220,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo
                                : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData)),64);
    bufp->fullQData(oldp+222,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
    bufp->fullBit(oldp+224,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__scrDataSrc__DOT__hit));
    bufp->fullBit(oldp+225,(vlSymsp->TOP__top.__PVT__ram_rvalid));
    bufp->fullCData(oldp+226,(vlSymsp->TOP__top.__PVT__ram_rresp),2);
    bufp->fullBit(oldp+227,(vlSymsp->TOP__top.__PVT__AWREADY));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__top.__PVT__WREADY));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__top.__PVT__BVALID));
    bufp->fullCData(oldp+230,(vlSymsp->TOP__top.__PVT__BRESP),2);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__waddr),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr),32);
    bufp->fullCData(oldp+233,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wstrb),8);
    bufp->fullBit(oldp+234,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__wdata_done));
    bufp->fullBit(oldp+235,(vlSymsp->TOP__top.__PVT__lsu_valid));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__top.__PVT__clint_mtip));
    bufp->fullBit(oldp+237,(vlSymsp->TOP__top.__PVT__ifu_valid));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__top.__PVT__idu_valid));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__top.__PVT__exu_valid));
    bufp->fullQData(oldp+240,(vlSymsp->TOP__top.__PVT__ex_Rrs1),64);
    bufp->fullCData(oldp+242,(vlSymsp->TOP__top.__PVT__exu_ALUct),5);
    bufp->fullQData(oldp+243,(vlSymsp->TOP__top.__PVT__exu_Imm),64);
    bufp->fullBit(oldp+245,(vlSymsp->TOP__top.__PVT__exu_ALUAsr));
    bufp->fullCData(oldp+246,(vlSymsp->TOP__top.__PVT__exu_ALUBsr),2);
    bufp->fullBit(oldp+247,(vlSymsp->TOP__top.__PVT__exu_RegWr));
    bufp->fullCData(oldp+248,(vlSymsp->TOP__top.__PVT__exu_Branch),3);
    bufp->fullCData(oldp+249,(vlSymsp->TOP__top.__PVT__exu_MemOP),3);
    bufp->fullBit(oldp+250,(vlSymsp->TOP__top.__PVT__exu_MemWr));
    bufp->fullCData(oldp+251,(vlSymsp->TOP__top.__PVT__exu_RegSrc),2);
    bufp->fullBit(oldp+252,(vlSymsp->TOP__top.__PVT__witf_full));
    bufp->fullBit(oldp+253,((((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r) 
                              == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r)) 
                             & ((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r) 
                                == (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
    bufp->fullQData(oldp+254,(vlSymsp->TOP__top.__PVT__mem_Rrs1),64);
    bufp->fullCData(oldp+256,(vlSymsp->TOP__top.__PVT__mem_MemOP),3);
    bufp->fullBit(oldp+257,(vlSymsp->TOP__top.__PVT__mem_MemWr));
    bufp->fullCData(oldp+258,(vlSymsp->TOP__top.__PVT__lsu_RegSrc),2);
    bufp->fullBit(oldp+259,(vlSymsp->TOP__top.__PVT__lsu_Regwr));
    bufp->fullCData(oldp+260,(vlSymsp->TOP__top.__PVT__wb_RegSrc),2);
    bufp->fullBit(oldp+261,(vlSymsp->TOP__top.__PVT__wb_RegWr));
    bufp->fullQData(oldp+262,(vlSymsp->TOP__top.__PVT__wb_ALUres),64);
    bufp->fullQData(oldp+264,(vlSymsp->TOP__top.__PVT__wb_Rrs1),64);
    bufp->fullBit(oldp+266,((1U & ((IData)(vlSymsp->TOP__top.__PVT__exu_ALUct) 
                                   >> 3U))));
    bufp->fullBit(oldp+267,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Sub_Add));
    bufp->fullBit(oldp+268,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__exu_ALUct)))));
    bufp->fullCData(oldp+269,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
    bufp->fullCData(oldp+270,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__deExtop__key),4);
    bufp->fullBit(oldp+271,(vlSymsp->TOP__top.__PVT__IFU__DOT__nextpc_valid_r));
    bufp->fullBit(oldp+272,(((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                             & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
    bufp->fullCData(oldp+273,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__wmask),8);
    bufp->fullBit(oldp+274,((1U & ((IData)(vlSymsp->TOP__top.__PVT__mem_MemOP) 
                                   >> 2U))));
    bufp->fullCData(oldp+275,((3U & (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))),2);
    bufp->fullCData(oldp+276,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
    bufp->fullBit(oldp+277,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__deMemOP__DOT__hit));
    bufp->fullCData(oldp+278,(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r),3);
    bufp->fullCData(oldp+279,(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r),3);
    bufp->fullCData(oldp+280,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullCData(oldp+281,((((IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0) 
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
    bufp->fullCData(oldp+282,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[0]),5);
    bufp->fullCData(oldp+283,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[1]),5);
    bufp->fullCData(oldp+284,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[2]),5);
    bufp->fullCData(oldp+285,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[3]),5);
    bufp->fullCData(oldp+286,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[4]),5);
    bufp->fullCData(oldp+287,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[5]),5);
    bufp->fullCData(oldp+288,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[6]),5);
    bufp->fullCData(oldp+289,(vlSymsp->TOP__top.__PVT__witf__DOT__rdidx_r[7]),5);
    bufp->fullBit(oldp+290,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_r)))));
    bufp->fullBit(oldp+292,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r));
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_r)))));
    bufp->fullBit(oldp+294,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena));
    bufp->fullCData(oldp+295,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__rptr_flg_ena)
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__rptr_r))))),3);
    bufp->fullCData(oldp+296,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+297,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__0__KET____DOT__vld_reg____pinNumber4));
    bufp->fullCData(oldp+298,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+299,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__1__KET____DOT__vld_reg____pinNumber4));
    bufp->fullCData(oldp+300,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+301,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__2__KET____DOT__vld_reg____pinNumber4));
    bufp->fullCData(oldp+302,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+303,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__3__KET____DOT__vld_reg____pinNumber4));
    bufp->fullCData(oldp+304,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+305,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__4__KET____DOT__vld_reg____pinNumber4));
    bufp->fullCData(oldp+306,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+307,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__5__KET____DOT__vld_reg____pinNumber4));
    bufp->fullCData(oldp+308,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+309,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__6__KET____DOT__vld_reg____pinNumber4));
    bufp->fullCData(oldp+310,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber4),5);
    bufp->fullBit(oldp+311,(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4));
    bufp->fullQData(oldp+312,(((2U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__exu_Imm
                                : 4ULL)),64);
    bufp->fullQData(oldp+314,(((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                ? vlSymsp->TOP__top.__PVT__ex_pc
                                : vlSymsp->TOP__top.__PVT__ex_Rrs1)),64);
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
    bufp->fullBit(oldp+316,((1U & __Vtemp_hdd5810e3__0[2U])));
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
    bufp->fullWData(oldp+317,(__Vtemp_hef6aeef8__0),198);
    bufp->fullWData(oldp+324,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+327,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+330,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__pair_list[2]),66);
    bufp->fullQData(oldp+333,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+335,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+337,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__data_list[2]),64);
    bufp->fullBit(oldp+339,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                             & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))));
    bufp->fullBit(oldp+340,(((~ (IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we)) 
                             & (0U != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP)))));
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
    bufp->fullWData(oldp+341,(__Vtemp_h76b581e7__0),264);
    bufp->fullCData(oldp+350,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
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
    bufp->fullCData(oldp+351,(((0x80U & (((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
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
    bufp->fullCData(oldp+352,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullCData(oldp+353,(((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullBit(oldp+354,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullBit(oldp+355,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellout__witf_entries__BRA__7__KET____DOT__vld_reg____pinNumber4) 
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
    bufp->fullCData(oldp+356,(((IData)(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena)
                                ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__top.__PVT__witf__DOT__wptr_r))))),3);
    bufp->fullBit(oldp+357,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+358,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d36223a__0))));
    bufp->fullBit(oldp+359,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+360,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d32c217__0))));
    bufp->fullBit(oldp+361,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+362,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d4e02d0__0))));
    bufp->fullBit(oldp+363,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+364,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0b2ef0b4__0))));
    bufp->fullBit(oldp+365,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+366,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h467ad5de__0))));
    bufp->fullBit(oldp+367,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+368,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h46770a1e__0))));
    bufp->fullBit(oldp+369,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+370,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h0d5c35c9__0))));
    bufp->fullBit(oldp+371,((1U & ((~ (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0)) 
                                   | (IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5)))));
    bufp->fullBit(oldp+372,(((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
                             | (IData)(vlSymsp->TOP__top.witf__DOT____VdfgTmp_h08e2d86c__0))));
    bufp->fullBit(oldp+373,(((IData)(vlSymsp->TOP__top.__PVT__wb_RegWr) 
                             & (0U != (0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                                >> 7U))))));
    bufp->fullBit(oldp+374,(vlSymsp->TOP__top__WB.__PVT__isIntrPC));
    bufp->fullQData(oldp+375,(vlSymsp->TOP__top__WB.__PVT__IntrPC),64);
    bufp->fullBit(oldp+377,(vlSymsp->TOP__top__WB.__PVT__wb_valid));
    bufp->fullBit(oldp+378,(vlSymsp->TOP__top__WB.__PVT__wb_ready));
    bufp->fullQData(oldp+379,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc),64);
    bufp->fullQData(oldp+381,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec),64);
    bufp->fullQData(oldp+383,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus),64);
    bufp->fullQData(oldp+385,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie),64);
    bufp->fullBit(oldp+387,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                           >> 3U)))));
    bufp->fullBit(oldp+388,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mie 
                                           >> 7U)))));
    bufp->fullBit(oldp+389,((1U & (IData)((vlSymsp->TOP__top__WB__IntrUnit.__PVT__mstatus 
                                           >> 7U)))));
    bufp->fullQData(oldp+390,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime),64);
    bufp->fullBit(oldp+392,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mcaseReg__DOT__rst_r1));
    bufp->fullBit(oldp+393,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__mcaseReg__DOT__rst_r2));
    bufp->fullIData(oldp+394,(vlSymsp->TOP__top.__PVT__wb_inst),32);
    bufp->fullQData(oldp+395,(vlSymsp->TOP__top.__PVT__wb_pc),64);
    bufp->fullQData(oldp+397,(vlSymsp->TOP__top.__PVT__ALUres),64);
    bufp->fullCData(oldp+399,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+400,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+401,((0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+402,(vlSymsp->TOP__top.__PVT__RegWr_d));
    bufp->fullBit(oldp+403,(vlSymsp->TOP__top.__PVT__ifu_is_jump));
    bufp->fullQData(oldp+404,(((0ULL == vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)
                                ? 0x80000000ULL : vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp)),64);
    bufp->fullQData(oldp+406,(vlSymsp->TOP__top.__PVT__id_pc),64);
    bufp->fullIData(oldp+408,(vlSymsp->TOP__top.__PVT__id_inst),32);
    bufp->fullBit(oldp+409,(vlSymsp->TOP__top.__PVT__exu_isTuncate));
    bufp->fullBit(oldp+410,(vlSymsp->TOP__top.__PVT__exu_isSext));
    bufp->fullQData(oldp+411,(vlSymsp->TOP__top.__PVT__ex_Rrs2),64);
    bufp->fullBit(oldp+413,(vlSymsp->TOP__top.__PVT__exu_IntrEn));
    bufp->fullQData(oldp+414,(vlSymsp->TOP__top.__PVT__ex_pc),64);
    bufp->fullIData(oldp+416,(vlSymsp->TOP__top.__PVT__ex_inst),32);
    bufp->fullBit(oldp+417,(vlSymsp->TOP__top.__PVT__isRAW));
    bufp->fullQData(oldp+418,(vlSymsp->TOP__top.__PVT__mem_Rrs2),64);
    bufp->fullBit(oldp+420,(vlSymsp->TOP__top.__PVT__mem_IntrEn));
    bufp->fullQData(oldp+421,(vlSymsp->TOP__top.__PVT__lsu_pc),64);
    bufp->fullIData(oldp+423,(vlSymsp->TOP__top.__PVT__lsu_inst),32);
    bufp->fullBit(oldp+424,(vlSymsp->TOP__top.__PVT__wb_IntrEn));
    bufp->fullQData(oldp+425,(((IData)(vlSymsp->TOP__top.__PVT__exu_isTuncate)
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
    bufp->fullBit(oldp+427,(vlSymsp->TOP__top.__PVT__EXU__DOT__Less));
    bufp->fullBit(oldp+428,((1U & (~ (IData)((0U != vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder))))));
    bufp->fullBit(oldp+429,((1U & ((IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+430,((1U & (IData)(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
    bufp->fullQData(oldp+431,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__NextPCp),64);
    bufp->fullCData(oldp+433,(vlSymsp->TOP__top.EXU__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
    bufp->fullQData(oldp+434,((QData)((IData)((0x898537eU 
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
    bufp->fullCData(oldp+436,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+437,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+438,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+439,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+440,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+441,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+442,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
    bufp->fullCData(oldp+443,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
    bufp->fullCData(oldp+444,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
    bufp->fullCData(oldp+445,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
    bufp->fullCData(oldp+446,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
    bufp->fullCData(oldp+447,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
    bufp->fullCData(oldp+448,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
    bufp->fullCData(oldp+449,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
    bufp->fullCData(oldp+450,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
    bufp->fullBit(oldp+451,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
    bufp->fullIData(oldp+452,((0x248adfU | ((0x1000000U 
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
    bufp->fullCData(oldp+453,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+454,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+455,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+456,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+457,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[4]),4);
    bufp->fullCData(oldp+458,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[5]),4);
    bufp->fullCData(oldp+459,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__pair_list[6]),4);
    bufp->fullBit(oldp+460,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[0]));
    bufp->fullBit(oldp+461,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[1]));
    bufp->fullBit(oldp+462,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[2]));
    bufp->fullBit(oldp+463,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[3]));
    bufp->fullBit(oldp+464,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[4]));
    bufp->fullBit(oldp+465,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[5]));
    bufp->fullBit(oldp+466,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__data_list[6]));
    bufp->fullBit(oldp+467,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__lut_out));
    bufp->fullBit(oldp+468,(vlSymsp->TOP__top.__PVT__EXU__DOT__GenNextPC__DOT__jump_check__DOT__hit));
    bufp->fullQData(oldp+469,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA),64);
    bufp->fullQData(oldp+471,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB),64);
    bufp->fullQData(oldp+473,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder),64);
    bufp->fullBit(oldp+475,((((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                             >> 0x3fU))) 
                              == (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin 
                                                >> 0x3fU)))) 
                             & ((1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__adder 
                                               >> 0x3fU))) 
                                != (1U & (IData)((vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUA 
                                                  >> 0x3fU)))))));
    bufp->fullBit(oldp+476,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessS));
    bufp->fullBit(oldp+477,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__lessUS));
    bufp->fullQData(oldp+478,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__shift),64);
    bufp->fullQData(oldp+480,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__XOR),64);
    bufp->fullQData(oldp+482,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__OR),64);
    bufp->fullQData(oldp+484,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__AND),64);
    bufp->fullQData(oldp+486,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__MUL),64);
    bufp->fullQData(oldp+488,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__DIV),64);
    bufp->fullQData(oldp+490,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__REM),64);
    bufp->fullQData(oldp+492,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUout),64);
    bufp->fullQData(oldp+494,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__Adder__DOT__t_no_Cin),64);
    bufp->fullCData(oldp+496,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__ALUB))),6);
    bufp->fullCData(oldp+497,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__shamt),6);
    bufp->fullQData(oldp+498,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__sra),64);
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
    bufp->fullWData(oldp+500,(__Vtemp_h2d6007f7__0),264);
    bufp->fullWData(oldp+509,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+512,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+515,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+518,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+521,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
    bufp->fullQData(oldp+523,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
    bufp->fullQData(oldp+525,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
    bufp->fullQData(oldp+527,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
    bufp->fullQData(oldp+529,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
    bufp->fullBit(oldp+531,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
    bufp->fullQData(oldp+532,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__lut_out),64);
    bufp->fullBit(oldp+534,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deALUBsr__DOT__hit));
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
    bufp->fullWData(oldp+535,(__Vtemp_h9798c001__0),1088);
    bufp->fullWData(oldp+569,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[0]),68);
    bufp->fullWData(oldp+572,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[1]),68);
    bufp->fullWData(oldp+575,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[2]),68);
    bufp->fullWData(oldp+578,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[3]),68);
    bufp->fullWData(oldp+581,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[4]),68);
    bufp->fullWData(oldp+584,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[5]),68);
    bufp->fullWData(oldp+587,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[6]),68);
    bufp->fullWData(oldp+590,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[7]),68);
    bufp->fullWData(oldp+593,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[8]),68);
    bufp->fullWData(oldp+596,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[9]),68);
    bufp->fullWData(oldp+599,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[10]),68);
    bufp->fullWData(oldp+602,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[11]),68);
    bufp->fullWData(oldp+605,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[12]),68);
    bufp->fullWData(oldp+608,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[13]),68);
    bufp->fullWData(oldp+611,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[14]),68);
    bufp->fullWData(oldp+614,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__pair_list[15]),68);
    bufp->fullQData(oldp+617,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[0]),64);
    bufp->fullQData(oldp+619,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[1]),64);
    bufp->fullQData(oldp+621,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[2]),64);
    bufp->fullQData(oldp+623,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[3]),64);
    bufp->fullQData(oldp+625,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[4]),64);
    bufp->fullQData(oldp+627,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[5]),64);
    bufp->fullQData(oldp+629,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[6]),64);
    bufp->fullQData(oldp+631,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[7]),64);
    bufp->fullQData(oldp+633,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[8]),64);
    bufp->fullQData(oldp+635,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[9]),64);
    bufp->fullQData(oldp+637,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[10]),64);
    bufp->fullQData(oldp+639,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[11]),64);
    bufp->fullQData(oldp+641,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[12]),64);
    bufp->fullQData(oldp+643,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[13]),64);
    bufp->fullQData(oldp+645,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[14]),64);
    bufp->fullQData(oldp+647,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__data_list[15]),64);
    bufp->fullQData(oldp+649,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__lut_out),64);
    bufp->fullBit(oldp+651,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__deExtop__DOT__hit));
    bufp->fullCData(oldp+652,(vlSymsp->TOP__top.EXU__DOT__ex_alu__DOT____Vcellinp__diver__key),2);
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
    bufp->fullWData(oldp+653,(__Vtemp_hdf62be76__0),264);
    bufp->fullWData(oldp+662,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+665,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+668,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+671,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+674,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[0]),64);
    bufp->fullQData(oldp+676,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[1]),64);
    bufp->fullQData(oldp+678,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[2]),64);
    bufp->fullQData(oldp+680,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__data_list[3]),64);
    bufp->fullQData(oldp+682,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__lut_out),64);
    bufp->fullBit(oldp+684,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__diver__DOT__hit));
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
    bufp->fullWData(oldp+685,(__Vtemp_hbbbb0901__0),264);
    bufp->fullWData(oldp+694,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+697,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+700,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+703,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+706,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[0]),64);
    bufp->fullQData(oldp+708,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[1]),64);
    bufp->fullQData(oldp+710,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[2]),64);
    bufp->fullQData(oldp+712,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__data_list[3]),64);
    bufp->fullQData(oldp+714,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__lut_out),64);
    bufp->fullBit(oldp+716,(vlSymsp->TOP__top.__PVT__EXU__DOT__ex_alu__DOT__remer__DOT__hit));
    bufp->fullCData(oldp+717,((((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
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
    bufp->fullQData(oldp+718,(vlSymsp->TOP__top.__PVT__IDU__DOT__Imm_d),64);
    bufp->fullBit(oldp+720,((((0x67U != (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              & (2U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))) 
                             | ((1U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                | ((3U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)) 
                                   | (4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop)))))));
    bufp->fullCData(oldp+721,(((IData)(vlSymsp->TOP__top.IDU__DOT__ContrGenU__DOT____VdfgTmp_h27ae0f59__0)
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
    bufp->fullCData(oldp+722,(((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                ? (5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xcU)) : 
                               ((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))
                                 ? 6U : ((0x67U == 
                                          (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))
                                          ? 7U : 2U)))),3);
    bufp->fullBit(oldp+723,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemWr_d));
    bufp->fullCData(oldp+724,(vlSymsp->TOP__top.__PVT__IDU__DOT__MemOP_d),3);
    bufp->fullCData(oldp+725,(vlSymsp->TOP__top.__PVT__IDU__DOT__RegSrc_d),2);
    bufp->fullBit(oldp+726,(vlSymsp->TOP__top.__PVT__IDU__DOT__isTuncate_d));
    bufp->fullBit(oldp+727,(vlSymsp->TOP__top.__PVT__IDU__DOT__isSext_d));
    bufp->fullBit(oldp+728,(vlSymsp->TOP__top.__PVT__IDU__DOT__IntrEn_d));
    bufp->fullCData(oldp+729,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop),3);
    bufp->fullCData(oldp+730,((0x7fU & vlSymsp->TOP__top.__PVT__id_inst)),7);
    bufp->fullCData(oldp+731,((7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+732,((vlSymsp->TOP__top.__PVT__id_inst 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+733,((4U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullCData(oldp+734,((5U & (vlSymsp->TOP__top.__PVT__id_inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+735,((6U == (IData)(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__Extop))));
    bufp->fullBit(oldp+736,((0x67U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+737,((((0x33U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst)) 
                              | (0x3bU == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))) 
                             & (vlSymsp->TOP__top.__PVT__id_inst 
                                >> 0x19U))));
    bufp->fullCData(oldp+738,(((3U == (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0xcU)))
                                ? 0xaU : ((((vlSymsp->TOP__top.__PVT__id_inst 
                                             >> 0x1eU) 
                                            & (0U != 
                                               (0x7020U 
                                                & vlSymsp->TOP__top.__PVT__id_inst))) 
                                           << 3U) | 
                                          (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullCData(oldp+739,((0x10U | ((8U & (vlSymsp->TOP__top.__PVT__id_inst 
                                               >> 9U)) 
                                        | (7U & (vlSymsp->TOP__top.__PVT__id_inst 
                                                 >> 0xcU))))),5);
    bufp->fullBit(oldp+740,((0x37U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+741,((0x17U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+742,((0x23U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullBit(oldp+743,((3U == (0x7fU & vlSymsp->TOP__top.__PVT__id_inst))));
    bufp->fullIData(oldp+744,((vlSymsp->TOP__top.__PVT__id_inst 
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
    bufp->fullWData(oldp+745,(__Vtemp_hf0d68bd5__0),335);
    bufp->fullWData(oldp+756,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+759,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+762,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+765,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+768,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+771,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[0]),64);
    bufp->fullQData(oldp+773,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[1]),64);
    bufp->fullQData(oldp+775,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[2]),64);
    bufp->fullQData(oldp+777,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[3]),64);
    bufp->fullQData(oldp+779,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__data_list[4]),64);
    bufp->fullQData(oldp+781,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__lut_out),64);
    bufp->fullBit(oldp+783,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__ImmGenU__DOT__isRegWr__DOT__hit));
    bufp->fullCData(oldp+784,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__lut_out),2);
    bufp->fullBit(oldp+785,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__RegSrcMux__DOT__hit));
    bufp->fullCData(oldp+786,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__lut_out),3);
    bufp->fullBit(oldp+787,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__deExtop__DOT__hit));
    bufp->fullBit(oldp+788,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__lut_out));
    bufp->fullBit(oldp+789,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isIntr__DOT__hit));
    bufp->fullBit(oldp+790,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__lut_out));
    bufp->fullBit(oldp+791,(vlSymsp->TOP__top.__PVT__IDU__DOT__ContrGenU__DOT__isRegWr__DOT__hit));
    bufp->fullQData(oldp+792,(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC),64);
    bufp->fullBit(oldp+794,(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint));
    bufp->fullBit(oldp+795,(vlSymsp->TOP__top.__PVT__LSU__DOT__Datamem_we));
    bufp->fullBit(oldp+796,(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we));
    bufp->fullQData(oldp+797,(vlSymsp->TOP__top.__PVT__LSU__DOT__dataMem_out),64);
    bufp->fullCData(oldp+799,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                        << 3U))),6);
    bufp->fullWData(oldp+800,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__data),128);
    bufp->fullSData(oldp+804,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__extmask),16);
    bufp->fullWData(oldp+805,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
    bufp->fullWData(oldp+808,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
    bufp->fullWData(oldp+811,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
    bufp->fullWData(oldp+814,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
    bufp->fullQData(oldp+817,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
    bufp->fullQData(oldp+819,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
    bufp->fullQData(oldp+821,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
    bufp->fullQData(oldp+823,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
    bufp->fullQData(oldp+825,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__lut_out),64);
    bufp->fullBit(oldp+827,(vlSymsp->TOP__top.__PVT__LSU__DOT__DataMem__DOT__sext__DOT__hit));
    bufp->fullBit(oldp+828,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+829,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
    bufp->fullBit(oldp+830,(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__clint_we) 
                             & (0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres))));
    bufp->fullCData(oldp+831,((((IData)(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5) 
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
    bufp->fullBit(oldp+832,(vlSymsp->TOP__top.__PVT__witf__DOT__depth_gt1__DOT__wptr_flg_ena));
    bufp->fullBit(oldp+833,(vlSymsp->TOP__top.witf__DOT____Vcellinp__depth_gt1__DOT__wptr_reg____pinNumber5));
    bufp->fullBit(oldp+834,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__0__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+835,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__1__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+836,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__2__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+837,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__3__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+838,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__4__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__5__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+840,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__6__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullBit(oldp+841,(vlSymsp->TOP__top.witf__DOT____Vcellinp__witf_entries__BRA__7__KET____DOT__rdidx_reg____pinNumber5));
    bufp->fullCData(oldp+842,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+843,((0x1fU & (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0xfU))),5);
    bufp->fullSData(oldp+844,((vlSymsp->TOP__top.__PVT__wb_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+845,((7U & (vlSymsp->TOP__top.__PVT__wb_inst 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+846,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isecall));
    bufp->fullBit(oldp+847,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret));
    bufp->fullBit(oldp+848,((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+849,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus));
    bufp->fullBit(oldp+850,((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+851,((0x344U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                        >> 0x14U))));
    bufp->fullBit(oldp+852,(((0x304U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
    bufp->fullBit(oldp+853,(((0x305U == (vlSymsp->TOP__top.__PVT__wb_inst 
                                         >> 0x14U)) 
                             & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn))));
    bufp->fullBit(oldp+854,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__timer_irq));
    bufp->fullBit(oldp+855,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise));
    bufp->fullQData(oldp+856,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__eNo),64);
    bufp->fullBit(oldp+858,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc));
    bufp->fullBit(oldp+859,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase));
    bufp->fullCData(oldp+860,(vlSymsp->TOP__top__WB__IntrUnit.__Vcellinp__CSRwEn__key),2);
    bufp->fullQData(oldp+861,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
    bufp->fullBit(oldp+863,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__CSRwEn__DOT__hit));
    bufp->fullQData(oldp+864,(vlSymsp->TOP__top.__PVT__ram_rdata),64);
    bufp->fullBit(oldp+866,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r1));
    bufp->fullBit(oldp+867,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp_Reg__DOT__rst_r2));
    bufp->fullQData(oldp+868,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[0]),64);
    bufp->fullQData(oldp+870,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[1]),64);
    bufp->fullQData(oldp+872,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[2]),64);
    bufp->fullQData(oldp+874,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[3]),64);
    bufp->fullQData(oldp+876,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[4]),64);
    bufp->fullQData(oldp+878,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[5]),64);
    bufp->fullQData(oldp+880,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[6]),64);
    bufp->fullQData(oldp+882,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[7]),64);
    bufp->fullQData(oldp+884,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[8]),64);
    bufp->fullQData(oldp+886,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[9]),64);
    bufp->fullQData(oldp+888,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[10]),64);
    bufp->fullQData(oldp+890,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[11]),64);
    bufp->fullQData(oldp+892,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[12]),64);
    bufp->fullQData(oldp+894,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[13]),64);
    bufp->fullQData(oldp+896,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[14]),64);
    bufp->fullQData(oldp+898,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[15]),64);
    bufp->fullQData(oldp+900,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[16]),64);
    bufp->fullQData(oldp+902,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[17]),64);
    bufp->fullQData(oldp+904,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[18]),64);
    bufp->fullQData(oldp+906,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[19]),64);
    bufp->fullQData(oldp+908,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[20]),64);
    bufp->fullQData(oldp+910,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[21]),64);
    bufp->fullQData(oldp+912,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[22]),64);
    bufp->fullQData(oldp+914,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[23]),64);
    bufp->fullQData(oldp+916,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[24]),64);
    bufp->fullQData(oldp+918,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[25]),64);
    bufp->fullQData(oldp+920,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[26]),64);
    bufp->fullQData(oldp+922,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[27]),64);
    bufp->fullQData(oldp+924,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[28]),64);
    bufp->fullQData(oldp+926,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[29]),64);
    bufp->fullQData(oldp+928,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[30]),64);
    bufp->fullQData(oldp+930,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf[31]),64);
    bufp->fullBit(oldp+932,(vlSymsp->TOP__top.__PVT__ifu_arvalid));
    bufp->fullIData(oldp+933,((IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc)),32);
    bufp->fullBit(oldp+934,(vlSymsp->TOP__top.__PVT__idu_ready));
    bufp->fullBit(oldp+935,(vlSymsp->TOP__top.__PVT__EXU__DOT__popline_wen));
    bufp->fullBit(oldp+936,(vlSymsp->TOP__top.__PVT__IDU__DOT__popline_wen));
    bufp->fullQData(oldp+937,(vlSymsp->TOP__top.__PVT__IFU__DOT__dpc),64);
    bufp->fullBit(oldp+939,(vlSymsp->TOP__top.__PVT__LSU__DOT__popline_wen));
    bufp->fullBit(oldp+940,(vlSelf->clk));
    bufp->fullBit(oldp+941,(vlSelf->rst));
    bufp->fullIData(oldp+942,(vlSelf->Inst),32);
    bufp->fullQData(oldp+943,(vlSelf->pc),64);
    bufp->fullBit(oldp+945,(vlSelf->valid));
    bufp->fullQData(oldp+946,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                              [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0xfU))]),64);
    bufp->fullQData(oldp+948,(vlSymsp->TOP__top__WB.__PVT__RegisterFile__DOT__rf
                              [(0x1fU & (vlSymsp->TOP__top.__PVT__id_inst 
                                         >> 0x14U))]),64);
    bufp->fullBit(oldp+950,(vlSymsp->TOP__top.__PVT__exu_ready));
    bufp->fullBit(oldp+951,(vlSymsp->TOP__top.__PVT__lsu_ready));
    bufp->fullQData(oldp+952,(vlSymsp->TOP__top.__PVT__memout),64);
    bufp->fullBit(oldp+954,((((~ (IData)(vlSymsp->TOP__top.__PVT__lsu_ready)) 
                              & (IData)(vlSymsp->TOP__top.__PVT__exu_valid)) 
                             | ((IData)(vlSymsp->TOP__top.__PVT__exu_ready) 
                                & (IData)(vlSymsp->TOP__top.__VdfgTmp_h6b23342a__0)))));
    bufp->fullBit(oldp+955,(vlSymsp->TOP__top.__PVT__EXU__DOT__exu_valid_reg__DOT__rst_r1));
    bufp->fullBit(oldp+956,(vlSymsp->TOP__top.__PVT__EXU__DOT__exu_valid_reg__DOT__rst_r2));
    bufp->fullBit(oldp+957,((((~ (IData)(vlSymsp->TOP__top.__PVT__exu_ready)) 
                              & (IData)(vlSymsp->TOP__top.__PVT__idu_valid)) 
                             | ((IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_hd66fa622__0) 
                                & ((IData)(vlSymsp->TOP__top.__PVT__idu_ready) 
                                   & ((IData)(vlSymsp->TOP__top.__PVT__ifu_valid) 
                                      & (IData)(vlSymsp->TOP__top.IDU__DOT____VdfgTmp_h23869681__0)))))));
    bufp->fullBit(oldp+958,((((~ (IData)(vlSymsp->TOP__top.__PVT__idu_ready)) 
                              & (IData)(vlSymsp->TOP__top.__PVT__ifu_valid)) 
                             | (IData)(vlSymsp->TOP__top.__PVT__ifu_arvalid))));
    bufp->fullIData(oldp+959,(((0U == (7U & (IData)(vlSymsp->TOP__top.__PVT__IFU__DOT__NextPC)))
                                ? (IData)(vlSymsp->TOP__top.__PVT__ram_rdata)
                                : (IData)((vlSymsp->TOP__top.__PVT__ram_rdata 
                                           >> 0x20U)))),32);
    bufp->fullBit(oldp+960,((((~ (IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready)) 
                              & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)) 
                             | ((IData)(vlSymsp->TOP__top.__PVT__lsu_ready) 
                                & (IData)(vlSymsp->TOP__top.__PVT__exu_valid)))));
    bufp->fullQData(oldp+961,(((- (QData)((IData)(((IData)(vlSymsp->TOP__top.__PVT__LSU__DOT__isclint) 
                                                   & ((~ (IData)(vlSymsp->TOP__top.__PVT__mem_MemWr)) 
                                                      & (0U 
                                                         != (IData)(vlSymsp->TOP__top.__PVT__mem_MemOP))))))) 
                               & ((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)
                                   ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime
                                   : ((0x2004000ULL 
                                       == vlSymsp->TOP__top.__PVT__ALUres)
                                       ? vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp
                                       : 0ULL)))),64);
    bufp->fullBit(oldp+963,((vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtime 
                             > vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp)));
    bufp->fullQData(oldp+964,(vlSymsp->TOP__top.__PVT__LSU__DOT__clintU__DOT__mtimecmp),64);
    bufp->fullBit(oldp+966,((((~ (IData)(vlSymsp->TOP__top.__PVT__ifu_ready)) 
                              & (IData)(vlSymsp->TOP__top__WB.__PVT__wb_valid)) 
                             | ((IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready) 
                                & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid)))));
    bufp->fullBit(oldp+967,(((IData)(vlSymsp->TOP__top__WB.__PVT__wb_ready) 
                             & (IData)(vlSymsp->TOP__top.__PVT__lsu_valid))));
    bufp->fullQData(oldp+968,(vlSymsp->TOP__top__WB.__PVT__RegWdata),64);
    bufp->fullQData(oldp+970,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mtvec
                                : ((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)
                                    ? vlSymsp->TOP__top__WB__IntrUnit.__PVT__mepc
                                    : vlSymsp->TOP__top.__PVT__wb_pc))),64);
    bufp->fullBit(oldp+972,((((IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn) 
                              & (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismret)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullQData(oldp+973,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__lut_out),64);
    bufp->fullBit(oldp+975,(vlSymsp->TOP__top__WB.__PVT__RegWsrcMux__DOT__hit));
    bufp->fullBit(oldp+976,(vlSymsp->TOP__top__WB.__PVT__wb_IntrPC_reg__DOT__rst_r1));
    bufp->fullBit(oldp+977,(vlSymsp->TOP__top__WB.__PVT__wb_IntrPC_reg__DOT__rst_r2));
    bufp->fullQData(oldp+978,(vlSymsp->TOP__top__WB__IntrUnit.mcase),64);
    bufp->fullQData(oldp+980,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
                                ? vlSymsp->TOP__top.__PVT__wb_pc
                                : vlSymsp->TOP__top__WB__IntrUnit.__PVT__csrWData)),64);
    bufp->fullQData(oldp+982,(((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise)
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
    bufp->fullBit(oldp+984,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismcase) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+985,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismepc) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullBit(oldp+986,((((IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__ismstatus) 
                              & (IData)(vlSymsp->TOP__top.__PVT__wb_IntrEn)) 
                             | (IData)(vlSymsp->TOP__top__WB__IntrUnit.__PVT__irq_raise))));
    bufp->fullCData(oldp+987,(vlSymsp->TOP__top.__PVT__Extop),3);
    bufp->fullQData(oldp+988,(vlSymsp->TOP__top.__PVT__waddr),64);
    bufp->fullBit(oldp+990,(vlSymsp->TOP__top.__PVT__Less));
    bufp->fullBit(oldp+991,(vlSymsp->TOP__top.__PVT__Zero));
    bufp->fullQData(oldp+992,(vlSymsp->TOP__top.__PVT__MemOut),64);
    bufp->fullQData(oldp+994,(vlSymsp->TOP__top.__PVT__RegWdata),64);
    bufp->fullBit(oldp+996,(vlSymsp->TOP__top.__PVT__IntrEn));
    bufp->fullQData(oldp+997,(vlSymsp->TOP__top.__PVT__IntrOut),64);
    bufp->fullBit(oldp+999,(vlSymsp->TOP__top.__PVT__clint_we));
    bufp->fullBit(oldp+1000,(vlSymsp->TOP__top.__PVT__clint_re));
    bufp->fullQData(oldp+1001,(vlSymsp->TOP__top.__PVT__clint_dout),64);
    bufp->fullBit(oldp+1003,(1U));
    bufp->fullIData(oldp+1004,(vlSymsp->TOP__top.__PVT__AWADDR),32);
    bufp->fullBit(oldp+1005,(vlSymsp->TOP__top.__PVT__AWVALID));
    bufp->fullQData(oldp+1006,(vlSymsp->TOP__top.__PVT__WDATA),64);
    bufp->fullBit(oldp+1008,(vlSymsp->TOP__top.__PVT__WVALID));
    bufp->fullCData(oldp+1009,(vlSymsp->TOP__top.__PVT__WSTRB),8);
    bufp->fullBit(oldp+1010,(vlSymsp->TOP__top.__PVT__BREADY));
    bufp->fullIData(oldp+1011,(7U),32);
    bufp->fullIData(oldp+1012,(3U),32);
    bufp->fullIData(oldp+1013,(2U),32);
    bufp->fullIData(oldp+1014,(1U),32);
    bufp->fullCData(oldp+1015,(1U),2);
    bufp->fullIData(oldp+1016,(5U),32);
    bufp->fullIData(oldp+1017,(7U),32);
    bufp->fullBit(oldp+1018,(0U));
    bufp->fullIData(oldp+1019,(4U),32);
    bufp->fullIData(oldp+1020,(0x40U),32);
    bufp->fullIData(oldp+1021,(6U),32);
    bufp->fullQData(oldp+1022,(0ULL),64);
    bufp->fullIData(oldp+1024,(0x42U),32);
    bufp->fullIData(oldp+1025,(4U),32);
    bufp->fullIData(oldp+1026,(3U),32);
    bufp->fullIData(oldp+1027,(0x10U),32);
    bufp->fullIData(oldp+1028,(0x44U),32);
    bufp->fullIData(oldp+1029,(0x10U),32);
    bufp->fullIData(oldp+1030,(0U),32);
    bufp->fullIData(oldp+1031,(0x20U),32);
    bufp->fullIData(oldp+1032,(0x43U),32);
    bufp->fullIData(oldp+1033,(5U),32);
    bufp->fullCData(oldp+1034,(0U),2);
    bufp->fullIData(oldp+1035,(0x1bceU),18);
    bufp->fullIData(oldp+1036,(9U),32);
    bufp->fullIData(oldp+1037,(2U),32);
    bufp->fullIData(oldp+1038,(0xcU),32);
    bufp->fullCData(oldp+1039,(0U),3);
    __Vtemp_hd6f60a5b__0[0U] = 0x37eceb9aU;
    __Vtemp_hd6f60a5b__0[1U] = 0xd46c1ac7U;
    __Vtemp_hd6f60a5b__0[2U] = 0x65d92f5bU;
    __Vtemp_hd6f60a5b__0[3U] = 0x268da6U;
    bufp->fullWData(oldp+1040,(__Vtemp_hd6f60a5b__0),120);
    bufp->fullIData(oldp+1044,(0xaU),32);
    bufp->fullIData(oldp+1045,(0xcU),32);
    bufp->fullCData(oldp+1046,(0xe7U),8);
    bufp->fullIData(oldp+1047,(8U),32);
    bufp->fullIData(oldp+1048,(1U),32);
    bufp->fullSData(oldp+1049,(0x35bdU),16);
    bufp->fullCData(oldp+1050,(0U),5);
    bufp->fullIData(oldp+1051,(2U),32);
    bufp->fullBit(oldp+1052,(0U));
    bufp->fullQData(oldp+1053,(0x7ffffff8ULL),64);
    bufp->fullQData(oldp+1055,(0x7ffffffcULL),64);
    bufp->fullCData(oldp+1057,(0U),8);
    bufp->fullQData(oldp+1058,(0xc060343cffULL),40);
    bufp->fullQData(oldp+1060,(0xffffffffffffffffULL),64);
    bufp->fullBit(oldp+1062,(vlSymsp->TOP__top.__PVT__ram_axi_lite_u__DOT__raddr_done));
    bufp->fullBit(oldp+1063,(vlSymsp->TOP__top__WB__IntrUnit.__PVT__isCSRw));
    __Vtemp_h058c0b04__0[0U] = 7U;
    __Vtemp_h058c0b04__0[1U] = 0x80000000U;
    __Vtemp_h058c0b04__0[2U] = 0x2eU;
    __Vtemp_h058c0b04__0[3U] = 0U;
    __Vtemp_h058c0b04__0[4U] = 4U;
    bufp->fullWData(oldp+1064,(__Vtemp_h058c0b04__0),132);
    bufp->fullQData(oldp+1069,(0xa00001800ULL),64);
    bufp->fullIData(oldp+1071,(6U),32);
}
