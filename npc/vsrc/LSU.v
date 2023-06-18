module LSU(
    input clk,
    input rst,

    //data from exu
    input[`RegWidth-1:0] addr,//ALUres
    input[`RegWidth-1:0] wdata,//R_rs2
    //ctrl from exu
    input [2:0] MemOP,
    input we,

    //data out
    output [`RegWidth-1:0] dataout,
    output clint_mtip,

    //pipeline
    input IntrEn_i,
    input [1:0] RegWdata_src_i,
    input RegWr_i, 
    input[`INSTWide-1:0] lsu_inst,
    input[`RegWidth-1:0] lsu_pc,
    input[`RegWidth-1:0] R_rs1_i,

    output IntrEn_o,
    output [1:0] RegWdata_src_o,
    output RegWr_o, 
    output[`INSTWide-1:0] inst_o,
    output[`RegWidth-1:0] pc_o,
    output[`RegWidth-1:0] R_rs1_o,    
    output [`RegWidth-1:0] ALUres_o,
    //handshakes
    input exu_valid,
    output lsu_ready,
    output lsu_valid,
    input wb_ready
);

//(reg有数据但是将被读取|没有数据)&(当前数据处理完毕)
assign lsu_ready=((lsu_valid&wb_ready)|(!lsu_valid));

wire lsu_valid_next=lsu_valid&(!wb_ready)|//数据没被读取
                    (( (lsu_valid&wb_ready)|(!lsu_valid) )&( lsu_ready&exu_valid));

Reg #(1,'d0) lsu_valid_reg(clk,rst,lsu_valid_next,lsu_valid,1'b1);

//（reg有数据但将被读取|reg没数据）&（有新数据且没有数据冲突）
wire popline_wen=((lsu_valid&wb_ready)|(!lsu_valid))&(exu_valid&lsu_ready);

Reg #(1,'d0) wb_IntrEn_reg(clk,rst,IntrEn_i,IntrEn_o,popline_wen);
Reg #(`RegWidth,'d0) wb_pc_reg(clk,rst,lsu_pc,pc_o,popline_wen);
Reg #(`RegWidth,'d0) wb_Rrs1_reg(clk,rst,R_rs1_i,R_rs1_o,popline_wen);
Reg #(1,'d0) wb_mtip_reg(clk,rst,clint_mtip_next,clint_mtip,popline_wen);
Reg #(`INSTWide,'d0) wb_inst_reg(clk,rst,lsu_inst,inst_o,popline_wen);
Reg #(`RegWidth,'d0) wb_alures_reg(clk,rst,addr,ALUres_o,popline_wen);
Reg #(1,'d0) wb_regwr_reg(clk,rst,RegWr_i,RegWr_o,popline_wen);
Reg #(2,'d0) wb_regdataSrc_reg(clk,rst,RegWdata_src_i,RegWdata_src_o,popline_wen);
Reg #(`RegWidth,'d0) wb_dataout_reg(clk,rst,dataout_d,dataout,popline_wen);

wire isclint=(addr>=64'h2000000&addr<=64'h200BFFF)?1'b1:1'b0;

wire RdEn=(|MemOP)&&(~we);
wire Datamem_we=(!isclint)&we;
wire clint_we=isclint&we;
wire clint_re=isclint&RdEn;

wire[`RegWidth-1:0] dataMem_out;
wire[`RegWidth-1:0] clint_dout;
wire clint_mtip_next;

DataMem DataMem(.clk(clk),.Addr(addr),.MemOP(MemOP),.DataIn(wdata),.WrEn(Datamem_we),.DataOut(dataMem_out));

clint clintU(.clk(clk),.clint_din(wdata),.clint_addr(addr),.we(clint_we),.re(clint_re),
                .clint_mtip(clint_mtip_next),.clint_dout(clint_dout));


wire [`RegWidth-1:0] dataout_d=isclint?clint_dout:dataMem_out;




endmodule