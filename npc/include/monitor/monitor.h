#ifndef __MONITOR_H__
#define __MONITRO_H__

#include <getopt.h>
#include "memory.h"
#include "cpu_exec.h"
#include "difftest.h"
#include "vga.h"
#include "keyboard.h"

extern int npc_state;

void init_monitor(int argc,char** argv);

#endif