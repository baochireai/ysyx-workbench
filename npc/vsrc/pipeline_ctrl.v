module pipeline_ctrl( 
    input           wb_intr         ,
    input           exu_jump        ,
    input   [63:0]  pc_intr         ,
    input   [63:0]  pc_jump         ,
    input           excep_id        ,
    input           excep_exu       ,
    input           excep_lsu       ,
    input           lsu_mtip        ,
    output          flush_if        ,
    output          flush_id        ,
    output          flush_exu       ,
    output          flush_lsu       ,
    output          flush_witf      ,
    output          stall_if        ,
    output          stall_exu_store ,
    output          jump            ,
    output  [63:0]  jumppc          
);

    assign jump = exu_jump || wb_intr ;
    assign jumppc = {64{wb_intr}} & pc_intr | {64{~wb_intr}} & pc_jump ;

    assign flush_if = jump ;
    assign flush_id = jump ;
    assign flush_exu = wb_intr ;
    assign flush_lsu = wb_intr ;
    assign flush_witf = wb_intr ;

    assign stall_if = excep_exu || excep_id || excep_lsu ;
    assign stall_exu_store = lsu_mtip ;

endmodule