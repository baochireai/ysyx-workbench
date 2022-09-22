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
        tracep->declBit(c+463,"clk", false,-1);
        tracep->declBit(c+464,"rst", false,-1);
        tracep->declBus(c+465,"Inst", false,-1, 31,0);
        tracep->declQuad(c+466,"pc", false,-1, 63,0);
        tracep->declBit(c+463,"top clk", false,-1);
        tracep->declBit(c+464,"top rst", false,-1);
        tracep->declBus(c+465,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+466,"top pc", false,-1, 63,0);
        tracep->declQuad(c+466,"top raddr", false,-1, 63,0);
        tracep->declQuad(c+58,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+479,"top waddr", false,-1, 63,0);
        tracep->declQuad(c+481,"top wdata", false,-1, 63,0);
        tracep->declBus(c+483,"top wmask", false,-1, 7,0);
        tracep->declQuad(c+60,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+62,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+64,"top ALUct", false,-1, 3,0);
        tracep->declBus(c+65,"top Extop", false,-1, 2,0);
        tracep->declBit(c+66,"top RegWr", false,-1);
        tracep->declBit(c+67,"top ALUAsr", false,-1);
        tracep->declBus(c+68,"top ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+69,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+71,"top ALUres", false,-1, 63,0);
        tracep->declQuad(c+468,"top NextPC", false,-1, 63,0);
        tracep->declBus(c+73,"top Branch", false,-1, 2,0);
        tracep->declBit(c+74,"top Less", false,-1);
        tracep->declBit(c+75,"top Zero", false,-1);
        tracep->declBus(c+76,"top MemOP", false,-1, 2,0);
        tracep->declBit(c+77,"top MemtoReg", false,-1);
        tracep->declBit(c+78,"top MemWr", false,-1);
        tracep->declQuad(c+79,"top MemOut", false,-1, 63,0);
        tracep->declQuad(c+81,"top RegWdata", false,-1, 63,0);
        tracep->declBit(c+83,"top isTuncate", false,-1);
        tracep->declBit(c+84,"top isSext", false,-1);
        tracep->declBit(c+463,"top PC clk", false,-1);
        tracep->declBit(c+464,"top PC rst", false,-1);
        tracep->declQuad(c+468,"top PC NextPC", false,-1, 63,0);
        tracep->declQuad(c+466,"top PC pc", false,-1, 63,0);
        tracep->declBus(c+484,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+485,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+463,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+464,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+468,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+466,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+487,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+73,"top GenNextPC Branch", false,-1, 2,0);
        tracep->declQuad(c+69,"top GenNextPC imm", false,-1, 63,0);
        tracep->declQuad(c+466,"top GenNextPC PC", false,-1, 63,0);
        tracep->declQuad(c+60,"top GenNextPC R_rs1", false,-1, 63,0);
        tracep->declBit(c+74,"top GenNextPC Less", false,-1);
        tracep->declBit(c+75,"top GenNextPC Zero", false,-1);
        tracep->declQuad(c+468,"top GenNextPC NextPC", false,-1, 63,0);
        tracep->declBit(c+85,"top GenNextPC PCAsrc", false,-1);
        tracep->declBit(c+86,"top GenNextPC PCBsrc", false,-1);
        tracep->declQuad(c+87,"top GenNextPC Asrc", false,-1, 63,0);
        tracep->declQuad(c+470,"top GenNextPC Bsrc", false,-1, 63,0);
        tracep->declBus(c+488,"top GenNextPC dePCsrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+489,"top GenNextPC dePCsrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+490,"top GenNextPC dePCsrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top GenNextPC dePCsrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+89,"top GenNextPC dePCsrc out", false,-1, 1,0);
        tracep->declBus(c+73,"top GenNextPC dePCsrc key", false,-1, 2,0);
        tracep->declBus(c+492,"top GenNextPC dePCsrc default_out", false,-1, 1,0);
        tracep->declQuad(c+90,"top GenNextPC dePCsrc lut", false,-1, 34,0);
        tracep->declBus(c+493,"top GenNextPC dePCsrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+92+i*1,"top GenNextPC dePCsrc pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+99+i*1,"top GenNextPC dePCsrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+106+i*1,"top GenNextPC dePCsrc data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+113,"top GenNextPC dePCsrc lut_out", false,-1, 1,0);
        tracep->declBit(c+114,"top GenNextPC dePCsrc hit", false,-1);
        tracep->declBus(c+494,"top GenNextPC dePCsrc i", false,-1, 31,0);
        tracep->declBus(c+493,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+484,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+472,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+473,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+474,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+60,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+62,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+463,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+81,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+66,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+115+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+475,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+476,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+477,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+64,"top ContrGen ALUct", false,-1, 3,0);
        tracep->declBus(c+65,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+66,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+67,"top ContrGen ALUAsr", false,-1);
        tracep->declBus(c+68,"top ContrGen ALUBsr", false,-1, 1,0);
        tracep->declBus(c+73,"top ContrGen Branch", false,-1, 2,0);
        tracep->declBit(c+78,"top ContrGen MemWr", false,-1);
        tracep->declBus(c+76,"top ContrGen MemOP", false,-1, 2,0);
        tracep->declBit(c+77,"top ContrGen MemtoReg", false,-1);
        tracep->declBit(c+83,"top ContrGen isTuncate", false,-1);
        tracep->declBit(c+84,"top ContrGen isSext", false,-1);
        tracep->declBus(c+495,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+488,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+489,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+65,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+475,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+496,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declArray(c+497,"top ContrGen deExtop lut", false,-1, 109,0);
        tracep->declBus(c+501,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+1+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+12+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBus(c+23+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+179,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+180,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+502,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+503,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+489,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+66,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+65,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+504,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+505,"top ContrGen isRegWr lut", false,-1, 15,0);
        tracep->declBus(c+503,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+34+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+38+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+42+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+181,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+182,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+506,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+478,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+65,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+69,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+493,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+489,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+484,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+69,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+65,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+507,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+183,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+509,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+194+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+209+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+214+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+224,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+226,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+510,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+67,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+466,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+60,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBus(c+68,"top ALU ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+69,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+62,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+64,"top ALU ALUct", false,-1, 3,0);
        tracep->declBit(c+83,"top ALU isTuncate", false,-1);
        tracep->declBit(c+84,"top ALU isSext", false,-1);
        tracep->declQuad(c+71,"top ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+74,"top ALU Less", false,-1);
        tracep->declBit(c+75,"top ALU Zero", false,-1);
        tracep->declQuad(c+227,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+229,"top ALU ALUB", false,-1, 63,0);
        tracep->declBit(c+231,"top ALU US_S", false,-1);
        tracep->declBit(c+232,"top ALU Sub_Add", false,-1);
        tracep->declBit(c+231,"top ALU A_L", false,-1);
        tracep->declBit(c+233,"top ALU L_R", false,-1);
        tracep->declQuad(c+234,"top ALU adder", false,-1, 63,0);
        tracep->declBit(c+236,"top ALU Carry", false,-1);
        tracep->declBit(c+237,"top ALU Overflow", false,-1);
        tracep->declBit(c+238,"top ALU lessS", false,-1);
        tracep->declBit(c+239,"top ALU lessUS", false,-1);
        tracep->declQuad(c+240,"top ALU shift", false,-1, 63,0);
        tracep->declQuad(c+242,"top ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+244,"top ALU OR", false,-1, 63,0);
        tracep->declQuad(c+246,"top ALU AND", false,-1, 63,0);
        tracep->declQuad(c+248,"top ALU MUL", false,-1, 63,0);
        tracep->declQuad(c+250,"top ALU DIV", false,-1, 63,0);
        tracep->declQuad(c+252,"top ALU REM", false,-1, 63,0);
        tracep->declQuad(c+254,"top ALU ALUout", false,-1, 63,0);
        tracep->declBus(c+489,"top ALU deALUBsr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+490,"top ALU deALUBsr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+484,"top ALU deALUBsr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top ALU deALUBsr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+229,"top ALU deALUBsr out", false,-1, 63,0);
        tracep->declBus(c+68,"top ALU deALUBsr key", false,-1, 1,0);
        tracep->declQuad(c+507,"top ALU deALUBsr default_out", false,-1, 63,0);
        tracep->declArray(c+256,"top ALU deALUBsr lut", false,-1, 197,0);
        tracep->declBus(c+511,"top ALU deALUBsr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+263+i*3,"top ALU deALUBsr pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+272+i*1,"top ALU deALUBsr key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+275+i*2,"top ALU deALUBsr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+281,"top ALU deALUBsr lut_out", false,-1, 63,0);
        tracep->declBit(c+283,"top ALU deALUBsr hit", false,-1);
        tracep->declBus(c+512,"top ALU deALUBsr i", false,-1, 31,0);
        tracep->declBus(c+484,"top ALU Adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+227,"top ALU Adder A", false,-1, 63,0);
        tracep->declQuad(c+229,"top ALU Adder B", false,-1, 63,0);
        tracep->declBit(c+232,"top ALU Adder Cin", false,-1);
        tracep->declQuad(c+234,"top ALU Adder Result", false,-1, 63,0);
        tracep->declBit(c+236,"top ALU Adder Carry", false,-1);
        tracep->declBit(c+237,"top ALU Adder Overflow", false,-1);
        tracep->declBit(c+75,"top ALU Adder zero", false,-1);
        tracep->declQuad(c+284,"top ALU Adder t_no_Cin", false,-1, 63,0);
        tracep->declBus(c+484,"top ALU BarrelShifter DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+513,"top ALU BarrelShifter SHT_LEN", false,-1, 31,0);
        tracep->declQuad(c+227,"top ALU BarrelShifter din", false,-1, 63,0);
        tracep->declBus(c+286,"top ALU BarrelShifter shamtin", false,-1, 5,0);
        tracep->declBit(c+231,"top ALU BarrelShifter A_L", false,-1);
        tracep->declBit(c+233,"top ALU BarrelShifter L_R", false,-1);
        tracep->declBit(c+83,"top ALU BarrelShifter isTuncate", false,-1);
        tracep->declQuad(c+240,"top ALU BarrelShifter dout", false,-1, 63,0);
        tracep->declBus(c+287,"top ALU BarrelShifter shamt", false,-1, 5,0);
        tracep->declBus(c+514,"top ALU BarrelShifter dinw", false,-1, 31,0);
        tracep->declBus(c+288,"top ALU BarrelShifter dinwShift", false,-1, 31,0);
        tracep->declBus(c+503,"top ALU BarrelShifter ShifterMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+490,"top ALU BarrelShifter ShifterMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+484,"top ALU BarrelShifter ShifterMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top ALU BarrelShifter ShifterMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+240,"top ALU BarrelShifter ShifterMux out", false,-1, 63,0);
        tracep->declBus(c+289,"top ALU BarrelShifter ShifterMux key", false,-1, 1,0);
        tracep->declQuad(c+507,"top ALU BarrelShifter ShifterMux default_out", false,-1, 63,0);
        tracep->declArray(c+290,"top ALU BarrelShifter ShifterMux lut", false,-1, 263,0);
        tracep->declBus(c+511,"top ALU BarrelShifter ShifterMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+299+i*3,"top ALU BarrelShifter ShifterMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+311+i*1,"top ALU BarrelShifter ShifterMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+315+i*2,"top ALU BarrelShifter ShifterMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+323,"top ALU BarrelShifter ShifterMux lut_out", false,-1, 63,0);
        tracep->declBit(c+325,"top ALU BarrelShifter ShifterMux hit", false,-1);
        tracep->declBus(c+506,"top ALU BarrelShifter ShifterMux i", false,-1, 31,0);
        tracep->declBus(c+515,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+489,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+484,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+254,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+326,"top ALU deExtop key", false,-1, 2,0);
        tracep->declQuad(c+507,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+327,"top ALU deExtop lut", false,-1, 535,0);
        tracep->declBus(c+509,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+344+i*3,"top ALU deExtop pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+368+i*1,"top ALU deExtop key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+376+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+392,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+394,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+516,"top ALU deExtop i", false,-1, 31,0);
        tracep->declQuad(c+71,"top DataMem Addr", false,-1, 63,0);
        tracep->declBus(c+76,"top DataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+62,"top DataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+78,"top DataMem WrEn", false,-1);
        tracep->declQuad(c+79,"top DataMem DataOut", false,-1, 63,0);
        tracep->declBus(c+395,"top DataMem wmask", false,-1, 7,0);
        tracep->declBit(c+396,"top DataMem isSign", false,-1);
        tracep->declBit(c+397,"top DataMem RdEn", false,-1);
        tracep->declBus(c+398,"top DataMem shift", false,-1, 5,0);
        tracep->declArray(c+399,"top DataMem data", false,-1, 127,0);
        tracep->declBus(c+403,"top DataMem extmask", false,-1, 15,0);
        tracep->declBus(c+503,"top DataMem deMemOP NR_KEY", false,-1, 31,0);
        tracep->declBus(c+490,"top DataMem deMemOP KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+515,"top DataMem deMemOP DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top DataMem deMemOP HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+395,"top DataMem deMemOP out", false,-1, 7,0);
        tracep->declBus(c+404,"top DataMem deMemOP key", false,-1, 1,0);
        tracep->declBus(c+517,"top DataMem deMemOP default_out", false,-1, 7,0);
        tracep->declQuad(c+518,"top DataMem deMemOP lut", false,-1, 39,0);
        tracep->declBus(c+501,"top DataMem deMemOP PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+46+i*1,"top DataMem deMemOP pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+50+i*1,"top DataMem deMemOP key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+54+i*1,"top DataMem deMemOP data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+405,"top DataMem deMemOP lut_out", false,-1, 7,0);
        tracep->declBit(c+406,"top DataMem deMemOP hit", false,-1);
        tracep->declBus(c+506,"top DataMem deMemOP i", false,-1, 31,0);
        tracep->declBus(c+503,"top DataMem sext NR_KEY", false,-1, 31,0);
        tracep->declBus(c+490,"top DataMem sext KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+484,"top DataMem sext DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top DataMem sext HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+79,"top DataMem sext out", false,-1, 63,0);
        tracep->declBus(c+404,"top DataMem sext key", false,-1, 1,0);
        tracep->declQuad(c+507,"top DataMem sext default_out", false,-1, 63,0);
        tracep->declArray(c+407,"top DataMem sext lut", false,-1, 263,0);
        tracep->declBus(c+511,"top DataMem sext PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+416+i*3,"top DataMem sext pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+428+i*1,"top DataMem sext key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+432+i*2,"top DataMem sext data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+440,"top DataMem sext lut_out", false,-1, 63,0);
        tracep->declBit(c+442,"top DataMem sext hit", false,-1);
        tracep->declBus(c+506,"top DataMem sext i", false,-1, 31,0);
        tracep->declBus(c+490,"top RegWsrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+491,"top RegWsrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+484,"top RegWsrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+491,"top RegWsrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+81,"top RegWsrcMux out", false,-1, 63,0);
        tracep->declBus(c+77,"top RegWsrcMux key", false,-1, 0,0);
        tracep->declQuad(c+507,"top RegWsrcMux default_out", false,-1, 63,0);
        tracep->declArray(c+443,"top RegWsrcMux lut", false,-1, 129,0);
        tracep->declBus(c+520,"top RegWsrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+448+i*3,"top RegWsrcMux pair_list", true,(i+0), 64,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+454+i*1,"top RegWsrcMux key_list", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+456+i*2,"top RegWsrcMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+460,"top RegWsrcMux lut_out", false,-1, 63,0);
        tracep->declBit(c+462,"top RegWsrcMux hit", false,-1);
        tracep->declBus(c+521,"top RegWsrcMux i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp544;
    VlWide<3>/*95:0*/ __Vtemp545;
    VlWide<3>/*95:0*/ __Vtemp546;
    VlWide<3>/*95:0*/ __Vtemp547;
    VlWide<3>/*95:0*/ __Vtemp548;
    VlWide<3>/*95:0*/ __Vtemp551;
    VlWide<3>/*95:0*/ __Vtemp552;
    VlWide<3>/*95:0*/ __Vtemp553;
    VlWide<3>/*95:0*/ __Vtemp554;
    VlWide<3>/*95:0*/ __Vtemp555;
    VlWide<4>/*127:0*/ __Vtemp557;
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
        tracep->fullSData(oldp+10,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
        tracep->fullSData(oldp+11,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
        tracep->fullCData(oldp+16,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
        tracep->fullSData(oldp+46,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+47,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+48,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+49,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
        tracep->fullCData(oldp+52,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        tracep->fullCData(oldp+55,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__R_rs1),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__R_rs2),64);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__ALUct),4);
        tracep->fullCData(oldp+65,(vlSelf->top__DOT__Extop),3);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__RegWr));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__ALUAsr));
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__ALUBsr),2);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__Imm),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__ALUres),64);
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__Branch),3);
        tracep->fullBit(oldp+74,(vlSelf->top__DOT__Less));
        tracep->fullBit(oldp+75,((1U & (~ (IData)((0U 
                                                   != vlSelf->top__DOT__ALU__DOT__adder))))));
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__MemOP),3);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__MemtoReg));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__MemWr));
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__MemOut),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__RegWdata),64);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__isTuncate));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__isSext));
        tracep->fullBit(oldp+85,((1U & ((IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                        >> 1U))));
        tracep->fullBit(oldp+86,((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))));
        tracep->fullQData(oldp+87,(((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                     ? vlSelf->top__DOT__Imm
                                     : 4ULL)),64);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
        tracep->fullCData(oldp+92,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+99,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+100,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+101,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+102,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+103,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+104,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        tracep->fullCData(oldp+105,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        tracep->fullCData(oldp+106,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        tracep->fullCData(oldp+107,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        tracep->fullCData(oldp+109,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        tracep->fullCData(oldp+111,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        tracep->fullCData(oldp+113,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__GenNextPC__DOT__dePCsrc__DOT__hit));
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__RegisterFile__DOT__rf[31]),64);
        tracep->fullCData(oldp+179,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+181,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+182,(vlSelf->top__DOT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullWData(oldp+183,(vlSelf->top__DOT__ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+194,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+197,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+200,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+203,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+206,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+209,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+210,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+211,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+212,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+213,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+226,(vlSelf->top__DOT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__ALU__DOT__ALUA),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__ALU__DOT__ALUB),64);
        tracep->fullBit(oldp+231,((1U & ((IData)(vlSelf->top__DOT__ALUct) 
                                         >> 3U))));
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        tracep->fullBit(oldp+233,((1U == (7U & (IData)(vlSelf->top__DOT__ALUct)))));
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__ALU__DOT__adder),64);
        VL_EXTEND_WQ(65,64, __Vtemp544, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp545, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp546, __Vtemp544, __Vtemp545);
        VL_EXTEND_WI(65,1, __Vtemp547, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp548, __Vtemp546, __Vtemp547);
        tracep->fullBit(oldp+236,((1U & __Vtemp548[2U])));
        tracep->fullBit(oldp+237,((((1U & (IData)((vlSelf->top__DOT__ALU__DOT__ALUA 
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
        tracep->fullBit(oldp+238,((1U & ((IData)((vlSelf->top__DOT__ALU__DOT__adder 
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
        VL_EXTEND_WQ(65,64, __Vtemp551, vlSelf->top__DOT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp552, vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp553, __Vtemp551, __Vtemp552);
        VL_EXTEND_WI(65,1, __Vtemp554, (IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add));
        VL_ADD_W(3, __Vtemp555, __Vtemp553, __Vtemp554);
        tracep->fullBit(oldp+239,((1U & ((IData)(vlSelf->top__DOT__ALU__DOT__Sub_Add) 
                                         ^ (1U & __Vtemp555[2U])))));
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__ALU__DOT__shift),64);
        tracep->fullQData(oldp+242,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     ^ vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+244,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     | vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+246,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     & vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+248,((vlSelf->top__DOT__ALU__DOT__ALUA 
                                     * vlSelf->top__DOT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+250,(((IData)(vlSelf->top__DOT__isTuncate)
                                      ? (QData)((IData)(
                                                        VL_DIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))))
                                      : VL_DIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB))),64);
        tracep->fullQData(oldp+252,(((IData)(vlSelf->top__DOT__isTuncate)
                                      ? (QData)((IData)(
                                                        VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__ALU__DOT__ALUA), (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))))
                                      : VL_MODDIV_QQQ(64, vlSelf->top__DOT__ALU__DOT__ALUA, vlSelf->top__DOT__ALU__DOT__ALUB))),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__ALU__DOT__ALUout),64);
        tracep->fullWData(oldp+256,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deALUBsr__lut),198);
        tracep->fullWData(oldp+263,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+266,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+269,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+272,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        tracep->fullCData(oldp+273,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        tracep->fullCData(oldp+274,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        tracep->fullQData(oldp+275,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+277,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+279,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+281,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        tracep->fullBit(oldp+283,(vlSelf->top__DOT__ALU__DOT__deALUBsr__DOT__hit));
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        tracep->fullCData(oldp+286,((0x3fU & (IData)(vlSelf->top__DOT__ALU__DOT__ALUB))),6);
        tracep->fullCData(oldp+287,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt),6);
        tracep->fullIData(oldp+288,(((0x1fU >= (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                      ? (0xf8000000U 
                                         >> (IData)(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__shamt))
                                      : 0U)),32);
        tracep->fullCData(oldp+289,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        tracep->fullWData(oldp+290,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
        tracep->fullWData(oldp+299,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+302,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+305,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+308,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+311,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+312,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+313,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        tracep->fullCData(oldp+314,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        tracep->fullBit(oldp+325,(vlSelf->top__DOT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        tracep->fullCData(oldp+326,((7U & (IData)(vlSelf->top__DOT__ALUct))),3);
        tracep->fullWData(oldp+327,(vlSelf->top__DOT__ALU__DOT____Vcellinp__deExtop__lut),536);
        tracep->fullWData(oldp+344,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+347,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+350,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+353,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+356,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+359,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+362,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[6]),67);
        tracep->fullWData(oldp+365,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__pair_list[7]),67);
        tracep->fullCData(oldp+368,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[0]),3);
        tracep->fullCData(oldp+369,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[1]),3);
        tracep->fullCData(oldp+370,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[2]),3);
        tracep->fullCData(oldp+371,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[3]),3);
        tracep->fullCData(oldp+372,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[4]),3);
        tracep->fullCData(oldp+373,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[5]),3);
        tracep->fullCData(oldp+374,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[6]),3);
        tracep->fullCData(oldp+375,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__key_list[7]),3);
        tracep->fullQData(oldp+376,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+378,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        tracep->fullQData(oldp+380,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+394,(vlSelf->top__DOT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullCData(oldp+395,(vlSelf->top__DOT__DataMem__DOT__wmask),8);
        tracep->fullBit(oldp+396,((1U & ((IData)(vlSelf->top__DOT__MemOP) 
                                         >> 2U))));
        tracep->fullBit(oldp+397,((0U != (IData)(vlSelf->top__DOT__MemOP))));
        tracep->fullCData(oldp+398,((0x38U & ((IData)(vlSelf->top__DOT__ALUres) 
                                              << 3U))),6);
        tracep->fullWData(oldp+399,(vlSelf->top__DOT__DataMem__DOT__data),128);
        tracep->fullSData(oldp+403,(vlSelf->top__DOT__DataMem__DOT__extmask),16);
        tracep->fullCData(oldp+404,((3U & (IData)(vlSelf->top__DOT__MemOP))),2);
        tracep->fullCData(oldp+405,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        tracep->fullBit(oldp+406,(vlSelf->top__DOT__DataMem__DOT__deMemOP__DOT__hit));
        tracep->fullWData(oldp+407,(vlSelf->top__DOT__DataMem__DOT____Vcellinp__sext__lut),264);
        tracep->fullWData(oldp+416,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+419,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+422,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+425,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+428,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[0]),2);
        tracep->fullCData(oldp+429,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[1]),2);
        tracep->fullCData(oldp+430,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[2]),2);
        tracep->fullCData(oldp+431,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__key_list[3]),2);
        tracep->fullQData(oldp+432,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[0]),64);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[1]),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[2]),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__data_list[3]),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__lut_out),64);
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__DataMem__DOT__sext__DOT__hit));
        tracep->fullWData(oldp+443,(vlSelf->top__DOT____Vcellinp__RegWsrcMux__lut),130);
        tracep->fullWData(oldp+448,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[0]),65);
        tracep->fullWData(oldp+451,(vlSelf->top__DOT__RegWsrcMux__DOT__pair_list[1]),65);
        tracep->fullBit(oldp+454,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[0]));
        tracep->fullBit(oldp+455,(vlSelf->top__DOT__RegWsrcMux__DOT__key_list[1]));
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+458,(vlSelf->top__DOT__RegWsrcMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__RegWsrcMux__DOT__lut_out),64);
        tracep->fullBit(oldp+462,(vlSelf->top__DOT__RegWsrcMux__DOT__hit));
        tracep->fullBit(oldp+463,(vlSelf->clk));
        tracep->fullBit(oldp+464,(vlSelf->rst));
        tracep->fullIData(oldp+465,(vlSelf->Inst),32);
        tracep->fullQData(oldp+466,(vlSelf->pc),64);
        tracep->fullQData(oldp+468,((0xfffffffffffffffeULL 
                                     & (((2U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->top__DOT__Imm
                                          : 4ULL) + 
                                        ((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSelf->pc
                                          : vlSelf->top__DOT__R_rs1)))),64);
        tracep->fullQData(oldp+470,(((1U & (IData)(vlSelf->top__DOT__GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSelf->pc : vlSelf->top__DOT__R_rs1)),64);
        tracep->fullCData(oldp+472,((0x1fU & (vlSelf->Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+473,((0x1fU & (vlSelf->Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+474,((0x1fU & (vlSelf->Inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+475,((0x7fU & vlSelf->Inst)),7);
        tracep->fullCData(oldp+476,((7U & (vlSelf->Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+477,((vlSelf->Inst >> 0x19U)),7);
        tracep->fullIData(oldp+478,((vlSelf->Inst >> 7U)),25);
        tracep->fullQData(oldp+479,(vlSelf->top__DOT__waddr),64);
        tracep->fullQData(oldp+481,(vlSelf->top__DOT__wdata),64);
        tracep->fullCData(oldp+483,(vlSelf->top__DOT__wmask),8);
        tracep->fullIData(oldp+484,(0x40U),32);
        tracep->fullQData(oldp+485,(0x80000000ULL),64);
        tracep->fullBit(oldp+487,(1U));
        tracep->fullIData(oldp+488,(7U),32);
        tracep->fullIData(oldp+489,(3U),32);
        tracep->fullIData(oldp+490,(2U),32);
        tracep->fullIData(oldp+491,(1U),32);
        tracep->fullCData(oldp+492,(1U),2);
        tracep->fullIData(oldp+493,(5U),32);
        tracep->fullIData(oldp+494,(7U),32);
        tracep->fullIData(oldp+495,(0xbU),32);
        tracep->fullCData(oldp+496,(0U),3);
        __Vtemp557[0U] = 0xf1c764daU;
        __Vtemp557[1U] = 0xddfb3a46U;
        __Vtemp557[2U] = 0x69992f5bU;
        __Vtemp557[3U] = 0x9a0U;
        tracep->fullWData(oldp+497,(__Vtemp557),110);
        tracep->fullIData(oldp+501,(0xaU),32);
        tracep->fullIData(oldp+502,(0xbU),32);
        tracep->fullIData(oldp+503,(4U),32);
        tracep->fullBit(oldp+504,(0U));
        tracep->fullSData(oldp+505,(0x35bdU),16);
        tracep->fullIData(oldp+506,(4U),32);
        tracep->fullQData(oldp+507,(0ULL),64);
        tracep->fullIData(oldp+509,(0x43U),32);
        tracep->fullIData(oldp+510,(5U),32);
        tracep->fullIData(oldp+511,(0x42U),32);
        tracep->fullIData(oldp+512,(3U),32);
        tracep->fullIData(oldp+513,(6U),32);
        tracep->fullIData(oldp+514,(0xf8000000U),32);
        tracep->fullIData(oldp+515,(8U),32);
        tracep->fullIData(oldp+516,(8U),32);
        tracep->fullCData(oldp+517,(0U),8);
        tracep->fullQData(oldp+518,(0xc060343cffULL),40);
        tracep->fullIData(oldp+520,(0x41U),32);
        tracep->fullIData(oldp+521,(2U),32);
    }
}
