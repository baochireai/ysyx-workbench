module WB(
    input clk,
    input rst,

    // 1. input from pre stage 
    // 1.1 intr/csr
    input                       IntrEn,
    input                       clint_mtip,
    input   [`RegWidth-1:0]     R_rs1_i,
    // 1.2 regsfile wb
    input   [1:0]               RegSrc,
    input                       RegWr,
    input   [`RegWidth-1:0]     ALUres,
    input   [`RegWidth-1:0]     MemOut,
    // 1.3 inst&&pc
    input   [`RegWidth-1:0]     wb_pc,
    input   [`INSTWide-1:0]     wb_inst,
    
    // 2. to witf (raw)
    output                      witf_pop_en,
    
    // 3. to preif 
    output                      isIntrPC,
    output  [`RegWidth-1:0]      IntrPC,

    // 4. reg wb
    output                      o_RegWr_en,
    output  [`RegAddrBus-1:0]   o_RegWaddr,
    output  [`RegWidth-1:0]     o_RegWdata,

    // 5. handshakes
    input wb_valid,
    output wb_ready,
);

    // 1. handshake 
    wire wb_ready_go = 1'b1 ;
    assign wb_ready = (~wb_valid) || wb_ready_go ;

    // 2. witf pop
    assign witf_pop_en = wb_valid && wb_ready_go && Regwr && (wb_inst[11:7] != 5'd0);
    
    // 3. regfiles wb
    // 3.1 wdata
    MuxKeyInternal #(3,2,64,1) RegWsrcMux(.out(o_RegWdata),.key(RegSrc),.default_out(64'd0),.lut({
        2'd0,ALUres,
        2'd1,MemOut,//clint memory map
        2'd2,IntrOut
    }));
    // 3.2 wen
    wire o_RegWr_en = wb_valid && RegWr ;
    // 3.3 waddr
    assign o_RegWaddr = wb_inst[`inst_rd] ;

    // 4. intr/csr
    wire isIntrPC;
    wire [`RegWidth-1:0] IntrOut , IntrPC ;
    Intr IntrUnit(  .clk(clk),.rst(rst),
                    .IntrEn(IntrEn&&wb_valid),.clint_mtip(clint_mtip),.csr(wb_inst[31:20]),func3(wb_inst[14:12]),
                    .pc(wb_pc),.R_rs1(R_rs1_i),.zimm(wb_inst[19:15]),
                    .isIntrPC(isIntrPC),.IntrPC(IntrPC),.dout(IntrOut));

endmodule