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

//mem addr
`define FLASH_ADDR_START 64'h0000000030000000
`define FLASH_ADDR_END 64'h000000003fffffff

`define CLINT_ADDR_START 64'h0200_0000
`define CLINT_ADDR_END 64'h0200_FFFF

// `define SERIAL_ADDR       64'ha00003f8
// `define RTC_ADDR          64'ha0000048
// `define UART_ADDR_START   64'h10000000
// `define UART_ADDR_END    64'h10000fff
// `define SDRAM_ADDR_START  64'hfc000000
// `define SDRAM_ADDR_END   64'hffffffff
// `define SPI_ADDR_START 64'h

`define MEM_ADDR_START 64'h8000_0000

`define TAG_V_D_WIDTH 23
`define TAG_BITS 22:2
`define VALID_BIT 1
`define DIRTY_BIT 0
