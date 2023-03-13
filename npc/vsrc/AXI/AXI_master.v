module AXI_master 
#(parameter DWIDTH=32,
  parameter AWIDTH=64)
(
    //global
    input ACLK,
    input ARESTn,
    //Write address channel
    output reg AWVALID,
    input AWREADY,
    output reg[AWIDTH-1:0] AWADDR,
    //Write data channel
    output reg WVALID,
    input WREADY,
    output reg[DWIDTH-1:0] WDATA,
    output reg[DWIDTH/8-1:0] WSTRB,
    //write response channel
    output reg BREADY,
    input BVALID,
    input [1:0] BRESP,
    //Read address channel
    output reg ARVALID,
    input ARREADY,
    output reg[AWIDTH-1:0] ARADDR,
    //Read data channel
    output reg RREADY,
    input RVALID,
    input [1:0] RRESP,
    input[DWIDTH-1:0] RDATA,
    //master interface
    input [AWIDTH-1:0] araddr,
    input [AWIDTH-1:0] awaddr,
    input [DWIDTH-1:0] wdata,
    input [DWIDTH/8-1:0] wstrb,
    output reg[DWIDTH-1:0] rdata
);

  /*
  Write address channel
  状态数：
  1.等待写请求(空闲状态),给出写地址并置位有效位
  2.等待接受位
  */
  parameter [1:0] AW_IDLE=2'b00,AW_VALID=2'b01,AW_WAIT=2'b10;
  reg[1:0] AW_state,AW_next_state;

  always @(posedge ACLK or negedge ARESTn) begin   //状态变化
    if(!ARESTn) AW_state<=AW_IDLE;
    else AW_state<=AW_next_state;
  end

  always @(*) begin  //下一状态
    case (AW_state)
      AW_IDLE: if(awaddr>{AWIDTH{1'b0}}) AW_next_state=AW_VALID;
               else AW_next_state=AW_IDLE;
      AW_VALID: AW_next_state=AW_WAIT;
      AW_WAIT: if(AWREADY) AW_next_state=AW_IDLE;
               else AW_next_state=AW_WAIT;                    
      default: AW_next_state=AW_IDLE;
    endcase
  end

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) begin
      AW_VALID <=1'b0;AWADDR<={AWIDTH{1'b0}};
    end
    else
        case (AW_state)
          AW_IDLE: begin AWVALID=1'b0;AWADDR={AWIDTH{1'b0}}; end//{ID_WIDTH{1'b0}}
          AW_VALID: begin AWVALID=1'b1;AWADDR=awaddr;  end//一个时钟周期能够读完
          AW_WAIT: AWVALID=1'b1;
          default: AWVALID=1'b0;
        endcase
  end

  /*
  Write data channel
  状态：
  1.IDEL：等待写请求
  2.VAILD:发出写数据和有效位
  3.WAIT:等待ready
  */
  parameter [1:0] W_IDLE=2'b00,W_VALID=2'b01,W_WAIT=2'b10;
  reg[1:0] W_state,W_next_state;

  always @(posedge ACLK or negedge ARESTn) begin   //状态变化
    if(!ARESTn) W_state<=W_IDLE;
    else W_state<=W_next_state;
  end

  always @(*) begin  //下一状态
    case (W_state)
      W_IDLE: if(awaddr>{AWIDTH{1'b0}}) W_next_state=W_VALID;
               else W_next_state=W_IDLE;
      W_VALID: W_next_state=W_WAIT;
      W_WAIT:if(WREADY) W_next_state=W_IDLE;
               else W_next_state=W_WAIT;     
      default: W_next_state=W_IDLE;
    endcase
  end

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) begin
      W_VALID <=1'b0;WDATA<={DWIDTH{1'b0}};
    end
    else
        case (W_state)
          W_IDLE: begin WVALID=1'b0;WDATA={DWIDTH{1'b0}}; end
          W_VALID: begin WVALID=1'b1;WDATA=wdata;  end//一个时钟周期能够读完
          W_WAIT: WVALID=1'b1;
          default: W_VALID=1'b0;
        endcase
  end

  /*
  Write response channel
  状态：
  1.IDEL：等待BVAILD
  2.VAILD:读取BRESP，并置BREADY为0
  */
  parameter [1:0] W_IDLE=2'b00,W_VALID=2'b00,W_WAIT=2'b00;
  reg[1:0] W_state,W_next_state;

  always @(posedge ACLK or negedge ARESTn) begin   //状态变化
    if(!ARESTn) W_state<=W_IDLE;
    else W_state<=W_next_state;
  end

  always @(*) begin  //下一状态
    case (W_state)
      W_IDLE: if(awaddr>{AWIDTH{1'b0}}) W_next_state=W_VALID;
               else W_next_state=W_IDLE;
      W_VALID: W_next_state=W_WAIT;
      W_WAIT:if(WREADY) W_next_state=W_IDLE;
               else W_next_state=W_WAIT;     
      default: W_next_state=W_IDLE;
    endcase
  end

  always @(posedge ACLK or negedge ARESTn) begin
    if(!ARESTn) begin
      W_VALID <=1'b0;WDATA<={DWIDTH{1'b0}};
    end
    else
        case (W_state)
          W_IDLE: begin WVALID=1'b0;WDATA={DWIDTH{1'b0}}; end
          W_VALID: begin WVALID=1'b1;WDATA=wdata;  end//一个时钟周期能够读完
          W_WAIT: WVALID=1'b1;
          default: W_VALID=1'b0;
        endcase
  end

endmodule