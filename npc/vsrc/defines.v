`define MemAddrBus 32
`define MemDataBus 64
`define INSTWide 32
`define RegWidth 64
`define immBus 31:7

`define WITF_DataBus 7:0
`define WITF_AWIDTH 3
`define WITF_AddrBus `WITF_AWIDTH-1:0
`define WITF_DEPTH (1<<`WITF_AWIDTH)

`define RegAddrBus 4:0
`define RegAWIDTH 5
`define inst_rd 11:7
`define inst_rs1 19:15
`define inst_rs2 24:20