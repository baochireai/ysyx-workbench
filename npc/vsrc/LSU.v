module LSU(
    input clk,
    input rst,

    // 1. cache
    input cache_rvalid,
    input [63:0] cache_rdata,

    // 2. inputs from pre stage    
    // 2.1 mem ctrl
    input                   i_MemWr,
    input [2:0]             i_MemOP,
    input [`RegWidth-1:0]   i_R_rs2,
    // 2.2 inst&pc
    input[`INSTWide-1:0]    lsu_inst,
    input[`RegWidth-1:0]    lsu_pc,    
    // 2.3 pipeline forward
    // 2.3.1 regsfile wdata
    input [`RegWidth-1:0]   i_ALUres,
    // 2.3.2 regfile wb ctrl
    input [1:0]             i_RegSrc,//alu/mem/csr
    input                   i_RegWr, 
    // 2.3.3 intr/csr
    // input                   i_IntrEn,
    // 2.3.4 csr wdata
    input[`RegWidth-1:0]    i_R_rs1,   
    
    // mie from wb
    input mstatus_MIE ,

    // 3. outputs for next stage
    
    // 3.1 mem out 
    output [`RegWidth-1:0]  memout,
    
    // 3.2 clint(timer)
    output                  clint_mtip,    
    
    // 3.3 pipeline forward
    
    // 3.3.1 regsfile wdata
    output [`RegWidth-1:0]   o_ALUres,
    // 3.3.2 regfile wb ctrl
    output [1:0]             o_RegSrc,
    output                   o_RegWr, 
    // 3.3.3 intr/csr
    // output                   o_IntrEn,
    // 3.3.4 csr wdata
    output[`RegWidth-1:0]    o_R_rs1,   
    // 3.3.5 inst&pc
    output[`INSTWide-1:0] inst_o,
    output[`RegWidth-1:0] pc_o,
    
    // 4. handshakes
    input lsu_valid,
    output lsu_ready,
    output lsu_to_wb_valid,
    input wb_allowin,

    input pipeline_flush
);

    // 1. shake hands
    wire lsu_ready_go = (~mem_req) | isclint | cache_rvalid; 
    assign lsu_ready = (~lsu_valid) || lsu_ready_go && wb_allowin;
    assign lsu_to_wb_valid = lsu_valid && lsu_ready_go && (!pipeline_flush);
    
    // 2. rd&wr en 
    wire mem_req = (i_MemOP != 3'b011) ; 
    wire RdEn = mem_req && (~i_MemWr);
    wire WrEn = mem_req && i_MemWr;
    
    // 3. client(rw,mtip)
    wire[`RegWidth-1:0] clint_dout;
    wire [`RegWidth-1:0]   addr = i_ALUres ;
    wire isclint=(addr>=64'h2000000&addr<=64'h200BFFF)?1'b1:1'b0;
    wire clint_we = isclint & WrEn & (!pipeline_flush);
    wire clint_re = isclint & RdEn ;

    wire i_clint_mtip ;
    clint clintU(   .clk(clk),.rst(rst),
                    .clint_din(i_R_rs2),.clint_addr(addr),.we(clint_we),.re(clint_re),
                    .clint_mtip(i_clint_mtip),.clint_dout(clint_dout));
    assign clint_mtip = mstatus_MIE && i_clint_mtip && lsu_valid ;

    // 4. cache
    wire [63:0] dataMem_out;
    wire isSign = i_MemOP[2];
    MuxKeyInternal #(4,2,64, 1) sext (.out(dataMem_out),.key(i_MemOP[1:0]),.default_out(64'd0),.lut({
        2'd3,cache_rdata[63:0],
        2'd2,(isSign==1'b1)?({{32{cache_rdata[31]}},cache_rdata[31:0]}):{32'd0,cache_rdata[31:0]},
        2'd1,(isSign==1'b1)?({{48{cache_rdata[15]}},cache_rdata[15:0]}):{48'd0,cache_rdata[15:0]},
        2'd0,(isSign==1'b1)?({{56{cache_rdata[7]}},cache_rdata[7:0]}):{56'd0,cache_rdata[7:0]}
    }));
    
    // 5. out mux
    assign memout = isclint ? clint_dout : dataMem_out;

    // 6. pipeline forward
    assign o_ALUres = i_ALUres;
    
    assign o_RegSrc = i_RegSrc ;
    assign o_RegWr = i_RegWr ;

    assign o_R_rs1 = i_R_rs1 ;

    assign inst_o = lsu_inst ;
    assign pc_o = lsu_pc ;

endmodule