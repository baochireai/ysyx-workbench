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
        tracep->declBit(c+777,"clk", false,-1);
        tracep->declBit(c+778,"rst", false,-1);
        tracep->declBus(c+779,"Inst", false,-1, 31,0);
        tracep->declQuad(c+780,"pc", false,-1, 63,0);
        tracep->declBit(c+777,"top clk", false,-1);
        tracep->declBit(c+778,"top rst", false,-1);
        tracep->declBus(c+82,"top Inst", false,-1, 31,0);
        tracep->declQuad(c+83,"top pc", false,-1, 63,0);
        tracep->declQuad(c+83,"top raddr", false,-1, 63,0);
        tracep->declQuad(c+85,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+87,"top R_rs1", false,-1, 63,0);
        tracep->declQuad(c+89,"top R_rs2", false,-1, 63,0);
        tracep->declBus(c+91,"top ALUct", false,-1, 4,0);
        tracep->declBus(c+92,"top Extop", false,-1, 2,0);
        tracep->declBit(c+93,"top RegWr", false,-1);
        tracep->declBit(c+94,"top ALUAsr", false,-1);
        tracep->declBus(c+95,"top ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+96,"top Imm", false,-1, 63,0);
        tracep->declQuad(c+98,"top ALUres", false,-1, 63,0);
        tracep->declQuad(c+100,"top NextPC", false,-1, 63,0);
        tracep->declBus(c+102,"top Branch", false,-1, 2,0);
        tracep->declQuad(c+784,"top waddr", false,-1, 63,0);
        tracep->declBit(c+103,"top Less", false,-1);
        tracep->declBit(c+104,"top Zero", false,-1);
        tracep->declBus(c+105,"top MemOP", false,-1, 2,0);
        tracep->declBus(c+106,"top RegSrc", false,-1, 1,0);
        tracep->declBit(c+107,"top MemWr", false,-1);
        tracep->declQuad(c+108,"top MemOut", false,-1, 63,0);
        tracep->declQuad(c+110,"top RegWdata", false,-1, 63,0);
        tracep->declBit(c+112,"top isIntrPC", false,-1);
        tracep->declQuad(c+113,"top IntrPC", false,-1, 63,0);
        tracep->declBit(c+115,"top IntrEn", false,-1);
        tracep->declQuad(c+116,"top IntrOut", false,-1, 63,0);
        tracep->declBit(c+118,"top clint_mtip", false,-1);
        tracep->declBit(c+119,"top clint_we", false,-1);
        tracep->declBit(c+120,"top clint_re", false,-1);
        tracep->declQuad(c+121,"top clint_dout", false,-1, 63,0);
        tracep->declBit(c+123,"top isTuncate", false,-1);
        tracep->declBit(c+124,"top isSext", false,-1);
        tracep->declBit(c+777,"top PC clk", false,-1);
        tracep->declBit(c+778,"top PC rst", false,-1);
        tracep->declBit(c+112,"top PC isIntrPC", false,-1);
        tracep->declQuad(c+100,"top PC NextPC", false,-1, 63,0);
        tracep->declQuad(c+113,"top PC IntrPC", false,-1, 63,0);
        tracep->declQuad(c+83,"top PC pc", false,-1, 63,0);
        tracep->declQuad(c+125,"top PC dpc", false,-1, 63,0);
        tracep->declBus(c+786,"top PC NEXT_PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+787,"top PC NEXT_PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+777,"top PC NEXT_PC clk", false,-1);
        tracep->declBit(c+778,"top PC NEXT_PC rst", false,-1);
        tracep->declQuad(c+125,"top PC NEXT_PC din", false,-1, 63,0);
        tracep->declQuad(c+83,"top PC NEXT_PC dout", false,-1, 63,0);
        tracep->declBit(c+789,"top PC NEXT_PC wen", false,-1);
        tracep->declBus(c+127,"top ContrGen opcode", false,-1, 6,0);
        tracep->declBus(c+128,"top ContrGen func3", false,-1, 2,0);
        tracep->declBus(c+129,"top ContrGen func7", false,-1, 6,0);
        tracep->declBus(c+91,"top ContrGen ALUct", false,-1, 4,0);
        tracep->declBus(c+92,"top ContrGen Extop", false,-1, 2,0);
        tracep->declBit(c+93,"top ContrGen RegWr", false,-1);
        tracep->declBit(c+94,"top ContrGen ALUAsr", false,-1);
        tracep->declBus(c+95,"top ContrGen ALUBsr", false,-1, 1,0);
        tracep->declBus(c+102,"top ContrGen Branch", false,-1, 2,0);
        tracep->declBit(c+107,"top ContrGen MemWr", false,-1);
        tracep->declBus(c+105,"top ContrGen MemOP", false,-1, 2,0);
        tracep->declBus(c+106,"top ContrGen RegSrc", false,-1, 1,0);
        tracep->declBit(c+123,"top ContrGen isTuncate", false,-1);
        tracep->declBit(c+124,"top ContrGen isSext", false,-1);
        tracep->declBit(c+115,"top ContrGen IntrEn", false,-1);
        tracep->declBit(c+130,"top ContrGen isconditionalJump", false,-1);
        tracep->declBus(c+131,"top ContrGen BranchOpt", false,-1, 2,0);
        tracep->declBit(c+132,"top ContrGen isJal", false,-1);
        tracep->declBit(c+133,"top ContrGen isJalr", false,-1);
        tracep->declBit(c+134,"top ContrGen isMul", false,-1);
        tracep->declBus(c+135,"top ContrGen IntALUct", false,-1, 4,0);
        tracep->declBus(c+136,"top ContrGen MulALUct", false,-1, 4,0);
        tracep->declBit(c+137,"top ContrGen islui", false,-1);
        tracep->declBit(c+138,"top ContrGen isauipc", false,-1);
        tracep->declBit(c+139,"top ContrGen isMemW", false,-1);
        tracep->declBit(c+140,"top ContrGen isMemR", false,-1);
        tracep->declBus(c+790,"top ContrGen deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+791,"top ContrGen deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+792,"top ContrGen deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ContrGen deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+92,"top ContrGen deExtop out", false,-1, 2,0);
        tracep->declBus(c+127,"top ContrGen deExtop key", false,-1, 6,0);
        tracep->declBus(c+794,"top ContrGen deExtop default_out", false,-1, 2,0);
        tracep->declArray(c+795,"top ContrGen deExtop lut", false,-1, 119,0);
        tracep->declBus(c+799,"top ContrGen deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+1+i*1,"top ContrGen deExtop pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+13+i*1,"top ContrGen deExtop key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+25+i*1,"top ContrGen deExtop data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+141,"top ContrGen deExtop lut_out", false,-1, 2,0);
        tracep->declBit(c+142,"top ContrGen deExtop hit", false,-1);
        tracep->declBus(c+800,"top ContrGen deExtop i", false,-1, 31,0);
        tracep->declBus(c+793,"top ContrGen isIntr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+791,"top ContrGen isIntr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ContrGen isIntr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ContrGen isIntr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+115,"top ContrGen isIntr out", false,-1, 0,0);
        tracep->declBus(c+127,"top ContrGen isIntr key", false,-1, 6,0);
        tracep->declBus(c+801,"top ContrGen isIntr default_out", false,-1, 0,0);
        tracep->declBus(c+802,"top ContrGen isIntr lut", false,-1, 7,0);
        tracep->declBus(c+803,"top ContrGen isIntr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+37+i*1,"top ContrGen isIntr pair_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+38+i*1,"top ContrGen isIntr key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+39+i*1,"top ContrGen isIntr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+143,"top ContrGen isIntr lut_out", false,-1, 0,0);
        tracep->declBit(c+144,"top ContrGen isIntr hit", false,-1);
        tracep->declBus(c+804,"top ContrGen isIntr i", false,-1, 31,0);
        tracep->declBus(c+805,"top ContrGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+792,"top ContrGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ContrGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ContrGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+93,"top ContrGen isRegWr out", false,-1, 0,0);
        tracep->declBus(c+92,"top ContrGen isRegWr key", false,-1, 2,0);
        tracep->declBus(c+801,"top ContrGen isRegWr default_out", false,-1, 0,0);
        tracep->declBus(c+806,"top ContrGen isRegWr lut", false,-1, 15,0);
        tracep->declBus(c+805,"top ContrGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+40+i*1,"top ContrGen isRegWr pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+44+i*1,"top ContrGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+48+i*1,"top ContrGen isRegWr data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+145,"top ContrGen isRegWr lut_out", false,-1, 0,0);
        tracep->declBit(c+146,"top ContrGen isRegWr hit", false,-1);
        tracep->declBus(c+807,"top ContrGen isRegWr i", false,-1, 31,0);
        tracep->declBus(c+808,"top ContrGen RegSrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+791,"top ContrGen RegSrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+808,"top ContrGen RegSrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ContrGen RegSrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+106,"top ContrGen RegSrcMux out", false,-1, 1,0);
        tracep->declBus(c+127,"top ContrGen RegSrcMux key", false,-1, 6,0);
        tracep->declBus(c+809,"top ContrGen RegSrcMux default_out", false,-1, 1,0);
        tracep->declBus(c+810,"top ContrGen RegSrcMux lut", false,-1, 17,0);
        tracep->declBus(c+811,"top ContrGen RegSrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+52+i*1,"top ContrGen RegSrcMux pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+54+i*1,"top ContrGen RegSrcMux key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+56+i*1,"top ContrGen RegSrcMux data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+147,"top ContrGen RegSrcMux lut_out", false,-1, 1,0);
        tracep->declBit(c+148,"top ContrGen RegSrcMux hit", false,-1);
        tracep->declBus(c+812,"top ContrGen RegSrcMux i", false,-1, 31,0);
        tracep->declBus(c+102,"top GenNextPC Branch", false,-1, 2,0);
        tracep->declQuad(c+96,"top GenNextPC imm", false,-1, 63,0);
        tracep->declQuad(c+83,"top GenNextPC PC", false,-1, 63,0);
        tracep->declQuad(c+87,"top GenNextPC R_rs1", false,-1, 63,0);
        tracep->declBit(c+103,"top GenNextPC Less", false,-1);
        tracep->declBit(c+104,"top GenNextPC Zero", false,-1);
        tracep->declQuad(c+100,"top GenNextPC NextPC", false,-1, 63,0);
        tracep->declBit(c+149,"top GenNextPC PCAsrc", false,-1);
        tracep->declBit(c+150,"top GenNextPC PCBsrc", false,-1);
        tracep->declQuad(c+151,"top GenNextPC Asrc", false,-1, 63,0);
        tracep->declQuad(c+153,"top GenNextPC Bsrc", false,-1, 63,0);
        tracep->declBus(c+791,"top GenNextPC dePCsrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+792,"top GenNextPC dePCsrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+808,"top GenNextPC dePCsrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top GenNextPC dePCsrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+155,"top GenNextPC dePCsrc out", false,-1, 1,0);
        tracep->declBus(c+102,"top GenNextPC dePCsrc key", false,-1, 2,0);
        tracep->declBus(c+813,"top GenNextPC dePCsrc default_out", false,-1, 1,0);
        tracep->declQuad(c+156,"top GenNextPC dePCsrc lut", false,-1, 34,0);
        tracep->declBus(c+814,"top GenNextPC dePCsrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+158+i*1,"top GenNextPC dePCsrc pair_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+165+i*1,"top GenNextPC dePCsrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+172+i*1,"top GenNextPC dePCsrc data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+179,"top GenNextPC dePCsrc lut_out", false,-1, 1,0);
        tracep->declBit(c+180,"top GenNextPC dePCsrc hit", false,-1);
        tracep->declBus(c+815,"top GenNextPC dePCsrc i", false,-1, 31,0);
        tracep->declBus(c+814,"top RegisterFile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+786,"top RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+181,"top RegisterFile rs1", false,-1, 4,0);
        tracep->declBus(c+182,"top RegisterFile rs2", false,-1, 4,0);
        tracep->declBus(c+183,"top RegisterFile waddr", false,-1, 4,0);
        tracep->declQuad(c+87,"top RegisterFile R_rs1", false,-1, 63,0);
        tracep->declQuad(c+89,"top RegisterFile R_rs2", false,-1, 63,0);
        tracep->declBit(c+777,"top RegisterFile clk", false,-1);
        tracep->declQuad(c+110,"top RegisterFile wdata", false,-1, 63,0);
        tracep->declBit(c+93,"top RegisterFile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+184+i*2,"top RegisterFile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+248,"top ImmGen Inst", false,-1, 31,7);
        tracep->declBus(c+92,"top ImmGen Extop", false,-1, 2,0);
        tracep->declQuad(c+96,"top ImmGen Imm", false,-1, 63,0);
        tracep->declBus(c+814,"top ImmGen isRegWr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+792,"top ImmGen isRegWr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top ImmGen isRegWr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ImmGen isRegWr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+96,"top ImmGen isRegWr out", false,-1, 63,0);
        tracep->declBus(c+92,"top ImmGen isRegWr key", false,-1, 2,0);
        tracep->declQuad(c+816,"top ImmGen isRegWr default_out", false,-1, 63,0);
        tracep->declArray(c+249,"top ImmGen isRegWr lut", false,-1, 334,0);
        tracep->declBus(c+818,"top ImmGen isRegWr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+260+i*3,"top ImmGen isRegWr pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+275+i*1,"top ImmGen isRegWr key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+280+i*2,"top ImmGen isRegWr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+290,"top ImmGen isRegWr lut_out", false,-1, 63,0);
        tracep->declBit(c+292,"top ImmGen isRegWr hit", false,-1);
        tracep->declBus(c+819,"top ImmGen isRegWr i", false,-1, 31,0);
        tracep->declBit(c+94,"top ALU ALUAsr", false,-1);
        tracep->declQuad(c+83,"top ALU PC", false,-1, 63,0);
        tracep->declQuad(c+87,"top ALU R_rs1", false,-1, 63,0);
        tracep->declBus(c+95,"top ALU ALUBsr", false,-1, 1,0);
        tracep->declQuad(c+96,"top ALU Imm", false,-1, 63,0);
        tracep->declQuad(c+89,"top ALU R_rs2", false,-1, 63,0);
        tracep->declBus(c+91,"top ALU ALUct", false,-1, 4,0);
        tracep->declBit(c+123,"top ALU isTuncate", false,-1);
        tracep->declBit(c+124,"top ALU isSext", false,-1);
        tracep->declQuad(c+98,"top ALU ALUres", false,-1, 63,0);
        tracep->declBit(c+103,"top ALU Less", false,-1);
        tracep->declBit(c+104,"top ALU Zero", false,-1);
        tracep->declQuad(c+293,"top ALU ALUA", false,-1, 63,0);
        tracep->declQuad(c+295,"top ALU ALUB", false,-1, 63,0);
        tracep->declBit(c+297,"top ALU US_S", false,-1);
        tracep->declBit(c+298,"top ALU Sub_Add", false,-1);
        tracep->declBit(c+298,"top ALU A_L", false,-1);
        tracep->declBit(c+299,"top ALU L_R", false,-1);
        tracep->declQuad(c+300,"top ALU adder", false,-1, 63,0);
        tracep->declBit(c+302,"top ALU Carry", false,-1);
        tracep->declBit(c+303,"top ALU Overflow", false,-1);
        tracep->declBit(c+304,"top ALU lessS", false,-1);
        tracep->declBit(c+305,"top ALU lessUS", false,-1);
        tracep->declQuad(c+306,"top ALU shift", false,-1, 63,0);
        tracep->declQuad(c+308,"top ALU XOR", false,-1, 63,0);
        tracep->declQuad(c+310,"top ALU OR", false,-1, 63,0);
        tracep->declQuad(c+312,"top ALU AND", false,-1, 63,0);
        tracep->declQuad(c+314,"top ALU MUL", false,-1, 63,0);
        tracep->declQuad(c+316,"top ALU DIV", false,-1, 63,0);
        tracep->declQuad(c+318,"top ALU REM", false,-1, 63,0);
        tracep->declQuad(c+320,"top ALU ALUout", false,-1, 63,0);
        tracep->declBus(c+792,"top ALU deALUBsr NR_KEY", false,-1, 31,0);
        tracep->declBus(c+808,"top ALU deALUBsr KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top ALU deALUBsr DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ALU deALUBsr HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+295,"top ALU deALUBsr out", false,-1, 63,0);
        tracep->declBus(c+95,"top ALU deALUBsr key", false,-1, 1,0);
        tracep->declQuad(c+816,"top ALU deALUBsr default_out", false,-1, 63,0);
        tracep->declArray(c+322,"top ALU deALUBsr lut", false,-1, 197,0);
        tracep->declBus(c+820,"top ALU deALUBsr PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+329+i*3,"top ALU deALUBsr pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+338+i*1,"top ALU deALUBsr key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+341+i*2,"top ALU deALUBsr data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+347,"top ALU deALUBsr lut_out", false,-1, 63,0);
        tracep->declBit(c+349,"top ALU deALUBsr hit", false,-1);
        tracep->declBus(c+821,"top ALU deALUBsr i", false,-1, 31,0);
        tracep->declBus(c+786,"top ALU Adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+293,"top ALU Adder A", false,-1, 63,0);
        tracep->declQuad(c+295,"top ALU Adder B", false,-1, 63,0);
        tracep->declBit(c+298,"top ALU Adder Cin", false,-1);
        tracep->declQuad(c+300,"top ALU Adder Result", false,-1, 63,0);
        tracep->declBit(c+302,"top ALU Adder Carry", false,-1);
        tracep->declBit(c+303,"top ALU Adder Overflow", false,-1);
        tracep->declBit(c+104,"top ALU Adder zero", false,-1);
        tracep->declQuad(c+350,"top ALU Adder t_no_Cin", false,-1, 63,0);
        tracep->declBus(c+786,"top ALU BarrelShifter DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+822,"top ALU BarrelShifter SHT_LEN", false,-1, 31,0);
        tracep->declQuad(c+293,"top ALU BarrelShifter din", false,-1, 63,0);
        tracep->declBus(c+352,"top ALU BarrelShifter shamtin", false,-1, 5,0);
        tracep->declBit(c+298,"top ALU BarrelShifter A_L", false,-1);
        tracep->declBit(c+299,"top ALU BarrelShifter L_R", false,-1);
        tracep->declBit(c+123,"top ALU BarrelShifter isTuncate", false,-1);
        tracep->declQuad(c+306,"top ALU BarrelShifter dout", false,-1, 63,0);
        tracep->declBus(c+353,"top ALU BarrelShifter shamt", false,-1, 5,0);
        tracep->declBus(c+805,"top ALU BarrelShifter ShifterMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+808,"top ALU BarrelShifter ShifterMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top ALU BarrelShifter ShifterMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ALU BarrelShifter ShifterMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+306,"top ALU BarrelShifter ShifterMux out", false,-1, 63,0);
        tracep->declBus(c+354,"top ALU BarrelShifter ShifterMux key", false,-1, 1,0);
        tracep->declQuad(c+816,"top ALU BarrelShifter ShifterMux default_out", false,-1, 63,0);
        tracep->declArray(c+355,"top ALU BarrelShifter ShifterMux lut", false,-1, 263,0);
        tracep->declBus(c+820,"top ALU BarrelShifter ShifterMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+364+i*3,"top ALU BarrelShifter ShifterMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+376+i*1,"top ALU BarrelShifter ShifterMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+380+i*2,"top ALU BarrelShifter ShifterMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+388,"top ALU BarrelShifter ShifterMux lut_out", false,-1, 63,0);
        tracep->declBit(c+390,"top ALU BarrelShifter ShifterMux hit", false,-1);
        tracep->declBus(c+807,"top ALU BarrelShifter ShifterMux i", false,-1, 31,0);
        tracep->declBus(c+805,"top ALU diver NR_KEY", false,-1, 31,0);
        tracep->declBus(c+808,"top ALU diver KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top ALU diver DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ALU diver HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+316,"top ALU diver out", false,-1, 63,0);
        tracep->declBus(c+391,"top ALU diver key", false,-1, 1,0);
        tracep->declQuad(c+816,"top ALU diver default_out", false,-1, 63,0);
        tracep->declArray(c+392,"top ALU diver lut", false,-1, 263,0);
        tracep->declBus(c+820,"top ALU diver PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+401+i*3,"top ALU diver pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+413+i*1,"top ALU diver key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+417+i*2,"top ALU diver data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+425,"top ALU diver lut_out", false,-1, 63,0);
        tracep->declBit(c+427,"top ALU diver hit", false,-1);
        tracep->declBus(c+807,"top ALU diver i", false,-1, 31,0);
        tracep->declBus(c+805,"top ALU remer NR_KEY", false,-1, 31,0);
        tracep->declBus(c+808,"top ALU remer KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top ALU remer DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ALU remer HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+318,"top ALU remer out", false,-1, 63,0);
        tracep->declBus(c+428,"top ALU remer key", false,-1, 1,0);
        tracep->declQuad(c+816,"top ALU remer default_out", false,-1, 63,0);
        tracep->declArray(c+429,"top ALU remer lut", false,-1, 263,0);
        tracep->declBus(c+820,"top ALU remer PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+438+i*3,"top ALU remer pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+450+i*1,"top ALU remer key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+454+i*2,"top ALU remer data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+462,"top ALU remer lut_out", false,-1, 63,0);
        tracep->declBit(c+464,"top ALU remer hit", false,-1);
        tracep->declBus(c+807,"top ALU remer i", false,-1, 31,0);
        tracep->declBus(c+823,"top ALU deExtop NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"top ALU deExtop KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top ALU deExtop DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top ALU deExtop HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+320,"top ALU deExtop out", false,-1, 63,0);
        tracep->declBus(c+465,"top ALU deExtop key", false,-1, 3,0);
        tracep->declQuad(c+816,"top ALU deExtop default_out", false,-1, 63,0);
        tracep->declArray(c+466,"top ALU deExtop lut", false,-1, 1087,0);
        tracep->declBus(c+824,"top ALU deExtop PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declArray(c+500+i*3,"top ALU deExtop pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+548+i*1,"top ALU deExtop key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declQuad(c+564+i*2,"top ALU deExtop data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+596,"top ALU deExtop lut_out", false,-1, 63,0);
        tracep->declBit(c+598,"top ALU deExtop hit", false,-1);
        tracep->declBus(c+825,"top ALU deExtop i", false,-1, 31,0);
        tracep->declBit(c+777,"top DataMem clk", false,-1);
        tracep->declQuad(c+98,"top DataMem Addr", false,-1, 63,0);
        tracep->declBus(c+105,"top DataMem MemOP", false,-1, 2,0);
        tracep->declQuad(c+89,"top DataMem DataIn", false,-1, 63,0);
        tracep->declBit(c+107,"top DataMem WrEn", false,-1);
        tracep->declQuad(c+108,"top DataMem DataOut", false,-1, 63,0);
        tracep->declBit(c+119,"top DataMem clint_we", false,-1);
        tracep->declBit(c+120,"top DataMem clint_re", false,-1);
        tracep->declBit(c+599,"top DataMem clint_en", false,-1);
        tracep->declBus(c+600,"top DataMem wmask", false,-1, 7,0);
        tracep->declBit(c+601,"top DataMem isSign", false,-1);
        tracep->declBit(c+602,"top DataMem RdEn", false,-1);
        tracep->declBus(c+603,"top DataMem shift", false,-1, 5,0);
        tracep->declArray(c+604,"top DataMem data", false,-1, 127,0);
        tracep->declBus(c+608,"top DataMem extmask", false,-1, 15,0);
        tracep->declBus(c+805,"top DataMem deMemOP NR_KEY", false,-1, 31,0);
        tracep->declBus(c+808,"top DataMem deMemOP KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+803,"top DataMem deMemOP DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top DataMem deMemOP HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+600,"top DataMem deMemOP out", false,-1, 7,0);
        tracep->declBus(c+609,"top DataMem deMemOP key", false,-1, 1,0);
        tracep->declBus(c+826,"top DataMem deMemOP default_out", false,-1, 7,0);
        tracep->declQuad(c+827,"top DataMem deMemOP lut", false,-1, 39,0);
        tracep->declBus(c+799,"top DataMem deMemOP PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+58+i*1,"top DataMem deMemOP pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+62+i*1,"top DataMem deMemOP key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+66+i*1,"top DataMem deMemOP data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+610,"top DataMem deMemOP lut_out", false,-1, 7,0);
        tracep->declBit(c+611,"top DataMem deMemOP hit", false,-1);
        tracep->declBus(c+807,"top DataMem deMemOP i", false,-1, 31,0);
        tracep->declBus(c+805,"top DataMem sext NR_KEY", false,-1, 31,0);
        tracep->declBus(c+808,"top DataMem sext KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top DataMem sext DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top DataMem sext HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+108,"top DataMem sext out", false,-1, 63,0);
        tracep->declBus(c+609,"top DataMem sext key", false,-1, 1,0);
        tracep->declQuad(c+816,"top DataMem sext default_out", false,-1, 63,0);
        tracep->declArray(c+612,"top DataMem sext lut", false,-1, 263,0);
        tracep->declBus(c+820,"top DataMem sext PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+621+i*3,"top DataMem sext pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+633+i*1,"top DataMem sext key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+637+i*2,"top DataMem sext data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+645,"top DataMem sext lut_out", false,-1, 63,0);
        tracep->declBit(c+647,"top DataMem sext hit", false,-1);
        tracep->declBus(c+807,"top DataMem sext i", false,-1, 31,0);
        tracep->declBus(c+792,"top RegWsrcMux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+808,"top RegWsrcMux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top RegWsrcMux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top RegWsrcMux HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+110,"top RegWsrcMux out", false,-1, 63,0);
        tracep->declBus(c+106,"top RegWsrcMux key", false,-1, 1,0);
        tracep->declQuad(c+816,"top RegWsrcMux default_out", false,-1, 63,0);
        tracep->declArray(c+648,"top RegWsrcMux lut", false,-1, 197,0);
        tracep->declBus(c+820,"top RegWsrcMux PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+655+i*3,"top RegWsrcMux pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+664+i*1,"top RegWsrcMux key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+667+i*2,"top RegWsrcMux data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+673,"top RegWsrcMux lut_out", false,-1, 63,0);
        tracep->declBit(c+675,"top RegWsrcMux hit", false,-1);
        tracep->declBus(c+821,"top RegWsrcMux i", false,-1, 31,0);
        tracep->declBit(c+777,"top clintU clk", false,-1);
        tracep->declQuad(c+89,"top clintU clint_din", false,-1, 63,0);
        tracep->declQuad(c+98,"top clintU clint_addr", false,-1, 63,0);
        tracep->declBit(c+119,"top clintU we", false,-1);
        tracep->declBit(c+120,"top clintU re", false,-1);
        tracep->declBit(c+118,"top clintU clint_mtip", false,-1);
        tracep->declQuad(c+121,"top clintU clint_dout", false,-1, 63,0);
        tracep->declQuad(c+676,"top clintU mtime", false,-1, 63,0);
        tracep->declQuad(c+678,"top clintU mtimecmp", false,-1, 63,0);
        tracep->declBit(c+680,"top clintU ismtimecmp", false,-1);
        tracep->declBit(c+681,"top clintU ismtime", false,-1);
        tracep->declBus(c+786,"top clintU mtimecmp_Reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+829,"top clintU mtimecmp_Reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+777,"top clintU mtimecmp_Reg clk", false,-1);
        tracep->declBit(c+801,"top clintU mtimecmp_Reg rst", false,-1);
        tracep->declQuad(c+89,"top clintU mtimecmp_Reg din", false,-1, 63,0);
        tracep->declQuad(c+678,"top clintU mtimecmp_Reg dout", false,-1, 63,0);
        tracep->declBit(c+682,"top clintU mtimecmp_Reg wen", false,-1);
        tracep->declBit(c+777,"top IntrUnit clk", false,-1);
        tracep->declBit(c+115,"top IntrUnit IntrEn", false,-1);
        tracep->declBit(c+118,"top IntrUnit clint_mtip", false,-1);
        tracep->declQuad(c+83,"top IntrUnit pc", false,-1, 63,0);
        tracep->declQuad(c+87,"top IntrUnit R_rs1", false,-1, 63,0);
        tracep->declBus(c+181,"top IntrUnit zimm", false,-1, 4,0);
        tracep->declBus(c+683,"top IntrUnit csr", false,-1, 11,0);
        tracep->declBus(c+128,"top IntrUnit func3", false,-1, 2,0);
        tracep->declBit(c+112,"top IntrUnit isIntrPC", false,-1);
        tracep->declQuad(c+113,"top IntrUnit IntrPC", false,-1, 63,0);
        tracep->declQuad(c+116,"top IntrUnit dout", false,-1, 63,0);
        tracep->declQuad(c+684,"top IntrUnit mepc", false,-1, 63,0);
        tracep->declQuad(c+686,"top IntrUnit mtvec", false,-1, 63,0);
        tracep->declQuad(c+688,"top IntrUnit mstatus", false,-1, 63,0);
        tracep->declQuad(c+690,"top IntrUnit mie", false,-1, 63,0);
        tracep->declQuad(c+816,"top IntrUnit mip", false,-1, 63,0);
        tracep->declQuad(c+782,"top IntrUnit mcase", false,-1, 63,0);
        tracep->declBit(c+831,"top IntrUnit isCSRw", false,-1);
        tracep->declBit(c+692,"top IntrUnit mstatus_MIE", false,-1);
        tracep->declBit(c+693,"top IntrUnit mie_MTIE", false,-1);
        tracep->declBit(c+694,"top IntrUnit timer_irq", false,-1);
        tracep->declBit(c+695,"top IntrUnit irq_raise", false,-1);
        tracep->declBit(c+696,"top IntrUnit mip_MTIP", false,-1);
        tracep->declBit(c+697,"top IntrUnit isecall", false,-1);
        tracep->declQuad(c+698,"top IntrUnit eNo", false,-1, 63,0);
        tracep->declBit(c+700,"top IntrUnit ismret", false,-1);
        tracep->declBit(c+701,"top IntrUnit ismtvec", false,-1);
        tracep->declBit(c+702,"top IntrUnit ismepc", false,-1);
        tracep->declBit(c+703,"top IntrUnit ismcase", false,-1);
        tracep->declBit(c+704,"top IntrUnit ismstatus", false,-1);
        tracep->declBit(c+705,"top IntrUnit ismie", false,-1);
        tracep->declBit(c+706,"top IntrUnit ismip", false,-1);
        tracep->declQuad(c+707,"top IntrUnit csrWData", false,-1, 63,0);
        tracep->declQuad(c+709,"top IntrUnit mepcIn", false,-1, 63,0);
        tracep->declQuad(c+711,"top IntrUnit mcaseIn", false,-1, 63,0);
        tracep->declBit(c+713,"top IntrUnit mstatus_MPIE", false,-1);
        tracep->declQuad(c+714,"top IntrUnit mstatusIn", false,-1, 63,0);
        tracep->declBus(c+808,"top IntrUnit CSRwEn NR_KEY", false,-1, 31,0);
        tracep->declBus(c+808,"top IntrUnit CSRwEn KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top IntrUnit CSRwEn DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top IntrUnit CSRwEn HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+698,"top IntrUnit CSRwEn out", false,-1, 63,0);
        tracep->declBus(c+716,"top IntrUnit CSRwEn key", false,-1, 1,0);
        tracep->declQuad(c+816,"top IntrUnit CSRwEn default_out", false,-1, 63,0);
        tracep->declArray(c+832,"top IntrUnit CSRwEn lut", false,-1, 131,0);
        tracep->declBus(c+820,"top IntrUnit CSRwEn PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+70+i*3,"top IntrUnit CSRwEn pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+76+i*1,"top IntrUnit CSRwEn key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+78+i*2,"top IntrUnit CSRwEn data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+717,"top IntrUnit CSRwEn lut_out", false,-1, 63,0);
        tracep->declBit(c+719,"top IntrUnit CSRwEn hit", false,-1);
        tracep->declBus(c+812,"top IntrUnit CSRwEn i", false,-1, 31,0);
        tracep->declBus(c+822,"top IntrUnit scrDataSrc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+792,"top IntrUnit scrDataSrc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+786,"top IntrUnit scrDataSrc DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+793,"top IntrUnit scrDataSrc HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+707,"top IntrUnit scrDataSrc out", false,-1, 63,0);
        tracep->declBus(c+128,"top IntrUnit scrDataSrc key", false,-1, 2,0);
        tracep->declQuad(c+816,"top IntrUnit scrDataSrc default_out", false,-1, 63,0);
        tracep->declArray(c+720,"top IntrUnit scrDataSrc lut", false,-1, 401,0);
        tracep->declBus(c+818,"top IntrUnit scrDataSrc PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declArray(c+733+i*3,"top IntrUnit scrDataSrc pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+751+i*1,"top IntrUnit scrDataSrc key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declQuad(c+757+i*2,"top IntrUnit scrDataSrc data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+769,"top IntrUnit scrDataSrc lut_out", false,-1, 63,0);
        tracep->declBit(c+771,"top IntrUnit scrDataSrc hit", false,-1);
        tracep->declBus(c+837,"top IntrUnit scrDataSrc i", false,-1, 31,0);
        tracep->declBus(c+786,"top IntrUnit mtvecReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+816,"top IntrUnit mtvecReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+777,"top IntrUnit mtvecReg clk", false,-1);
        tracep->declBit(c+801,"top IntrUnit mtvecReg rst", false,-1);
        tracep->declQuad(c+707,"top IntrUnit mtvecReg din", false,-1, 63,0);
        tracep->declQuad(c+686,"top IntrUnit mtvecReg dout", false,-1, 63,0);
        tracep->declBit(c+772,"top IntrUnit mtvecReg wen", false,-1);
        tracep->declBus(c+786,"top IntrUnit mepcReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+816,"top IntrUnit mepcReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+777,"top IntrUnit mepcReg clk", false,-1);
        tracep->declBit(c+801,"top IntrUnit mepcReg rst", false,-1);
        tracep->declQuad(c+709,"top IntrUnit mepcReg din", false,-1, 63,0);
        tracep->declQuad(c+684,"top IntrUnit mepcReg dout", false,-1, 63,0);
        tracep->declBit(c+773,"top IntrUnit mepcReg wen", false,-1);
        tracep->declBus(c+786,"top IntrUnit mcaseReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+816,"top IntrUnit mcaseReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+777,"top IntrUnit mcaseReg clk", false,-1);
        tracep->declBit(c+801,"top IntrUnit mcaseReg rst", false,-1);
        tracep->declQuad(c+711,"top IntrUnit mcaseReg din", false,-1, 63,0);
        tracep->declQuad(c+782,"top IntrUnit mcaseReg dout", false,-1, 63,0);
        tracep->declBit(c+774,"top IntrUnit mcaseReg wen", false,-1);
        tracep->declBus(c+786,"top IntrUnit mstatusReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+838,"top IntrUnit mstatusReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+777,"top IntrUnit mstatusReg clk", false,-1);
        tracep->declBit(c+801,"top IntrUnit mstatusReg rst", false,-1);
        tracep->declQuad(c+714,"top IntrUnit mstatusReg din", false,-1, 63,0);
        tracep->declQuad(c+688,"top IntrUnit mstatusReg dout", false,-1, 63,0);
        tracep->declBit(c+775,"top IntrUnit mstatusReg wen", false,-1);
        tracep->declBus(c+786,"top IntrUnit mieReg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+816,"top IntrUnit mieReg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+777,"top IntrUnit mieReg clk", false,-1);
        tracep->declBit(c+801,"top IntrUnit mieReg rst", false,-1);
        tracep->declQuad(c+707,"top IntrUnit mieReg din", false,-1, 63,0);
        tracep->declQuad(c+690,"top IntrUnit mieReg dout", false,-1, 63,0);
        tracep->declBit(c+776,"top IntrUnit mieReg wen", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<5>/*159:0*/ __Vtemp16;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+4,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+5,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+6,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[5]),10);
        tracep->fullSData(oldp+7,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[6]),10);
        tracep->fullSData(oldp+8,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[7]),10);
        tracep->fullSData(oldp+9,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[8]),10);
        tracep->fullSData(oldp+10,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[9]),10);
        tracep->fullSData(oldp+11,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[10]),10);
        tracep->fullSData(oldp+12,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__pair_list[11]),10);
        tracep->fullCData(oldp+13,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[0]),7);
        tracep->fullCData(oldp+14,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[1]),7);
        tracep->fullCData(oldp+15,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[2]),7);
        tracep->fullCData(oldp+16,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[3]),7);
        tracep->fullCData(oldp+17,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[4]),7);
        tracep->fullCData(oldp+18,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[5]),7);
        tracep->fullCData(oldp+19,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[6]),7);
        tracep->fullCData(oldp+20,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[7]),7);
        tracep->fullCData(oldp+21,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[8]),7);
        tracep->fullCData(oldp+22,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[9]),7);
        tracep->fullCData(oldp+23,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[10]),7);
        tracep->fullCData(oldp+24,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__key_list[11]),7);
        tracep->fullCData(oldp+25,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[0]),3);
        tracep->fullCData(oldp+26,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[1]),3);
        tracep->fullCData(oldp+27,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[2]),3);
        tracep->fullCData(oldp+28,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[3]),3);
        tracep->fullCData(oldp+29,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[4]),3);
        tracep->fullCData(oldp+30,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[5]),3);
        tracep->fullCData(oldp+31,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[6]),3);
        tracep->fullCData(oldp+32,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[7]),3);
        tracep->fullCData(oldp+33,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[8]),3);
        tracep->fullCData(oldp+34,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[9]),3);
        tracep->fullCData(oldp+35,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[10]),3);
        tracep->fullCData(oldp+36,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__data_list[11]),3);
        tracep->fullCData(oldp+37,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__pair_list[0]),8);
        tracep->fullCData(oldp+38,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__key_list[0]),7);
        tracep->fullBit(oldp+39,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__data_list[0]));
        tracep->fullCData(oldp+40,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+41,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+42,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+43,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+44,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+45,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+46,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+47,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullBit(oldp+48,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[0]));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[1]));
        tracep->fullBit(oldp+50,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[2]));
        tracep->fullBit(oldp+51,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__data_list[3]));
        tracep->fullSData(oldp+52,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+53,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__pair_list[1]),9);
        tracep->fullCData(oldp+54,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[0]),7);
        tracep->fullCData(oldp+55,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__key_list[1]),7);
        tracep->fullCData(oldp+56,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[0]),2);
        tracep->fullCData(oldp+57,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__data_list[1]),2);
        tracep->fullSData(oldp+58,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+59,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+60,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+61,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__pair_list[3]),10);
        tracep->fullCData(oldp+62,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[0]),2);
        tracep->fullCData(oldp+63,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[1]),2);
        tracep->fullCData(oldp+64,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[2]),2);
        tracep->fullCData(oldp+65,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__key_list[3]),2);
        tracep->fullCData(oldp+66,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[0]),8);
        tracep->fullCData(oldp+67,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[1]),8);
        tracep->fullCData(oldp+68,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[2]),8);
        tracep->fullCData(oldp+69,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__data_list[3]),8);
        tracep->fullWData(oldp+70,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+73,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+76,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[0]),2);
        tracep->fullCData(oldp+77,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__key_list[1]),2);
        tracep->fullQData(oldp+78,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[0]),64);
        tracep->fullQData(oldp+80,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__data_list[1]),64);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__top.Inst),32);
        tracep->fullQData(oldp+83,(vlSymsp->TOP__top.pc),64);
        tracep->fullQData(oldp+85,(vlSymsp->TOP__top.__PVT__rdata),64);
        tracep->fullQData(oldp+87,(vlSymsp->TOP__top.__PVT__R_rs1),64);
        tracep->fullQData(oldp+89,(vlSymsp->TOP__top.__PVT__R_rs2),64);
        tracep->fullCData(oldp+91,(vlSymsp->TOP__top.__PVT__ALUct),5);
        tracep->fullCData(oldp+92,(vlSymsp->TOP__top.__PVT__Extop),3);
        tracep->fullBit(oldp+93,(vlSymsp->TOP__top.__PVT__RegWr));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__top.__PVT__ALUAsr));
        tracep->fullCData(oldp+95,(vlSymsp->TOP__top.__PVT__ALUBsr),2);
        tracep->fullQData(oldp+96,(vlSymsp->TOP__top.__PVT__Imm),64);
        tracep->fullQData(oldp+98,(vlSymsp->TOP__top.__PVT__ALUres),64);
        tracep->fullQData(oldp+100,((0xfffffffffffffffeULL 
                                     & (((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSymsp->TOP__top.__PVT__Imm
                                          : 4ULL) + 
                                        ((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                          ? vlSymsp->TOP__top.pc
                                          : vlSymsp->TOP__top.__PVT__R_rs1)))),64);
        tracep->fullCData(oldp+102,(vlSymsp->TOP__top.__PVT__Branch),3);
        tracep->fullBit(oldp+103,(vlSymsp->TOP__top.__PVT__Less));
        tracep->fullBit(oldp+104,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__top.__PVT__ALU__DOT__adder))))));
        tracep->fullCData(oldp+105,(vlSymsp->TOP__top.__PVT__MemOP),3);
        tracep->fullCData(oldp+106,(vlSymsp->TOP__top.__PVT__RegSrc),2);
        tracep->fullBit(oldp+107,(vlSymsp->TOP__top.__PVT__MemWr));
        tracep->fullQData(oldp+108,(vlSymsp->TOP__top.__PVT__MemOut),64);
        tracep->fullQData(oldp+110,(vlSymsp->TOP__top.__PVT__RegWdata),64);
        tracep->fullBit(oldp+112,((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
                                    & (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        tracep->fullQData(oldp+113,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                      ? vlSymsp->TOP__top__IntrUnit.__PVT__mtvec
                                      : ((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismret)
                                          ? vlSymsp->TOP__top__IntrUnit.__PVT__mepc
                                          : vlSymsp->TOP__top.pc))),64);
        tracep->fullBit(oldp+115,(vlSymsp->TOP__top.__PVT__IntrEn));
        tracep->fullQData(oldp+116,(vlSymsp->TOP__top__IntrUnit.__PVT__dout),64);
        tracep->fullBit(oldp+118,(vlSymsp->TOP__top.__PVT__clint_mtip));
        tracep->fullBit(oldp+119,(vlSymsp->TOP__top.__PVT__clint_we));
        tracep->fullBit(oldp+120,(vlSymsp->TOP__top.__PVT__clint_re));
        tracep->fullQData(oldp+121,(((- (QData)((IData)(vlSymsp->TOP__top.__PVT__clint_re))) 
                                     & ((0x200bff8ULL 
                                         == vlSymsp->TOP__top.__PVT__ALUres)
                                         ? vlSymsp->TOP__top.__PVT__clintU__DOT__mtime
                                         : ((0x2004000ULL 
                                             == vlSymsp->TOP__top.__PVT__ALUres)
                                             ? vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp
                                             : 0ULL)))),64);
        tracep->fullBit(oldp+123,(vlSymsp->TOP__top.__PVT__isTuncate));
        tracep->fullBit(oldp+124,(vlSymsp->TOP__top.__PVT__isSext));
        tracep->fullQData(oldp+125,(((((IData)(vlSymsp->TOP__top.__PVT__IntrEn) 
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
                                              : 4ULL) 
                                            + ((1U 
                                                & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                                ? vlSymsp->TOP__top.pc
                                                : vlSymsp->TOP__top.__PVT__R_rs1))))),64);
        tracep->fullCData(oldp+127,((0x7fU & vlSymsp->TOP__top.Inst)),7);
        tracep->fullCData(oldp+128,((7U & (vlSymsp->TOP__top.Inst 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+129,((vlSymsp->TOP__top.Inst 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+130,((4U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
        tracep->fullCData(oldp+131,((5U & (vlSymsp->TOP__top.Inst 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+132,((6U == (IData)(vlSymsp->TOP__top.__PVT__Extop))));
        tracep->fullBit(oldp+133,((0x67U == (0x7fU 
                                             & vlSymsp->TOP__top.Inst))));
        tracep->fullBit(oldp+134,((((0x33U == (0x7fU 
                                               & vlSymsp->TOP__top.Inst)) 
                                    | (0x3bU == (0x7fU 
                                                 & vlSymsp->TOP__top.Inst))) 
                                   & (vlSymsp->TOP__top.Inst 
                                      >> 0x19U))));
        tracep->fullCData(oldp+135,(((3U == (7U & (vlSymsp->TOP__top.Inst 
                                                   >> 0xcU)))
                                      ? 0xaU : ((8U 
                                                 & ((vlSymsp->TOP__top.Inst 
                                                     >> 0x1bU) 
                                                    & ((IData)(
                                                               (0U 
                                                                != 
                                                                (0x7020U 
                                                                 & vlSymsp->TOP__top.Inst))) 
                                                       << 3U))) 
                                                | (7U 
                                                   & (vlSymsp->TOP__top.Inst 
                                                      >> 0xcU))))),5);
        tracep->fullCData(oldp+136,((0x10U | ((8U & 
                                               (vlSymsp->TOP__top.Inst 
                                                >> 9U)) 
                                              | (7U 
                                                 & (vlSymsp->TOP__top.Inst 
                                                    >> 0xcU))))),5);
        tracep->fullBit(oldp+137,((0x37U == (0x7fU 
                                             & vlSymsp->TOP__top.Inst))));
        tracep->fullBit(oldp+138,((0x17U == (0x7fU 
                                             & vlSymsp->TOP__top.Inst))));
        tracep->fullBit(oldp+139,((0x23U == (0x7fU 
                                             & vlSymsp->TOP__top.Inst))));
        tracep->fullBit(oldp+140,((3U == (0x7fU & vlSymsp->TOP__top.Inst))));
        tracep->fullCData(oldp+141,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__lut_out),3);
        tracep->fullBit(oldp+142,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+143,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__lut_out));
        tracep->fullBit(oldp+144,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isIntr__DOT__hit));
        tracep->fullBit(oldp+145,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__lut_out));
        tracep->fullBit(oldp+146,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__isRegWr__DOT__hit));
        tracep->fullCData(oldp+147,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__lut_out),2);
        tracep->fullBit(oldp+148,(vlSymsp->TOP__top.__PVT__ContrGen__DOT__RegSrcMux__DOT__hit));
        tracep->fullBit(oldp+149,((1U & ((IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out) 
                                         >> 1U))));
        tracep->fullBit(oldp+150,((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))));
        tracep->fullQData(oldp+151,(((2U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSymsp->TOP__top.__PVT__Imm
                                      : 4ULL)),64);
        tracep->fullQData(oldp+153,(((1U & (IData)(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out))
                                      ? vlSymsp->TOP__top.pc
                                      : vlSymsp->TOP__top.__PVT__R_rs1)),64);
        tracep->fullCData(oldp+155,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellout__dePCsrc__out),2);
        tracep->fullQData(oldp+156,(vlSymsp->TOP__top.GenNextPC__DOT____Vcellinp__dePCsrc__lut),35);
        tracep->fullCData(oldp+158,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[0]),5);
        tracep->fullCData(oldp+159,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[1]),5);
        tracep->fullCData(oldp+160,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[2]),5);
        tracep->fullCData(oldp+161,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[3]),5);
        tracep->fullCData(oldp+162,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[4]),5);
        tracep->fullCData(oldp+163,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[5]),5);
        tracep->fullCData(oldp+164,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__pair_list[6]),5);
        tracep->fullCData(oldp+165,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+166,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+167,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+168,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+169,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+170,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[5]),3);
        tracep->fullCData(oldp+171,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__key_list[6]),3);
        tracep->fullCData(oldp+172,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[0]),2);
        tracep->fullCData(oldp+173,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[1]),2);
        tracep->fullCData(oldp+174,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[2]),2);
        tracep->fullCData(oldp+175,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[3]),2);
        tracep->fullCData(oldp+176,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[4]),2);
        tracep->fullCData(oldp+177,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[5]),2);
        tracep->fullCData(oldp+178,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__data_list[6]),2);
        tracep->fullCData(oldp+179,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__lut_out),2);
        tracep->fullBit(oldp+180,(vlSymsp->TOP__top.__PVT__GenNextPC__DOT__dePCsrc__DOT__hit));
        tracep->fullCData(oldp+181,((0x1fU & (vlSymsp->TOP__top.Inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+182,((0x1fU & (vlSymsp->TOP__top.Inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+183,((0x1fU & (vlSymsp->TOP__top.Inst 
                                              >> 7U))),5);
        tracep->fullQData(oldp+184,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[0]),64);
        tracep->fullQData(oldp+186,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[1]),64);
        tracep->fullQData(oldp+188,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[2]),64);
        tracep->fullQData(oldp+190,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[3]),64);
        tracep->fullQData(oldp+192,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[4]),64);
        tracep->fullQData(oldp+194,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[5]),64);
        tracep->fullQData(oldp+196,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[6]),64);
        tracep->fullQData(oldp+198,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[7]),64);
        tracep->fullQData(oldp+200,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[8]),64);
        tracep->fullQData(oldp+202,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[9]),64);
        tracep->fullQData(oldp+204,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[10]),64);
        tracep->fullQData(oldp+206,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[11]),64);
        tracep->fullQData(oldp+208,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[12]),64);
        tracep->fullQData(oldp+210,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[13]),64);
        tracep->fullQData(oldp+212,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[14]),64);
        tracep->fullQData(oldp+214,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[15]),64);
        tracep->fullQData(oldp+216,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[16]),64);
        tracep->fullQData(oldp+218,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[17]),64);
        tracep->fullQData(oldp+220,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[18]),64);
        tracep->fullQData(oldp+222,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[19]),64);
        tracep->fullQData(oldp+224,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[20]),64);
        tracep->fullQData(oldp+226,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[21]),64);
        tracep->fullQData(oldp+228,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[22]),64);
        tracep->fullQData(oldp+230,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[23]),64);
        tracep->fullQData(oldp+232,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[24]),64);
        tracep->fullQData(oldp+234,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[25]),64);
        tracep->fullQData(oldp+236,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[26]),64);
        tracep->fullQData(oldp+238,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[27]),64);
        tracep->fullQData(oldp+240,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[28]),64);
        tracep->fullQData(oldp+242,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[29]),64);
        tracep->fullQData(oldp+244,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[30]),64);
        tracep->fullQData(oldp+246,(vlSymsp->TOP__top.__PVT__RegisterFile__DOT__rf[31]),64);
        tracep->fullIData(oldp+248,((vlSymsp->TOP__top.Inst 
                                     >> 7U)),25);
        tracep->fullWData(oldp+249,(vlSymsp->TOP__top.ImmGen__DOT____Vcellinp__isRegWr__lut),335);
        tracep->fullWData(oldp+260,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+263,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+266,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+269,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+272,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+275,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[0]),3);
        tracep->fullCData(oldp+276,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[1]),3);
        tracep->fullCData(oldp+277,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[2]),3);
        tracep->fullCData(oldp+278,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[3]),3);
        tracep->fullCData(oldp+279,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__key_list[4]),3);
        tracep->fullQData(oldp+280,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+282,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+284,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+286,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[3]),64);
        tracep->fullQData(oldp+288,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__data_list[4]),64);
        tracep->fullQData(oldp+290,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__lut_out),64);
        tracep->fullBit(oldp+292,(vlSymsp->TOP__top.__PVT__ImmGen__DOT__isRegWr__DOT__hit));
        tracep->fullQData(oldp+293,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA),64);
        tracep->fullQData(oldp+295,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB),64);
        tracep->fullBit(oldp+297,((1U & (~ ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                            >> 3U)))));
        tracep->fullBit(oldp+298,((1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                         >> 3U))));
        tracep->fullBit(oldp+299,((1U == (7U & (IData)(vlSymsp->TOP__top.__PVT__ALUct)))));
        tracep->fullQData(oldp+300,(vlSymsp->TOP__top.__PVT__ALU__DOT__adder),64);
        VL_EXTEND_WQ(65,64, __Vtemp2, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp3, vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp4, __Vtemp2, __Vtemp3);
        VL_EXTEND_WI(65,1, __Vtemp5, (1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                            >> 3U)));
        VL_ADD_W(3, __Vtemp6, __Vtemp4, __Vtemp5);
        tracep->fullBit(oldp+302,((1U & __Vtemp6[2U])));
        tracep->fullBit(oldp+303,((((1U & (IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                      >> 0x3fU)))) 
                                   & ((1U & (IData)(
                                                    (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                     >> 0x3fU))) 
                                      != (1U & (IData)(
                                                       (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                        >> 0x3fU)))))));
        tracep->fullBit(oldp+304,((1U & ((IData)((vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                  >> 0x3fU)) 
                                         ^ (((1U & (IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                            >> 0x3fU))) 
                                             == (1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin 
                                                            >> 0x3fU)))) 
                                            & ((1U 
                                                & (IData)(
                                                          (vlSymsp->TOP__top.__PVT__ALU__DOT__adder 
                                                           >> 0x3fU))) 
                                               != (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                                              >> 0x3fU)))))))));
        VL_EXTEND_WQ(65,64, __Vtemp9, vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA);
        VL_EXTEND_WQ(65,64, __Vtemp10, vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin);
        VL_ADD_W(3, __Vtemp11, __Vtemp9, __Vtemp10);
        VL_EXTEND_WI(65,1, __Vtemp12, (1U & ((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                             >> 3U)));
        VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
        tracep->fullBit(oldp+305,((1U & (((IData)(vlSymsp->TOP__top.__PVT__ALUct) 
                                          >> 3U) ^ 
                                         (1U & __Vtemp13[2U])))));
        tracep->fullQData(oldp+306,(vlSymsp->TOP__top.__PVT__ALU__DOT__shift),64);
        tracep->fullQData(oldp+308,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                     ^ vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+310,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                     | vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+312,((vlSymsp->TOP__top.__PVT__ALU__DOT__ALUA 
                                     & vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB)),64);
        tracep->fullQData(oldp+314,(vlSymsp->TOP__top.__PVT__ALU__DOT__MUL),64);
        tracep->fullQData(oldp+316,(vlSymsp->TOP__top.__PVT__ALU__DOT__DIV),64);
        tracep->fullQData(oldp+318,(vlSymsp->TOP__top.__PVT__ALU__DOT__REM),64);
        tracep->fullQData(oldp+320,(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUout),64);
        tracep->fullWData(oldp+322,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deALUBsr__lut),198);
        tracep->fullWData(oldp+329,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+332,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+335,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+338,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[0]),2);
        tracep->fullCData(oldp+339,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[1]),2);
        tracep->fullCData(oldp+340,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__key_list[2]),2);
        tracep->fullQData(oldp+341,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[0]),64);
        tracep->fullQData(oldp+343,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[1]),64);
        tracep->fullQData(oldp+345,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__data_list[2]),64);
        tracep->fullQData(oldp+347,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__lut_out),64);
        tracep->fullBit(oldp+349,(vlSymsp->TOP__top.__PVT__ALU__DOT__deALUBsr__DOT__hit));
        tracep->fullQData(oldp+350,(vlSymsp->TOP__top.__PVT__ALU__DOT__Adder__DOT__t_no_Cin),64);
        tracep->fullCData(oldp+352,((0x3fU & (IData)(vlSymsp->TOP__top.__PVT__ALU__DOT__ALUB))),6);
        tracep->fullCData(oldp+353,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__shamt),6);
        tracep->fullCData(oldp+354,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__key),2);
        tracep->fullWData(oldp+355,(vlSymsp->TOP__top.ALU__DOT__BarrelShifter__DOT____Vcellinp__ShifterMux__lut),264);
        tracep->fullWData(oldp+364,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+367,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+370,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+373,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+376,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+377,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+378,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[2]),2);
        tracep->fullCData(oldp+379,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__key_list[3]),2);
        tracep->fullQData(oldp+380,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+382,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+384,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+386,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__data_list[3]),64);
        tracep->fullQData(oldp+388,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__lut_out),64);
        tracep->fullBit(oldp+390,(vlSymsp->TOP__top.__PVT__ALU__DOT__BarrelShifter__DOT__ShifterMux__DOT__hit));
        tracep->fullCData(oldp+391,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__key),2);
        tracep->fullWData(oldp+392,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__diver__lut),264);
        tracep->fullWData(oldp+401,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+404,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+407,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+410,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+413,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[0]),2);
        tracep->fullCData(oldp+414,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[1]),2);
        tracep->fullCData(oldp+415,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[2]),2);
        tracep->fullCData(oldp+416,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__key_list[3]),2);
        tracep->fullQData(oldp+417,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[0]),64);
        tracep->fullQData(oldp+419,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[1]),64);
        tracep->fullQData(oldp+421,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[2]),64);
        tracep->fullQData(oldp+423,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__data_list[3]),64);
        tracep->fullQData(oldp+425,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__lut_out),64);
        tracep->fullBit(oldp+427,(vlSymsp->TOP__top.__PVT__ALU__DOT__diver__DOT__hit));
        tracep->fullCData(oldp+428,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__remer__key),2);
        tracep->fullWData(oldp+429,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__remer__lut),264);
        tracep->fullWData(oldp+438,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+441,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+444,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+447,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+450,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[0]),2);
        tracep->fullCData(oldp+451,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[1]),2);
        tracep->fullCData(oldp+452,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[2]),2);
        tracep->fullCData(oldp+453,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__key_list[3]),2);
        tracep->fullQData(oldp+454,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[0]),64);
        tracep->fullQData(oldp+456,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[1]),64);
        tracep->fullQData(oldp+458,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[2]),64);
        tracep->fullQData(oldp+460,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__data_list[3]),64);
        tracep->fullQData(oldp+462,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__lut_out),64);
        tracep->fullBit(oldp+464,(vlSymsp->TOP__top.__PVT__ALU__DOT__remer__DOT__hit));
        tracep->fullCData(oldp+465,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__key),4);
        tracep->fullWData(oldp+466,(vlSymsp->TOP__top.ALU__DOT____Vcellinp__deExtop__lut),1088);
        tracep->fullWData(oldp+500,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+503,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+506,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+509,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+512,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+515,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+518,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[6]),68);
        tracep->fullWData(oldp+521,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[7]),68);
        tracep->fullWData(oldp+524,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[8]),68);
        tracep->fullWData(oldp+527,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[9]),68);
        tracep->fullWData(oldp+530,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[10]),68);
        tracep->fullWData(oldp+533,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[11]),68);
        tracep->fullWData(oldp+536,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[12]),68);
        tracep->fullWData(oldp+539,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[13]),68);
        tracep->fullWData(oldp+542,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[14]),68);
        tracep->fullWData(oldp+545,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__pair_list[15]),68);
        tracep->fullCData(oldp+548,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[0]),4);
        tracep->fullCData(oldp+549,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[1]),4);
        tracep->fullCData(oldp+550,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[2]),4);
        tracep->fullCData(oldp+551,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[3]),4);
        tracep->fullCData(oldp+552,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[4]),4);
        tracep->fullCData(oldp+553,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[5]),4);
        tracep->fullCData(oldp+554,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[6]),4);
        tracep->fullCData(oldp+555,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[7]),4);
        tracep->fullCData(oldp+556,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[8]),4);
        tracep->fullCData(oldp+557,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[9]),4);
        tracep->fullCData(oldp+558,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[10]),4);
        tracep->fullCData(oldp+559,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[11]),4);
        tracep->fullCData(oldp+560,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[12]),4);
        tracep->fullCData(oldp+561,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[13]),4);
        tracep->fullCData(oldp+562,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[14]),4);
        tracep->fullCData(oldp+563,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__key_list[15]),4);
        tracep->fullQData(oldp+564,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[0]),64);
        tracep->fullQData(oldp+566,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[1]),64);
        tracep->fullQData(oldp+568,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[2]),64);
        tracep->fullQData(oldp+570,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[3]),64);
        tracep->fullQData(oldp+572,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[4]),64);
        tracep->fullQData(oldp+574,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[5]),64);
        tracep->fullQData(oldp+576,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[6]),64);
        tracep->fullQData(oldp+578,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[7]),64);
        tracep->fullQData(oldp+580,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[8]),64);
        tracep->fullQData(oldp+582,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[9]),64);
        tracep->fullQData(oldp+584,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[10]),64);
        tracep->fullQData(oldp+586,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[11]),64);
        tracep->fullQData(oldp+588,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[12]),64);
        tracep->fullQData(oldp+590,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[13]),64);
        tracep->fullQData(oldp+592,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[14]),64);
        tracep->fullQData(oldp+594,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__data_list[15]),64);
        tracep->fullQData(oldp+596,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__lut_out),64);
        tracep->fullBit(oldp+598,(vlSymsp->TOP__top.__PVT__ALU__DOT__deExtop__DOT__hit));
        tracep->fullBit(oldp+599,(vlSymsp->TOP__top.__PVT__DataMem__DOT__clint_en));
        tracep->fullCData(oldp+600,(vlSymsp->TOP__top.__PVT__DataMem__DOT__wmask),8);
        tracep->fullBit(oldp+601,((1U & ((IData)(vlSymsp->TOP__top.__PVT__MemOP) 
                                         >> 2U))));
        tracep->fullBit(oldp+602,(vlSymsp->TOP__top.__PVT__DataMem__DOT__RdEn));
        tracep->fullCData(oldp+603,((0x38U & ((IData)(vlSymsp->TOP__top.__PVT__ALUres) 
                                              << 3U))),6);
        tracep->fullWData(oldp+604,(vlSymsp->TOP__top.__PVT__DataMem__DOT__data),128);
        tracep->fullSData(oldp+608,(vlSymsp->TOP__top.__PVT__DataMem__DOT__extmask),16);
        tracep->fullCData(oldp+609,((3U & (IData)(vlSymsp->TOP__top.__PVT__MemOP))),2);
        tracep->fullCData(oldp+610,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__lut_out),8);
        tracep->fullBit(oldp+611,(vlSymsp->TOP__top.__PVT__DataMem__DOT__deMemOP__DOT__hit));
        tracep->fullWData(oldp+612,(vlSymsp->TOP__top.DataMem__DOT____Vcellinp__sext__lut),264);
        tracep->fullWData(oldp+621,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+624,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+627,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+630,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+633,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[0]),2);
        tracep->fullCData(oldp+634,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[1]),2);
        tracep->fullCData(oldp+635,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[2]),2);
        tracep->fullCData(oldp+636,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__key_list[3]),2);
        tracep->fullQData(oldp+637,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[0]),64);
        tracep->fullQData(oldp+639,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[1]),64);
        tracep->fullQData(oldp+641,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[2]),64);
        tracep->fullQData(oldp+643,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__data_list[3]),64);
        tracep->fullQData(oldp+645,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__lut_out),64);
        tracep->fullBit(oldp+647,(vlSymsp->TOP__top.__PVT__DataMem__DOT__sext__DOT__hit));
        tracep->fullWData(oldp+648,(vlSymsp->TOP__top.__Vcellinp__RegWsrcMux__lut),198);
        tracep->fullWData(oldp+655,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+658,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+661,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+664,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[0]),2);
        tracep->fullCData(oldp+665,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[1]),2);
        tracep->fullCData(oldp+666,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__key_list[2]),2);
        tracep->fullQData(oldp+667,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[0]),64);
        tracep->fullQData(oldp+669,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[1]),64);
        tracep->fullQData(oldp+671,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__data_list[2]),64);
        tracep->fullQData(oldp+673,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__lut_out),64);
        tracep->fullBit(oldp+675,(vlSymsp->TOP__top.__PVT__RegWsrcMux__DOT__hit));
        tracep->fullQData(oldp+676,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtime),64);
        tracep->fullQData(oldp+678,(vlSymsp->TOP__top.__PVT__clintU__DOT__mtimecmp),64);
        tracep->fullBit(oldp+680,((0x2004000ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        tracep->fullBit(oldp+681,((0x200bff8ULL == vlSymsp->TOP__top.__PVT__ALUres)));
        tracep->fullBit(oldp+682,(((IData)(vlSymsp->TOP__top.__PVT__clint_we) 
                                   & (0x2004000ULL 
                                      == vlSymsp->TOP__top.__PVT__ALUres))));
        tracep->fullSData(oldp+683,((vlSymsp->TOP__top.Inst 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+684,(vlSymsp->TOP__top__IntrUnit.__PVT__mepc),64);
        tracep->fullQData(oldp+686,(vlSymsp->TOP__top__IntrUnit.__PVT__mtvec),64);
        tracep->fullQData(oldp+688,(vlSymsp->TOP__top__IntrUnit.__PVT__mstatus),64);
        tracep->fullQData(oldp+690,(vlSymsp->TOP__top__IntrUnit.__PVT__mie),64);
        tracep->fullBit(oldp+692,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                 >> 3U)))));
        tracep->fullBit(oldp+693,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mie 
                                                 >> 7U)))));
        tracep->fullBit(oldp+694,(vlSymsp->TOP__top__IntrUnit.__PVT__timer_irq));
        tracep->fullBit(oldp+695,(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise));
        tracep->fullBit(oldp+696,(vlSymsp->TOP__top__IntrUnit.__PVT__mip_MTIP));
        tracep->fullBit(oldp+697,(vlSymsp->TOP__top__IntrUnit.__PVT__isecall));
        tracep->fullQData(oldp+698,(vlSymsp->TOP__top__IntrUnit.__PVT__eNo),64);
        tracep->fullBit(oldp+700,(vlSymsp->TOP__top__IntrUnit.__PVT__ismret));
        tracep->fullBit(oldp+701,((0x305U == (vlSymsp->TOP__top.Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+702,(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc));
        tracep->fullBit(oldp+703,(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase));
        tracep->fullBit(oldp+704,(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus));
        tracep->fullBit(oldp+705,((0x304U == (vlSymsp->TOP__top.Inst 
                                              >> 0x14U))));
        tracep->fullBit(oldp+706,((0x344U == (vlSymsp->TOP__top.Inst 
                                              >> 0x14U))));
        tracep->fullQData(oldp+707,(vlSymsp->TOP__top__IntrUnit.__PVT__csrWData),64);
        tracep->fullQData(oldp+709,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                      ? vlSymsp->TOP__top.pc
                                      : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
        tracep->fullQData(oldp+711,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
                                      ? vlSymsp->TOP__top__IntrUnit.__PVT__eNo
                                      : vlSymsp->TOP__top__IntrUnit.__PVT__csrWData)),64);
        tracep->fullBit(oldp+713,((1U & (IData)((vlSymsp->TOP__top__IntrUnit.__PVT__mstatus 
                                                 >> 7U)))));
        tracep->fullQData(oldp+714,(((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise)
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
        tracep->fullCData(oldp+716,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__CSRwEn__key),2);
        tracep->fullQData(oldp+717,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__lut_out),64);
        tracep->fullBit(oldp+719,(vlSymsp->TOP__top__IntrUnit.__PVT__CSRwEn__DOT__hit));
        tracep->fullWData(oldp+720,(vlSymsp->TOP__top__IntrUnit.__Vcellinp__scrDataSrc__lut),402);
        tracep->fullWData(oldp+733,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+736,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+739,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+742,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+745,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+748,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__pair_list[5]),67);
        tracep->fullCData(oldp+751,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[0]),3);
        tracep->fullCData(oldp+752,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[1]),3);
        tracep->fullCData(oldp+753,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[2]),3);
        tracep->fullCData(oldp+754,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[3]),3);
        tracep->fullCData(oldp+755,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[4]),3);
        tracep->fullCData(oldp+756,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__key_list[5]),3);
        tracep->fullQData(oldp+757,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[0]),64);
        tracep->fullQData(oldp+759,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[1]),64);
        tracep->fullQData(oldp+761,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[2]),64);
        tracep->fullQData(oldp+763,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[3]),64);
        tracep->fullQData(oldp+765,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[4]),64);
        tracep->fullQData(oldp+767,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__data_list[5]),64);
        tracep->fullQData(oldp+769,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__lut_out),64);
        tracep->fullBit(oldp+771,(vlSymsp->TOP__top__IntrUnit.__PVT__scrDataSrc__DOT__hit));
        tracep->fullBit(oldp+772,(((0x305U == (vlSymsp->TOP__top.Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
        tracep->fullBit(oldp+773,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismepc) 
                                    & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        tracep->fullBit(oldp+774,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismcase) 
                                    & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        tracep->fullBit(oldp+775,((((IData)(vlSymsp->TOP__top__IntrUnit.__PVT__ismstatus) 
                                    & (IData)(vlSymsp->TOP__top.__PVT__IntrEn)) 
                                   | (IData)(vlSymsp->TOP__top__IntrUnit.__PVT__irq_raise))));
        tracep->fullBit(oldp+776,(((0x304U == (vlSymsp->TOP__top.Inst 
                                               >> 0x14U)) 
                                   & (IData)(vlSymsp->TOP__top.__PVT__IntrEn))));
        tracep->fullBit(oldp+777,(vlSelf->clk));
        tracep->fullBit(oldp+778,(vlSelf->rst));
        tracep->fullIData(oldp+779,(vlSelf->Inst),32);
        tracep->fullQData(oldp+780,(vlSelf->pc),64);
        tracep->fullQData(oldp+782,(vlSymsp->TOP__top__IntrUnit.mcase),64);
        tracep->fullQData(oldp+784,(vlSymsp->TOP__top.__PVT__waddr),64);
        tracep->fullIData(oldp+786,(0x40U),32);
        tracep->fullQData(oldp+787,(0x80000000ULL),64);
        tracep->fullBit(oldp+789,(1U));
        tracep->fullIData(oldp+790,(0xcU),32);
        tracep->fullIData(oldp+791,(7U),32);
        tracep->fullIData(oldp+792,(3U),32);
        tracep->fullIData(oldp+793,(1U),32);
        tracep->fullCData(oldp+794,(0U),3);
        __Vtemp15[0U] = 0x37eceb9aU;
        __Vtemp15[1U] = 0xd46c1ac7U;
        __Vtemp15[2U] = 0x65d92f5bU;
        __Vtemp15[3U] = 0x268da6U;
        tracep->fullWData(oldp+795,(__Vtemp15),120);
        tracep->fullIData(oldp+799,(0xaU),32);
        tracep->fullIData(oldp+800,(0xcU),32);
        tracep->fullBit(oldp+801,(0U));
        tracep->fullCData(oldp+802,(0xe7U),8);
        tracep->fullIData(oldp+803,(8U),32);
        tracep->fullIData(oldp+804,(1U),32);
        tracep->fullIData(oldp+805,(4U),32);
        tracep->fullSData(oldp+806,(0x35bdU),16);
        tracep->fullIData(oldp+807,(4U),32);
        tracep->fullIData(oldp+808,(2U),32);
        tracep->fullCData(oldp+809,(0U),2);
        tracep->fullIData(oldp+810,(0x1bceU),18);
        tracep->fullIData(oldp+811,(9U),32);
        tracep->fullIData(oldp+812,(2U),32);
        tracep->fullCData(oldp+813,(1U),2);
        tracep->fullIData(oldp+814,(5U),32);
        tracep->fullIData(oldp+815,(7U),32);
        tracep->fullQData(oldp+816,(0ULL),64);
        tracep->fullIData(oldp+818,(0x43U),32);
        tracep->fullIData(oldp+819,(5U),32);
        tracep->fullIData(oldp+820,(0x42U),32);
        tracep->fullIData(oldp+821,(3U),32);
        tracep->fullIData(oldp+822,(6U),32);
        tracep->fullIData(oldp+823,(0x10U),32);
        tracep->fullIData(oldp+824,(0x44U),32);
        tracep->fullIData(oldp+825,(0x10U),32);
        tracep->fullCData(oldp+826,(0U),8);
        tracep->fullQData(oldp+827,(0xc060343cffULL),40);
        tracep->fullQData(oldp+829,(0xffffffffffffffffULL),64);
        tracep->fullBit(oldp+831,(vlSymsp->TOP__top__IntrUnit.__PVT__isCSRw));
        __Vtemp16[0U] = 7U;
        __Vtemp16[1U] = 0x80000000U;
        __Vtemp16[2U] = 0x2eU;
        __Vtemp16[3U] = 0U;
        __Vtemp16[4U] = 4U;
        tracep->fullWData(oldp+832,(__Vtemp16),132);
        tracep->fullIData(oldp+837,(6U),32);
        tracep->fullQData(oldp+838,(0xa00001800ULL),64);
    }
}
