module mul#(
  parameter W=64
)(
  input   [W-1:0]   i_x     ,
  input   [W-1:0]   i_y     ,
  output  [W-1:0]   o_hi_res,
  output  [W-1:0]   o_lw_res
);

  localparam TOTAL_W = W + 2;
  localparam PNUM = TOTAL_W/2;

  wire [TOTAL_W-1:0] x ,y ;

  assign x = { {2{i_x[W-1]}} , i_x } ;
  assign y = { {2{i_y[W-1]}} , i_y } ;

  wire [TOTAL_W:0] p[PNUM-1:0] ;
  wire [PNUM-1:0] c ; 
  // generate booth adder 
  radix4_booth #(.W(TOTAL_W)) B_0(
    .x(x),
    .s({y[1:0],1'b0}),
    .p(p[0]),
    .c(c[0])
  );

  genvar i ;
  generate 
    for(i=1;i<PNUM;i=i+1) begin:booth_scan
      radix4_booth #(.W(TOTAL_W)) B_(
        .x(x),
        .s(y[2*i+1:2*i-1]),
        .p(p[i]),
        .c(c[i])        
      );
    end
  endgenerate

  wire [2*TOTAL_W-1:0] tree_in  [PNUM-1:0] ;
  wire [2*TOTAL_W-1:0] tree_out [1:0]  ;
  
  assign tree_in[ 0] = {{(TOTAL_W-1){c[0]}} , p[0]	};
  generate 
    for(i=1;i<PNUM;i=i+1) begin:wallace_tree_in
        assign tree_in[i] = {{(TOTAL_W-1-2*i){c[i]}}, p[i], 1'b0, c[i-1], {(2*i-2){1'b0}}};
    end
  endgenerate


  // wallace tree
  wallace_tree_33 #(2*TOTAL_W) wallace_tree ( .in (tree_in) ,.out(tree_out));

  // res gen
  wire [2*TOTAL_W-1:0] res ;
  wire carry ;
  
  cla_nbit #(.N(2*TOTAL_W)) u_cla_nbit (
    .i_a(tree_out[0]), 
    .i_b(tree_out[1]), 
    .i_c(1'b0       ), 
    .o_s(res        ), 
    .o_c(carry      )
  );

  assign {o_hi_res,o_lw_res} = res[2*W-1:0] ;

endmodule


