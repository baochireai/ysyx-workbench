module ForwardUnit (

    input          lsu_isRegWrite,
    input  [4:0]   lsu_rd,
    input  [63:0]  lsu_Wdata,
    input          lsu_data_valid,

    input          wb_isRegWrite,
    input  [4:0]   wb_rd,
    input  [63:0]  wb_Wdata,
    input          wb_data_valid,

    output          hazard_rs1       ,
    output          hazard_rs2       ,
    output          forward_rs1_valid,
    output          forward_rs2_valid,
    output  [63:0]  forward_R_rs1    ,
    output  [63:0]  forward_R_rs2    ,
    input   [4:0]   exu_rs1             ,
    input   [4:0]   exu_rs2             
);

    wire lsu_hazard_rs1 = lsu_isRegWrite && (lsu_rd == exu_rs1) && (lsu_rd!=5'd0);
    wire lsu_hazard_rs2 = lsu_isRegWrite && (lsu_rd == exu_rs2) && (lsu_rd!=5'd0);

    wire wb_hazard_rs1 = wb_isRegWrite && (wb_rd == exu_rs1) && (wb_rd!=5'd0) ;
    wire wb_hazard_rs2 = wb_isRegWrite && (wb_rd == exu_rs2) && (wb_rd!=5'd0) ;

    assign hazard_rs1 = lsu_hazard_rs1 || wb_hazard_rs1 ;
    assign hazard_rs2 = lsu_hazard_rs2 || wb_hazard_rs2 ;

    assign forward_rs1_valid = lsu_hazard_rs1 ? lsu_data_valid : wb_hazard_rs1&wb_data_valid ;
    assign forward_rs2_valid = lsu_hazard_rs2 ? lsu_data_valid : wb_hazard_rs2&wb_data_valid ;

    // assign forward_R_rs1 = {64{lsu_hazard_rs1}} & lsuWdata | {64{wb_hazard_rs1}} & wb_Wdata ;
    assign forward_R_rs1 = lsu_hazard_rs1 ? lsu_Wdata : wb_Wdata ;
    assign forward_R_rs2 = lsu_hazard_rs2 ? lsu_Wdata : wb_Wdata ;

endmodule
