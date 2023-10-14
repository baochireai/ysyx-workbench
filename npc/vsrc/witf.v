`include "defines.v"
/*************
The witf(writeback instrution track fifo)
*************/
module witf(
    input clk,
    input rst,

    // 1. disp inst info form id
    input disp_en,
    input [`RegAddrBus] rs1,
    input [`RegAddrBus] rs2,
    input [`RegAddrBus] rd,
    
    // 2. raw check for id
    output isRAW,
    output witf_full,
    output witf_empty,
    
    // 3. finish wb to pop inst
    input wb_en ,
    input flush_witf
);

wire [`WITF_AddrBus]wptr_r;
wire [`WITF_AddrBus]rptr_r;

reg [`WITF_DEPTH-1:0] vld_r;//表项有效指示
wire [`WITF_DEPTH-1:0] vld_set;
wire [`WITF_DEPTH-1:0] vld_clr;
wire [`WITF_DEPTH-1:0] vld_ena;
wire [`WITF_DEPTH-1:0] vld_nxt;

reg [`RegAddrBus] rdidx_r[`WITF_DEPTH-1:0];

wire [`WITF_DEPTH-1:0] rd_match_rs1idx;
wire [`WITF_DEPTH-1:0] rd_match_rs2idx;

wire witfrd_match_disprs1;
wire witfrd_match_disprs2;

  /*********维护读写指针以及满空标志**********/
  generate
  if(`WITF_DEPTH > 1) begin: depth_gt1//{

      wire wptr_flg_r;//写指针MSB额外标志位
      wire wptr_flg_nxt = ~wptr_flg_r;
      wire wptr_flg_ena = (wptr_r == (`WITF_DEPTH-1)) & disp_en&(!isRAW);//标志位取反信号
            
      Reg #(1,'d0) wptr_flg_reg(clk,rst|flush_witf,wptr_flg_nxt,wptr_flg_r,wptr_flg_ena);
      
      wire [`WITF_AWIDTH-1:0] wptr_nxt; //写指针更新
      
      assign wptr_nxt = wptr_flg_ena ? `WITF_AWIDTH'b0 : (wptr_r + 1'b1);
      
      Reg #(`WITF_AWIDTH,'d0) wptr_reg(clk,rst|flush_witf,wptr_nxt,wptr_r,disp_en&(!isRAW));
      
      wire rptr_flg_r;//读指针MSB额外标志位
      wire rptr_flg_nxt = ~rptr_flg_r;
      wire rptr_flg_ena = (rptr_r == (`WITF_DEPTH-1)) & wb_en;//$unsigned(`WITF_DEPTH-1)
      
      Reg #(1,'d0) rptr_flg_reg(clk,rst|flush_witf,rptr_flg_nxt,rptr_flg_r,rptr_flg_ena);
      
      wire [`WITF_AWIDTH-1:0] rptr_nxt; //读指针更新
      
      assign rptr_nxt = rptr_flg_ena ? `WITF_AWIDTH'b0 : (rptr_r + 1'b1);

      Reg #(`WITF_AWIDTH,'d0) rptr_reg(clk,rst|flush_witf,rptr_nxt,rptr_r,wb_en);


      assign witf_empty = (rptr_r == wptr_r) &   (rptr_flg_r == wptr_flg_r);
      assign witf_full  = (rptr_r == wptr_r) & (~(rptr_flg_r == wptr_flg_r));
  end//}
  else begin: depth_eq1//}{
      assign wptr_r =1'b0;
      assign rptr_r =1'b0;
      assign witf_empty = ~vld_r[0];
      assign witf_full  = vld_r[0];
  end//}
  endgenerate//}

  genvar i;
  generate //{
      for (i=0; i<`WITF_DEPTH; i=i+1) begin:witf_entries//{
  
        assign vld_set[i] = disp_en & (!isRAW) & (wptr_r == i);
        assign vld_clr[i] = wb_en & (rptr_r == i);
        assign vld_ena[i] = vld_set[i] |   vld_clr[i];
        assign vld_nxt[i] = vld_set[i] | (~vld_clr[i]);
  
        Reg #(1,'d0) vld_reg(clk,rst|flush_witf,vld_nxt[i],vld_r[i],vld_ena[i]);

        //Payload only set, no need to clear
        //sirv_gnrl_dffl #(`RegAWIDTH) rdidx_dfflrs(vld_set[i], disp_i_rdidx, rdidx_r[i], clk);

        Reg #(`RegAWIDTH,'d0) rdidx_reg(clk,rst,rd,rdidx_r[i],vld_set[i]);

        // sirv_gnrl_dffl #(`E203_PC_SIZE    ) pc_dfflrs   (vld_set[i], disp_i_pc   , pc_r[i]   , clk);
        // sirv_gnrl_dffl #(1)                 rdwen_dfflrs(vld_set[i], disp_i_rdwen, rdwen_r[i], clk);
        // sirv_gnrl_dffl #(1)                 rdfpu_dfflrs(vld_set[i], disp_i_rdfpu, rdfpu_r[i], clk);
        
        assign rd_match_rs1idx[i] = vld_r[i] &(rdidx_r[i] == rs1);
        assign rd_match_rs2idx[i] = vld_r[i] &(rdidx_r[i] == rs2);

        //assign rd_match_rs1idx[i] = vld_r[i] & rdwen_r[i] & disp_i_rs1en & (rdfpu_r[i] == disp_i_rs1fpu) & (rdidx_r[i] == disp_i_rs1idx);
        //assign rd_match_rs2idx[i] = vld_r[i] & rdwen_r[i] & disp_i_rs2en & (rdfpu_r[i] == disp_i_rs2fpu) & (rdidx_r[i] == disp_i_rs2idx);
        // assign rd_match_rs3idx[i] = vld_r[i] & rdwen_r[i] & disp_i_rs3en & (rdfpu_r[i] == disp_i_rs3fpu) & (rdidx_r[i] == disp_i_rs3idx);
        // assign rd_match_rdidx [i] = vld_r[i] & rdwen_r[i] & disp_i_rdwen & (rdfpu_r[i] == disp_i_rdfpu ) & (rdidx_r[i] == disp_i_rdidx );
      end//}
  endgenerate//}

  assign witfrd_match_disprs1 = |rd_match_rs1idx;
  assign witfrd_match_disprs2 = |rd_match_rs2idx;

  assign isRAW=witfrd_match_disprs1|witfrd_match_disprs2;

  // assign ret_rdidx = rdidx_r[ret_ptr];
  // assign ret_pc    = pc_r [ret_ptr];
  // assign ret_rdwen = rdwen_r[ret_ptr];
  // assign ret_rdfpu = rdfpu_r[ret_ptr];

endmodule