module radix4_booth#(
  parameter W=64
)(
  input   [W-1:0] x ,
  input   [2:0]   s ,
  output  [W:0]   p ,
  output          c 
);


  wire y_add , y , y_sub ;
  assign { y_add , y , y_sub } =  s ;

  wire sel_negative , sel_double_negative , sel_positive , sel_double_positive ;

  assign sel_negative =  y_add && (y && ~y_sub || ~y && y_sub);
  assign sel_positive = ~y_add && (y && ~y_sub || ~y && y_sub);
  assign sel_double_negative =  y_add && ~y && ~y_sub;
  assign sel_double_positive = ~y_add &&  y &&  y_sub;

  // assign p = {(W+1){sel_double_negative}} & (~{x,1'b0}) | {(W+1){sel_negative}} & (~{x[W-1],x}) 
  //           |{(W+1){sel_double_positive}} & ( {x,1'b0}) | {(W+1){sel_positive}} & ( {x[W-1],x}) ;

    // assign p =    ( {(W+1){sel_negative}} & ~{1'b0,x} ) | ( {(W+1){sel_double_negative}} & ~{x,1'b0}) 
    //            |  ( {(W+1){sel_positive}} &  {1'b0,x} ) | ( {(W+1){sel_double_positive}} &  {x,1'b0});
  // assign p =  {1'b0,x}  ;
  assign p = sel_double_negative ? ~{x, 1'b0} : 
            (sel_double_positive ? {x, 1'b0} :
            (sel_negative ? ~{1'b0,x}:
            (sel_positive ?  {1'b0,x} : {(W+1){1'b0}})));  
  assign c = sel_negative | sel_double_negative ? 1'b1 : 1'b0 ; 

endmodule

module csa_nbits#(
  parameter W = 132
)(
  input   [W-1:0] i_a,
  input   [W-1:0] i_b,
  input   [W-1:0] i_c,
  output  [W-1:0] o_s,
  output  [W-1:0] o_c
);

  wire p[W-1:0] , g[W-1:0] ;

  genvar i ;
  generate
    for(i=0 ; i < W ; i = i +1 ) begin : csa
      assign p[i] = i_a[i] ^ i_b[i] ;
      assign g[i] = i_a[i] & i_b[i] ;
      assign o_s[i] = p[i]^i_c[i];
      assign o_c[i] = g[i] | i_c[i]&p[i] ;
    end
  endgenerate

endmodule

module wallace_tree_33 #(
  parameter W=132
)(
  input [W-1:0] in [32:0] ,
  output [W-1:0] out[1:0]
);
  
  genvar i ;
  // 1. first level, 11 csa, 33p -> 22p://////////////////////////////////////////////////////////////
  wire [W-1:0] s_row1 [10:0] ;
  wire [W-1:0] c_row1 [10:0] ;
  wire [W-1:0] c_row1_shift [10:0] ;
  generate
    for(i=0 ; i < 11 ; i = i +1 ) begin : csa_row1
      csa_nbits #(W) csa_row1(.i_a(in[3*i]),.i_b(in[3*i+1]),.i_c(in[3*i+2]),.o_s(s_row1[i]),.o_c(c_row1[i]));      
      assign c_row1_shift[i] = {c_row1[i][W-2:0],1'b0} ;
    end
  endgenerate

  // 2. second level, 7 csa, 22p -> 15p (2*7+1):///////////////////////////////////////////////////////////
  wire [W-1:0] s_row2 [6:0] ;
  wire [W-1:0] c_row2 [6:0] ;
  wire [W-1:0] c_row2_shift [6:0] ;
  csa_nbits #(W) csa_row2_0( s_row1[0]       , c_row1_shift[0] , s_row1[1]       , s_row2[0] , c_row2[0] );   
  csa_nbits #(W) csa_row2_1( c_row1_shift[1] , s_row1[2]       , c_row1_shift[2] , s_row2[1] , c_row2[1] );      
  csa_nbits #(W) csa_row2_2( s_row1[3]       , c_row1_shift[3] , s_row1[4]       , s_row2[2] , c_row2[2] );      
  csa_nbits #(W) csa_row2_3( c_row1_shift[4] , s_row1[5]       , c_row1_shift[5] , s_row2[3] , c_row2[3] );      
  csa_nbits #(W) csa_row2_4( s_row1[6]       , c_row1_shift[6] , s_row1[7]       , s_row2[4] , c_row2[4] );      
  csa_nbits #(W) csa_row2_5( c_row1_shift[7] , s_row1[8]       , c_row1_shift[8] , s_row2[5] , c_row2[5] );      
  csa_nbits #(W) csa_row2_6( s_row1[9]       , c_row1_shift[9] , s_row1[10]      , s_row2[6] , c_row2[6] );      

  generate
    for(i=0 ; i < 7 ; i = i +1 ) begin : csa_row2_c_shift
      assign c_row2_shift[i] = {c_row2[i][W-2:0],1'b0} ;
    end
  endgenerate

  // 3. third level, 5 csa, 15p -> 10p: ///////////////////////////////////////////////////////////////////
  wire [W-1:0] s_row3 [4:0] ;
  wire [W-1:0] c_row3 [4:0] ;
  wire [W-1:0] c_row3_shift [4:0] ;
  csa_nbits #(W) csa_row3_0( c_row1_shift[10], s_row2[0]       , c_row2_shift[0] , s_row3[0] , c_row3[0] );      
  csa_nbits #(W) csa_row3_1( s_row2[1]       , c_row2_shift[1] , s_row2[2]       , s_row3[1] , c_row3[1] );      
  csa_nbits #(W) csa_row3_2( c_row2_shift[2] , s_row2[3]       , c_row2_shift[3] , s_row3[2] , c_row3[2] );      
  csa_nbits #(W) csa_row3_3( s_row2[4]       , c_row2_shift[4] , s_row2[5]       , s_row3[3] , c_row3[3] );      
  csa_nbits #(W) csa_row3_4( c_row2_shift[5] , s_row2[6]       , c_row2_shift[6] , s_row3[4] , c_row3[4] );      

  generate
    for(i=0 ; i < 5 ; i = i +1 ) begin : csa_row3_c_shift
      assign c_row3_shift[i] = {c_row3[i][W-2:0],1'b0} ;
    end
  endgenerate

  // 4. fourth level, 3 csa, 10p -> 7p (2*3+1): ////////////////////////////////////////////////////////////
    wire [W-1:0] s_row4 [2:0] ;
    wire [W-1:0] c_row4 [2:0] ;
    wire [W-1:0] c_row4_shift [2:0] ;
    csa_nbits #(W) csa_row4_0( s_row3[0]       , c_row3_shift[0] , s_row3[1]       , s_row4[0] , c_row4[0] );   
    csa_nbits #(W) csa_row4_1( c_row3_shift[1] , s_row3[2]       , c_row3_shift[2] , s_row4[1] , c_row4[1] );      
    csa_nbits #(W) csa_row4_2( s_row3[3]       , c_row3_shift[3] , s_row3[4]       , s_row4[2] , c_row4[2] );         

    generate
      for(i=0 ; i < 3 ; i = i +1 ) begin : csa_row4_c_shift
        assign c_row4_shift[i] = {c_row4[i][W-2:0],1'b0} ;
      end
    endgenerate

    // 5. fifth level, 2 csa, 7p -> 5p (2*2+1): //////////////////////////////////////////////////////////////
    wire [W-1:0] s_row5 [1:0] ;
    wire [W-1:0] c_row5 [1:0] ;
    wire [W-1:0] c_row5_shift [1:0] ;
    csa_nbits #(W) csa_row5_0( c_row3_shift[4] , s_row4[0]       , c_row4_shift[0] , s_row5[0] , c_row5[0] );      
    csa_nbits #(W) csa_row5_1( s_row4[1]       , c_row4_shift[1] , s_row4[2]       , s_row5[1] , c_row5[1] );      

    generate
      for(i=0 ; i < 2 ; i = i +1 ) begin : csa_row5_c_shift
        assign c_row5_shift[i] = {c_row5[i][W-2:0],1'b0} ;
      end
    endgenerate

    // 6. sixth level, 1 csa, 5p -> 4p (2+2): //////////////////////////////////////////////////////////////
    wire [W-1:0] s_row6 ;
    wire [W-1:0] c_row6 ;
    wire [W-1:0] c_row6_shift ;
    csa_nbits #(W) csa_row6( c_row4_shift[2], s_row5[0]       , c_row5_shift[0] , s_row6 , c_row6 );      
    assign c_row6_shift = {c_row6[W-2:0],1'b0} ;

    // 7. seventh level, 1 csa, 4p -> 3p (2+1): //////////////////////////////////////////////////////////////
    wire [W-1:0] s_row7 ;
    wire [W-1:0] c_row7 ;
    wire [W-1:0] c_row7_shift ;
    csa_nbits #(W) csa_row7( s_row5[1]       , c_row5_shift[1] , s_row6       , s_row7 , c_row7 );      
    assign c_row7_shift = {c_row7[W-2:0],1'b0} ;

    // 8. eighth level, 1 csa, 3p -> 2p (2): //////////////////////////////////////////////////////////////
    wire [W-1:0] s_row8 ;
    wire [W-1:0] c_row8 ;
    wire [W-1:0] c_row8_shift ;
    csa_nbits #(W) csa_row8( c_row6_shift , s_row7       , c_row7_shift , s_row8 , c_row8 );      
    assign c_row8_shift = {c_row8[W-2:0],1'b0} ;
    
    // 9. output 2p :////////////////////////////////////////////////////////////////////////////////////////
    assign out[1] = c_row8_shift;
    assign out[0] = s_row8;

endmodule

module cla_nbit #(
  parameter N = 64
)(
  input  [N-1:0] i_a, 
  input  [N-1:0] i_b, 
  input          i_c, 
  output [N-1:0] o_s, 
  output         o_c
);

  assign {o_c,o_s} = i_a + i_b + { {(N-1){1'b0}} , i_c } ;
  // wire [N-1:0] p;
  // wire [N-1:0] g;
  // // verilator lint_off UNOPTFLAT
  // wire [N:0] c;
  // // verilator lint_on UNOPTFLAT

  // genvar i ;
  // generate
  //   for(i=0 ; i < N ; i = i +1 ) begin : csa
  //     assign g[i] = i_a[i] & i_b[i] ;
  //     assign p[i] = i_a[i] ^ i_b[i] ;
  //     assign c[i+1] = g[i] | c[i] & p[i] ;
  //     assign o_s[i] = p[i] ^ c[i] ;
  //   end
  // endgenerate

  // assign c[0] = i_c;
  // assign o_c = c[N];

endmodule
