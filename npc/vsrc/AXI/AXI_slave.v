module AXI_slave 
#(parameter DWIDTH=32,
  parameter AWIDTH=64)
(
    //global
    input ACLK,
    input ARESTn,
    //Write address channel
    input  AWVALID,
    output reg AWREADY,
    input [AWIDTH-1:0] AWADDR,
    //Write data channel
    input  WVALID,
    output reg WREADY,
    input [DWIDTH-1:0] WDATA,
    input [DWIDTH/8-1:0] WSTRB,
    //write response channel
    input  BREADY,
    output reg BVALID,
    output reg[1:0] BRESP,
    //Read address channel
    input  ARVALID,
    output reg ARREADY,
    input [AWIDTH-1:0] ARADDR,
    //Read data channel
    input  RREADY,
    output reg RVALID,
    output reg [1:0] RRESP,
    output reg[DWIDTH-1:0] RDATA,
    //slave interface
    output reg[DWIDTH-1:0] wdata,
    output reg[AWIDTH-1:0] awaddr,
    output reg[DWIDTH/8-1:0] wstrb,
    output reg[AWIDTH-1:0] araddr,    
    input  [DWIDTH-1:0] rdata
);

  /*
  write addr channel
  状态：
  1.IDEL状态（默认AREADY为高电平），等AWVALID信号
  2.收到AWVALID，读取AWADDR，将READY置低
  3.等待数据写完BVALID，返回IDEL 
  */
  parameter [1:0] AW_IDEL=2'b00,AW_VALID=2'b01,AW_WAIT=2'b10;

  reg[1:0] AW_state,AW_next_state;

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) AW_state<=AW_IDEL;
    else AW_state<=AW_next_state;
  end

  always @(*) begin
    case (AW_state)
      AW_IDEL: if(AWVALID) AW_next_state=AW_VALID;
               else AW_next_state=AW_IDEL;
      AW_VALID: AW_next_state=AW_WAIT;
      AW_WAIT: if(BVALID) AW_next_state=AW_IDEL;
               else AW_next_state=AW_WAIT;
      default: AW_next_state=AW_IDEL;
    endcase
  end

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) begin 
      AWREADY<=1'b1;awaddr<={AWIDTH{1'b0}};
    end
    else
      case (AW_state)
        AW_IDEL: AWREADY<=1'b1;
        AW_VALID: begin  AWREADY<=1'b0;awaddr<=AWADDR; end
        AW_WAIT: AWREADY<=1'b0;
        default: begin AWREADY<=1'b1;awaddr<={AWIDTH{1'b0}}; end
      endcase
  end

  /*
  write data channel
  状态：
  1.IDEL状态（默认WEADY为高电平），等AWVALID信号
  2.VAILD:收到AWVALID，读取WDATA和WSTRB，将WREADY置低
  3.等待数据写完BVALID，返回IDEL 
  */
  parameter [1:0] W_IDLE=2'b00,W_VALID=2'b00,W_WAIT=2'b00;

  reg[1:0] W_state,W_next_state;

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) W_state<=W_IDEL;
    else W_state<=W_next_state;
  end

  always @(*) begin
    case (W_state)
      W_IDEL: if(WVALID) W_next_state=W_VALID;
               else W_next_state=W_IDEL;
      W_VALID: W_next_state=W_WAIT;
      W_WAIT: if(BVALID) W_next_state=W_IDEL;
               else W_next_state=W_WAIT;
      default: W_next_state=W_IDEL;
    endcase
  end

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) begin 
      WREADY<=1'b1;wdata<={DWIDTH{1'b0}};
    end
    else
      case (W_state)
        W_IDEL: WREADY<=1'b1;
        W_VALID: begin  WREADY<=1'b0;wdata<=WDATA;wstrb<=WSTRB; end
        W_WAIT: WREADY<=1'b0;
        default: begin WREADY<=1'b1;wdata<={DWIDTH{1'b0}}; end
      endcase
  end

  /*
  write response channel
  状态：
  1.IDEL状态
  数据传输完成状态标志 （AWREADY&&AWVALID）&&（WREADY&&WVALID）
  但是写地址通道和写通道相互独立，不会同时有效

  2.VAILD:置位BVAILD，设置BRESP为2‘b00(普通传输成功)
  3.WAIT:等待BREADY
  */
  reg [1:0] is2handshake;//写地址和写数据两次握手

  assign is2handshake[0]=AWVALID?1'b1:is2handshake[0];
  assign is2handshake[1]=WVALID?1'b1:is2handshake[1];

  wire isBVAILD=is2handshake[0]&&is2handshake[1];////完成写地址和写数据两次握手

  parameter [1:0] B_IDLE=2'b00,B_VALID=2'b00,B_WAIT=2'b00;

  reg[1:0] B_state,B_next_state;

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) B_state<=B_IDEL;
    else B_state<=B_next_state;
  end

  always @(*) begin
    case (B_state)
      B_IDEL: if(isBVAILD) B_next_state=B_VALID;
               else B_next_state=B_IDEL;
      B_VALID: B_next_state=B_WAIT;
      B_WAIT: if(BREADY) B_next_state=B_IDEL;
               else B_next_state=B_WAIT;
      default: B_next_state=B_IDEL;
    endcase
  end

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) begin 
      WREADY<=1'b1;wdata<={DWIDTH{1'b0}};
    end
    else
      case (B_state)
        B_IDEL: BVALID<=1'b0;
        B_VALID: begin  BVALID<=1'b1;BREADY<=2'b00; end
        B_WAIT: BVALID<=1'b1;
        default: begin BVALID<=1'b0;BREADY<=2'd0; end
      endcase
  end


endmodule