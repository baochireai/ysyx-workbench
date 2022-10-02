ifndef TOPNAME
TOPNAME=top
endif

NXDC_FILES=constr/${TOPNAME}.nxdc
INC_PATH ?=

VERILATOR=verilator
VERILATOR_CFLAGS+=-MMD#Generate makefile dependencies
VERILATOR_CFLAGS+=--build -cc
VERILATOR_CFLAGS+=-O3#代码优化级别
VERILATOR_CFLAGS+=--x-assign fast#optimize
VERILATOR_CFLAGS+=--x-initial fast
VERILATOR_CFLAGS+=--noassert
VERILATOR_CFLAGS+=--trace

BUILD_DIR=./build
OBJ_DIR=$(BUILD_DIR)/obj_dir
BIN=$(BUILD_DIR)/$(TOPNAME)

$(shell mkdir -p $(BUILD_DIR))

SRC_AUTO_BIND=$(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND):$(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@ #引脚绑定

CSRCS=$(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
VSRCS=$(shell find $(abspath ./vsrc) -name "*.v")
INC_PATH+=$(NPC_HOME)/include $(NPC_HOME)/include/difftest $(NPC_HOME)/include/cpu \
		$(NPC_HOME)/include/memory $(NPC_HOME)/include/monitor $(NPC_HOME)/include/reg $(NPC_HOME)/include/monitor/sdb

include $(NVBOARD_HOME)/scripts/nvboard.mk#nvboard构建脚本

ifeq ($(MAKECMDGOALS),nvboard)
	CSRCS+=$(SRC_AUTO_BIND)
else#不用编译NVBOARD动态库
	NVBOARD_ARCHIVE=
endif

INCFLAGS=$(addprefix -I,$(INC_PATH))
CFLAGS+=$(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""  #-fsanitize=address
LDFLAGS+= -lSDL2 -lSDL2_image -lreadline -ldl  #-fsanitize=address -lasan

LOGS_DIR=$(BUILD_DIR)/logs#存放波形文件

ARGS+=--diff=$(NEMU_HOME)/build/riscv64-nemu-interpreter-so

$(BIN):$(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE) 
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS ,$(CFLAGS)) $(addprefix -LDFLAGS ,$(LDFLAGS))\
		-Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

nvboard:$(BIN)
	@$(BIN)
# build:$(CSRCS) $(VSRCS) # csrc/sim_main.cpp vsrc/top.v
# 	verilator --Wall --cc --trace --build --top-module $(TOPNAME) $^ $(addprefix -LDFLAGS ,$(LDFLAGS)) --Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

build:$(BIN)

run: $(BIN)
#或者 export LD_PRELOAD=/usr/lib/x86_64-linux-gnu/libasan.so.4
	@LD_PRELOAD=/usr/lib/x86_64-linux-gnu/libasan.so.4 $(BIN) $(ARGS) $(IMG)

sim:
	gtkwave -o   $(LOGS_DIR)/top.vcd $(LOGS_DIR)/top.sav
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

clean:
	rm -rf $(BUILD_DIR)
include ../Makefile

.PHONY: nvboard all sim clean build

#VERILATOR=verilator
#VERILATOR_CFLAGS=-Wall#编译警告
#VERILATOR_CFLAGS+=-cc --exe#C++ 可执行文件
#VERILATOR_CFLAGS+=--trace #跟踪波形
#VERILATOR_CFLAGS+=--build
#
#CSRCS=$(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "sim*.cpp")
#VSRCS=$(shell find $(abspath ./vsrc) -name "*.v")
#
#build:$(CSRCS) $(VSRCS)
#	$(VERILATOR) $(VERILATOR_CFLAGS) $^
# verilator -Wno-fatal vsrc/top.v -xml-only --bbox-sys --Mdir $(OBJ_DIR) && xml2stems 	$(OBJ_DIR)/Vtop.xml $(LOGS_DIR)/top.stems
# gtkwave -o -t $(LOGS_DIR)/top.stems $(LOGS_DIR)/top.vcd $(LOGS_DIR)/top.sav