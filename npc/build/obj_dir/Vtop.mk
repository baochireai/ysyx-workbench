# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vtop.mk

default: /home/mrxue/ysyx-workbench/npc/build/top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vtop
# Module prefix (from --prefix)
VM_MODPREFIX = Vtop
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/mrxue/ysyx-workbench/npc/include \
	-I/home/mrxue/ysyx-workbench/npc/include/difftest \
	-I/home/mrxue/ysyx-workbench/npc/include/cpu \
	-I/home/mrxue/ysyx-workbench/npc/include/memory \
	-I/home/mrxue/ysyx-workbench/npc/include/monitor \
	-I/home/mrxue/ysyx-workbench/npc/include/reg \
	-I/home/mrxue/ysyx-workbench/npc/include/monitor/sdb \
	-I/home/mrxue/ysyx-workbench/npc/include/utils \
	-I/home/mrxue/ysyx-workbench/npc/include/device \
	-I/home/mrxue/ysyx-workbench/nvboard/include \
	-DTOP_NAME="Vtop" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lSDL2 \
	-lasan \
	-fsanitize=address \
	-lreadline \
	-ldl \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu_exec \
	keyboard \
	mmio \
	vga \
	dut \
	memory \
	monitor \
	expr \
	sdb \
	watchpoint \
	reg \
	sim_main \
	log \
	timer \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/mrxue/ysyx-workbench/npc/csrc \
	/home/mrxue/ysyx-workbench/npc/csrc/cpu \
	/home/mrxue/ysyx-workbench/npc/csrc/device \
	/home/mrxue/ysyx-workbench/npc/csrc/difftest \
	/home/mrxue/ysyx-workbench/npc/csrc/memory \
	/home/mrxue/ysyx-workbench/npc/csrc/monitor \
	/home/mrxue/ysyx-workbench/npc/csrc/monitor/sdb \
	/home/mrxue/ysyx-workbench/npc/csrc/reg \
	/home/mrxue/ysyx-workbench/npc/csrc/utils \


### Default rules...
# Include list of all generated classes
include Vtop_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu_exec.o: /home/mrxue/ysyx-workbench/npc/csrc/cpu/cpu_exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/mrxue/ysyx-workbench/npc/csrc/device/keyboard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/mrxue/ysyx-workbench/npc/csrc/device/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/mrxue/ysyx-workbench/npc/csrc/device/vga.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/mrxue/ysyx-workbench/npc/csrc/difftest/dut.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
memory.o: /home/mrxue/ysyx-workbench/npc/csrc/memory/memory.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/mrxue/ysyx-workbench/npc/csrc/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/mrxue/ysyx-workbench/npc/csrc/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/mrxue/ysyx-workbench/npc/csrc/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/mrxue/ysyx-workbench/npc/csrc/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/mrxue/ysyx-workbench/npc/csrc/reg/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim_main.o: /home/mrxue/ysyx-workbench/npc/csrc/sim_main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/mrxue/ysyx-workbench/npc/csrc/utils/log.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/mrxue/ysyx-workbench/npc/csrc/utils/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/mrxue/ysyx-workbench/npc/build/top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
