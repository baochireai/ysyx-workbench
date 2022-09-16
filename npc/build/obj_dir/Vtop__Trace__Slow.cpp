// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+386,"clk", false,-1);
        tracep->declBit(c+387,"rst", false,-1);
        tracep->declBus(c+388,"Inst", false,-1, 31,0);
        tracep->declQuad(c+389,"pc", false,-1, 63,0);
        tracep->declBit(c+386,"top clk", false,-1);
        tracep->declBit(c+387,"top rst", false,-1);
        tracep->declBus(c+388,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+389,"top pc", false,-1, 63,0);
        tracep->declQuad(c+389,"top raddr", false,-1, 63,0);
        tracep->declQuad(c+43,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+402,"top waddr", false,-1, 63,0);
        tracep->declQuad(c+404,"top wdata", false,-1, 63,0);
        tracep->declBus(c+406,"top wmask", false,-1, 7,0);
        tracep->declQuad(c+45,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+47,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+49,"top ALUct", false,-1, 3,0);
        tracep->declBus(c+50,"top Extop", false,-1, 2,0);
        tracep->declBit(c+51,"top RegWr", false,-1);
        tracep->declBit(c+52,"top ALUAsr", false,-1);
        tracep->declBus(c+53,"top ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+54,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+56,"top ALUres", false,-1, 63,0);
        tracep->declQuad(c+391,"top NextPC", false,-1, 63,0);
        tracep->declBus(c+58,"top Branch", false,-1, 2,0);
        tracep->declBit(c+59,"top Less", false,-1);
        tracep->declBit(c+60,"top Zero", false,-1);
        tracep->declBus(c+61,"top MemOP", false,-1, 2,0);
        tracep->declBit(c+62,"top MemtoReg", false,-1);
        tracep->declBit(c+63,"top MemWr", false,-1);
        tracep->declQuad(c+64,"top MemOut", false,-1, 63,0);
        tracep->declQuad(c+66,"top RegWdata", false,-1, 63,0);
        tracep->declBit(c+386,"top PC clk", false,-1);
        tracep->declBit(c+387,"top PC rst", false,-1);
        tracep->declQuad(c+391,"top PC NextPC", false,-1, 63,0);
        tracep->declQuad(c+389,"top PC pc", false,-1, 63,0);
        tracep->declBus(c+407,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+408,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+386,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+387,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+391,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+389,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+410,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+58,"top GenNextPC Branch", false,-1, 2,0);
        tracep->declQuad(c+54,"top GenNextPC imm", false,-1, 63,0);
        tracep->declQuad(c+389,"top GenNextPC PC", false,-1, 63,0);
        tracep->declQuad(c+45,"top GenNextPC R_rs1", false,-1, 63,0);
        tracep->declBit(c+59,"top GenNextPC Less", false,-1);
        tracep->declBit(c+60,"top GenNextPC Zero", false,-1);
        tracep->declQuad(c+391,"top GenNextPC NextPC", false,-1, 63,0);
        tracep->declBit(c+68,"top GenNextPC PCAsrc", false,-1);
        tracep->declBit(c+69,"top GenNextPC PCBsrc", false,-1);
        tracep->declQuad(c+70,"top GenNextPC Asrc", false,-1, 63,0);
        tracep->declQuad(c+393,"top GenNextPC Bsrc", false,-1, 63,0);
        tracep->declBus(c+411,"top GenNextPC dePCsrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+412,"top GenNextPC dePCsrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+413,"top GenNextPC dePCsrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top GenNextPC dePCsrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+72,"top GenNextPC dePCsrc out", false,-1, 1,0);
        tracep->declBus(c+58,"top GenNextPC dePCsrc key", false,-1, 2,0);
        tracep->declBus(c+415,"top GenNextPC dePCsrc default_out", false,-1, 1,0);
        tracep->declBus(c+73,"top GenNextPC dePCsrc lut", false,-1, 24,0);
        tracep->declBus(c+411,"top GenNextPC dePCsrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+74+i*1,"top GenNextPC dePCsrc pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+79+i*1,"top GenNextPC dePCsrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+84+i*1,"top GenNextPC dePCsrc data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+89,"top GenNextPC dePCsrc lut_out", false,-1, 1,0);
        tracep->declBit(c+90,"top GenNextPC dePCsrc hit", false,-1);
        tracep->declBus(c+416,"top GenNextPC dePCsrc i", false,-1, 31,0);
        tracep->declBus(c+411,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+407,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+395,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+396,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+397,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+45,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+47,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+386,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+66,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+51,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+91+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+398,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+399,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+400,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+49,"top ContrGen ALUct", false,-1, 3,0);
        tracep->declBus(c+50,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+51,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+52,"top ContrGen ALUAsr", false,-1);
        tracep->declBus(c+53,"top ContrGen ALUBsr", false,-1, 1,0);
        tracep->declBus(c+58,"top ContrGen Branch", false,-1, 2,0);
        tracep->declBit(c+63,"top ContrGen MemWr", false,-1);
        tracep->declBus(c+61,"top ContrGen MemOP", false,-1, 2,0);
        tracep->declBit(c+62,"top ContrGen MemtoReg", false,-1);
        tracep->declBus(c+417,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+418,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+412,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+50,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+398,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+419,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declArray(c+420,"top ContrGen deExtop lut", false,-1, 89,0);
        tracep->declBus(c+423,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+1+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+10+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+19+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+155,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+156,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+424,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+425,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+412,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+51,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+50,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+426,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+427,"top ContrGen isRegWr lut", false,-1, 15,0);
        tracep->declBus(c+425,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+28+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+32+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+36+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+157,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+158,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+428,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+401,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+50,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+54,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+411,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+412,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+407,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+54,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+50,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+429,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+159,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+431,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+170+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+185+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+190+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+200,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+202,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+416,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+52,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+389,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+45,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBus(c+53,"top ALU ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+54,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+47,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+49,"top ALU ALUct", false,-1, 3,0);
        tracep->declQuad(c+56,"top ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+59,"top ALU Less", false,-1);
        tracep->declBit(c+60,"top ALU Zero", false,-1);
        tracep->declQuad(c+203,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+205,"top ALU ALUB", false,-1, 63,0);
        tracep->declBit(c+207,"top ALU US_S", false,-1);
        tracep->declBit(c+208,"top ALU Sub_Add", false,-1);
        tracep->declBit(c+207,"top ALU A_L", false,-1);
        tracep->declBit(c+209,"top ALU L_R", false,-1);
        tracep->declQuad(c+210,"top ALU adder", false,-1, 63,0);
        tracep->declBit(c+212,"top ALU Carry", false,-1);
        tracep->declBit(c+213,"top ALU Overflow", false,-1);
        tracep->declBit(c+214,"top ALU lessS", false,-1);
        tracep->declBit(c+215,"top ALU lessUS", false,-1);
        tracep->declQuad(c+216,"top ALU shift", false,-1, 63,0);
        tracep->declQuad(c+218,"top ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+220,"top ALU OR", false,-1, 63,0);
        tracep->declQuad(c+222,"top ALU AND", false,-1, 63,0);
        tracep->declBus(c+412,"top ALU deALUBsr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+413,"top ALU deALUBsr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+407,"top ALU deALUBsr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top ALU deALUBsr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+205,"top ALU deALUBsr out", false,-1, 63,0);
        tracep->declBus(c+53,"top ALU deALUBsr key", false,-1, 1,0);
        tracep->declQuad(c+429,"top ALU deALUBsr default_out", false,-1, 63,0);
        tracep->declArray(c+224,"top ALU deALUBsr lut", false,-1, 197,0);
        tracep->declBus(c+432,"top ALU deALUBsr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+231+i*3,"top ALU deALUBsr pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+240+i*1,"top ALU deALUBsr key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+243+i*2,"top ALU deALUBsr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+249,"top ALU deALUBsr lut_out", false,-1, 63,0);
        tracep->declBit(c+251,"top ALU deALUBsr hit", false,-1);
        tracep->declBus(c+433,"top ALU deALUBsr i", false,-1, 31,0);
        tracep->declBus(c+407,"top ALU Adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+203,"top ALU Adder A", false,-1, 63,0);
        tracep->declQuad(c+205,"top ALU Adder B", false,-1, 63,0);
        tracep->declBit(c+208,"top ALU Adder Cin", false,-1);
        tracep->declQuad(c+210,"top ALU Adder Result", false,-1, 63,0);
        tracep->declBit(c+212,"top ALU Adder Carry", false,-1);
        tracep->declBit(c+213,"top ALU Adder Overflow", false,-1);
        tracep->declBit(c+60,"top ALU Adder zero", false,-1);
        tracep->declQuad(c+252,"top ALU Adder t_no_Cin", false,-1, 63,0);
        tracep->declBus(c+407,"top ALU BarrelShifter DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+434,"top ALU BarrelShifter SHT_LEN", false,-1, 31,0);
        tracep->declQuad(c+203,"top ALU BarrelShifter din", false,-1, 63,0);
        tracep->declBus(c+254,"top ALU BarrelShifter shamt", false,-1, 5,0);
        tracep->declBit(c+207,"top ALU BarrelShifter A_L", false,-1);
        tracep->declBit(c+209,"top ALU BarrelShifter L_R", false,-1);
        tracep->declQuad(c+216,"top ALU BarrelShifter dout", false,-1, 63,0);
        tracep->declBus(c+425,"top ALU BarrelShifter ShifterMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+413,"top ALU BarrelShifter ShifterMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+407,"top ALU BarrelShifter ShifterMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top ALU BarrelShifter ShifterMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+216,"top ALU BarrelShifter ShifterMux out", false,-1, 63,0);
        tracep->declBus(c+255,"top ALU BarrelShifter ShifterMux key", false,-1, 1,0);
        tracep->declQuad(c+429,"top ALU BarrelShifter ShifterMux default_out", false,-1, 63,0);
        tracep->declArray(c+256,"top ALU BarrelShifter ShifterMux lut", false,-1, 263,0);
        tracep->declBus(c+432,"top ALU BarrelShifter ShifterMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+265+i*3,"top ALU BarrelShifter ShifterMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+277+i*1,"top ALU BarrelShifter ShifterMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+281+i*2,"top ALU BarrelShifter ShifterMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+289,"top ALU BarrelShifter ShifterMux lut_out", false,-1, 63,0);
        tracep->declBit(c+291,"top ALU BarrelShifter ShifterMux hit", false,-1);
        tracep->declBus(c+428,"top ALU BarrelShifter ShifterMux i", false,-1, 31,0);
        tracep->declBus(c+435,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+412,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+407,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+56,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+292,"top ALU deExtop key", false,-1, 2,0);
        tracep->declQuad(c+429,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+293,"top ALU deExtop lut", false,-1, 535,0);
        tracep->declBus(c+431,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+310+i*3,"top ALU deExtop pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+334+i*1,"top ALU deExtop key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+342+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+358,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+360,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+436,"top ALU deExtop i", false,-1, 31,0);
        tracep->declQuad(c+56,"top DataMem Addr", false,-1, 63,0);
        tracep->declBus(c+61,"top DataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+47,"top DataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+63,"top DataMem WrEn", false,-1);
        tracep->declQuad(c+64,"top DataMem DataOut", false,-1, 63,0);
        tracep->declBus(c+361,"top DataMem wmask", false,-1, 7,0);
        tracep->declQuad(c+362,"top DataMem raddr", false,-1, 63,0);
        tracep->declBus(c+414,"top DataMem deMemOP NR_KEY", false,-1, 31,0);
        tracep->declBus(c+412,"top DataMem deMemOP KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+435,"top DataMem deMemOP DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top DataMem deMemOP HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+361,"top DataMem deMemOP out", false,-1, 7,0);
        tracep->declBus(c+61,"top DataMem deMemOP key", false,-1, 2,0);
        tracep->declBus(c+437,"top DataMem deMemOP default_out", false,-1, 7,0);
        tracep->declBus(c+438,"top DataMem deMemOP lut", false,-1, 10,0);
        tracep->declBus(c+439,"top DataMem deMemOP PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+40+i*1,"top DataMem deMemOP pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+41+i*1,"top DataMem deMemOP key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+42+i*1,"top DataMem deMemOP data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+364,"top DataMem deMemOP lut_out", false,-1, 7,0);
        tracep->declBit(c+365,"top DataMem deMemOP hit", false,-1);
        tracep->declBus(c+440,"top DataMem deMemOP i", false,-1, 31,0);
        tracep->declBus(c+413,"top RegWsrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+414,"top RegWsrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+407,"top RegWsrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+414,"top RegWsrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+66,"top RegWsrcMux out", false,-1, 63,0);
        tracep->declBus(c+62,"top RegWsrcMux key", false,-1, 0,0);
        tracep->declQuad(c+429,"top RegWsrcMux default_out", false,-1, 63,0);
        tracep->declArray(c+366,"top RegWsrcMux lut", false,-1, 129,0);
        tracep->declBus(c+441,"top RegWsrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+371+i*3,"top RegWsrcMux pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+377+i*1,"top RegWsrcMux key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+379+i*2,"top RegWsrcMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+383,"top RegWsrcMux lut_out", false,-1, 63,0);
        tracep->declBit(c+385,"top RegWsrcMux hit", false,-1);
        tracep->declBus(c+442,"top RegWsrcMux i", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp444;
    VlWide<3>/*95:0*/ __Vtemp445;
    VlWide<3>/*95:0*/ __Vtemp446;
    VlWide<3>/*95:0*/ __Vtemp447;
    VlWide<3>/*95:0*/ __Vtemp448;
    VlWide<3>/*95:0*/ __Vtemp451;
    VlWide<3>/*95:0*/ __Vtemp452;
    VlWide<3>/*95:0*/ __Vtemp453;
    VlWide<3>/*95:0*/ __Vtemp454;
    VlWide<3>/*95:0*/ __Vtemp455;
    VlWide<3>/*95:0*/ __Vtemp458;
    VlWide<3>/*95:0*/ __Vtemp459;
    VlWide<3>/*95:0*/ __Vtemp460;
    VlWide<3>/*95:0*/ __Vtemp461;
    VlWide<3>/*95:0*/ __Vtemp462;
    VlWide<3>/*95:0*/ __Vtemp464;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+4,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+5,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+6,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
        tracep->fullSData(oldp+7,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
        tracep->fullSData(oldp+8,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
        tracep->fullSData(oldp+9,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
        tracep->fullSData(oldp+40,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),11);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),3);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__R_rs1),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__R_rs2),64);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__ALUct),4);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__Extop),3);
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__RegWr));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__ALUAsr));
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__ALUBsr),2);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__Imm),64);
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__ALUres),64);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__Branch),3);
        VL_EXTEND_WQ(65,64, __Vtemp444, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp445, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp446, __Vtemp444, __Vtemp445);
        VL_EXTEND_WI(65,1, __Vtemp447, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp448, __Vtemp446, __Vtemp447);
        tracep->fullBit(oldp+59,((1U & ((8U & (IData)(vlSelf->top__DOT__ALUct))
                                         ? ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                            ^ (1U & 
                                               __Vtemp448[2U]))
                                         : ((IData)(
                                                    (vlSelf->top__DOT__ALU__DOT__adder 
                                                     >> 0x3fU)) 
                                            ^ (((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                            >> 0x3fU))) 
                                                == 
                                                (1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                               & ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ALU__DOT__adder 
                                                              >> 0x3fU))) 
                                                  != 
                                                  (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                              >> 0x3fU))))))))));
        tracep->fullBit(oldp+60,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ALU__DOT__adder))))));
        tracep->fullCData(oldp+61,(vlSelf->top__DOT__MemOP),3);
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__MemtoReg));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__MemWr));
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__MemOut),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__RegWdata),64);
        tracep->fullBit(oldp+68,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                        >> 1U))));
        tracep->fullBit(oldp+69,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        tracep->fullQData(oldp+70,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                     ? vlSelf->top__DOT__Imm
                                     : 4ULL)),64);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        tracep->fullIData(oldp+73,(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut),25);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        tracep->fullBit(oldp+90,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
        tracep->fullCData(oldp+155,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+158,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullWData(oldp+159,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+170,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+173,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+176,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+179,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+182,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+185,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+186,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+187,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+188,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+189,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__ALU__DOT__ALUA),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
        tracep->fullBit(oldp+207,((1U & ((IData)(vlSelf->top__DOT__ALUct) 
                                         >> 3U))));
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        tracep->fullBit(oldp+209,((1U == (7U & (IData)(vlSelf->top__DOT__ALUct)))));
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__ALU__DOT__adder),64);
        VL_EXTEND_WQ(65,64, __Vtemp451, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp452, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp453, __Vtemp451, __Vtemp452);
        VL_EXTEND_WI(65,1, __Vtemp454, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp455, __Vtemp453, __Vtemp454);
        tracep->fullBit(oldp+212,((1U & __Vtemp455[2U])));
        tracep->fullBit(oldp+213,((((1U & (IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                      >> 0x3fU)))) 
                                   & ((1U & (IData)(
                                                    (vlSelf->top__DOT__ALU__DOT__adder 
                                                     >> 0x3fU))) 
                                      != (1U & (IData)(
                                                       (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                        >> 0x3fU)))))));
        tracep->fullBit(oldp+214,((1U & ((IData)((vlSelf->top__DOT__ALU__DOT__adder 
                                                  >> 0x3fU)) 
                                         ^ (((1U & (IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                            >> 0x3fU))) 
                                             == (1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                            & ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__ALU__DOT__adder 
                                                           >> 0x3fU))) 
                                               != (1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__ALU__DOT__ALUA 
                                                              >> 0x3fU)))))))));
        VL_EXTEND_WQ(65,64, __Vtemp458, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp459, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp460, __Vtemp458, __Vtemp459);
        VL_EXTEND_WI(65,1, __Vtemp461, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp462, __Vtemp460, __Vtemp461);
        tracep->fullBit(oldp+215,((1U & ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                         ^ (1U & __Vtemp462[2U])))));
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__ALU__DOT__shift),64);
        tracep->fullQData(oldp+218,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     ^ vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+220,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     | vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+222,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     & vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullWData(oldp+224,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
        tracep->fullWData(oldp+231,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+234,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+237,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+240,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        tracep->fullCData(oldp+241,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        tracep->fullCData(oldp+242,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        tracep->fullBit(oldp+251,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        tracep->fullCData(oldp+254,((0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))),6);
        tracep->fullCData(oldp+255,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        tracep->fullWData(oldp+256,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
        tracep->fullWData(oldp+265,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+268,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+271,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+274,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+277,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+278,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+279,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        tracep->fullCData(oldp+280,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        tracep->fullCData(oldp+292,((7U & (IData)(vlSelf->top__DOT__ALUct))),3);
        tracep->fullWData(oldp+293,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),536);
        tracep->fullWData(oldp+310,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+313,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+316,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+319,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+322,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+325,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+328,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6]),67);
        tracep->fullWData(oldp+331,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7]),67);
        tracep->fullCData(oldp+334,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),3);
        tracep->fullCData(oldp+335,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),3);
        tracep->fullCData(oldp+336,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2]),3);
        tracep->fullCData(oldp+337,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3]),3);
        tracep->fullCData(oldp+338,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4]),3);
        tracep->fullCData(oldp+339,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5]),3);
        tracep->fullCData(oldp+340,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6]),3);
        tracep->fullCData(oldp+341,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7]),3);
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+344,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        tracep->fullQData(oldp+346,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        tracep->fullQData(oldp+348,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        tracep->fullQData(oldp+350,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        tracep->fullQData(oldp+352,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        tracep->fullQData(oldp+354,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        tracep->fullQData(oldp+356,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullCData(oldp+361,(vlSelf->top__DOT__DataMem__DOT__wmask),8);
        tracep->fullQData(oldp+362,(((0U == (IData)(vlSelf->top__DOT__MemOP))
                                      ? 0x80000000ULL
                                      : vlSelf->top__DOT__ALUres)),64);
        tracep->fullCData(oldp+364,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        tracep->fullBit(oldp+365,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit));
        tracep->fullWData(oldp+366,(vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut),130);
        tracep->fullWData(oldp+371,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+374,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+377,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0]));
        tracep->fullBit(oldp+378,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1]));
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+383,(vlSelf->top__DOT__RegWsrcMux__DOT__lut_out),64);
        tracep->fullBit(oldp+385,(vlSelf->top__DOT__RegWsrcMux__DOT__hit));
        tracep->fullBit(oldp+386,(vlSelf->clk));
        tracep->fullBit(oldp+387,(vlSelf->rst));
        tracep->fullIData(oldp+388,(vlSelf->Inst),32);
        tracep->fullQData(oldp+389,(vlSelf->pc),64);
        tracep->fullQData(oldp+391,((0xfffffffffffffffeULL 
                                     & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->top__DOT__Imm
                                          : 4ULL) + 
                                        ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->pc
                                          : vlSelf->top__DOT__R_rs1)))),64);
        tracep->fullQData(oldp+393,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->fullCData(oldp+395,((0x1fU & (vlSelf->Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+396,((0x1fU & (vlSelf->Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+397,((0x1fU & (vlSelf->Inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+398,((0x7fU & vlSelf->Inst)),7);
        tracep->fullCData(oldp+399,((7U & (vlSelf->Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+400,((vlSelf->Inst >> 0x19U)),7);
        tracep->fullIData(oldp+401,((vlSelf->Inst >> 7U)),25);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__waddr),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__wdata),64);
        tracep->fullCData(oldp+406,(vlSelf->top__DOT__wmask),8);
        tracep->fullIData(oldp+407,(0x40U),32);
        tracep->fullQData(oldp+408,(0x80000000ULL),64);
        tracep->fullBit(oldp+410,(1U));
        tracep->fullIData(oldp+411,(5U),32);
        tracep->fullIData(oldp+412,(3U),32);
        tracep->fullIData(oldp+413,(2U),32);
        tracep->fullIData(oldp+414,(1U),32);
        tracep->fullCData(oldp+415,(1U),2);
        tracep->fullIData(oldp+416,(5U),32);
        tracep->fullIData(oldp+417,(9U),32);
        tracep->fullIData(oldp+418,(7U),32);
        tracep->fullCData(oldp+419,(0U),3);
        __Vtemp464[0U] = 0xb3a46f1cU;
        __Vtemp464[1U] = 0x92f5bddfU;
        __Vtemp464[2U] = 0x9a0699U;
        tracep->fullWData(oldp+420,(__Vtemp464),90);
        tracep->fullIData(oldp+423,(0xaU),32);
        tracep->fullIData(oldp+424,(9U),32);
        tracep->fullIData(oldp+425,(4U),32);
        tracep->fullBit(oldp+426,(0U));
        tracep->fullSData(oldp+427,(0x35bdU),16);
        tracep->fullIData(oldp+428,(4U),32);
        tracep->fullQData(oldp+429,(0ULL),64);
        tracep->fullIData(oldp+431,(0x43U),32);
        tracep->fullIData(oldp+432,(0x42U),32);
        tracep->fullIData(oldp+433,(3U),32);
        tracep->fullIData(oldp+434,(6U),32);
        tracep->fullIData(oldp+435,(8U),32);
        tracep->fullIData(oldp+436,(8U),32);
        tracep->fullCData(oldp+437,(0U),8);
        tracep->fullSData(oldp+438,(0x1ffU),11);
        tracep->fullIData(oldp+439,(0xbU),32);
        tracep->fullIData(oldp+440,(1U),32);
        tracep->fullIData(oldp+441,(0x41U),32);
        tracep->fullIData(oldp+442,(2U),32);
    }
}
