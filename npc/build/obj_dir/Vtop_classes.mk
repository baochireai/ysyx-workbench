# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop \
	Vtop___024root__DepSet_h84412442__0 \
	Vtop___024root__DepSet_heccd7ead__0 \
	Vtop_top__DepSet_h0f993197__0 \
	Vtop_top__DepSet_h0f993197__1 \
	Vtop_top__DepSet_h0f993197__2 \
	Vtop_top__DepSet_h0f993197__3 \
	Vtop_top__DepSet_h0f993197__4 \
	Vtop_top__DepSet_h6315917a__0 \
	Vtop_top__DepSet_h6315917a__1 \
	Vtop_top__DepSet_h6315917a__2 \
	Vtop_top__DepSet_h6315917a__3 \
	Vtop_top__DepSet_h6315917a__4 \
	Vtop_top__DepSet_h6315917a__5 \
	Vtop___024unit__DepSet_hab9af801__0 \
	Vtop_WB__DepSet_hfe2578c4__0 \
	Vtop_Intr__DepSet_h7ce72474__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop__ConstPool_0 \
	Vtop___024root__Slow \
	Vtop___024root__DepSet_h84412442__0__Slow \
	Vtop___024root__DepSet_heccd7ead__0__Slow \
	Vtop_top__Slow \
	Vtop_top__DepSet_h0f993197__0__Slow \
	Vtop_top__DepSet_h6315917a__0__Slow \
	Vtop___024unit__Slow \
	Vtop___024unit__DepSet_hff17caec__0__Slow \
	Vtop_WB__Slow \
	Vtop_WB__DepSet_hd3771b35__0__Slow \
	Vtop_WB__DepSet_hfe2578c4__0__Slow \
	Vtop_Intr__Slow \
	Vtop_Intr__DepSet_he12b4f1f__0__Slow \
	Vtop_Intr__DepSet_h7ce72474__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
