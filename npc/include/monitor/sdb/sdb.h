#ifndef __SDB_H__
#define __SDB_H__

#include <readline/readline.h>
#include <readline/history.h>
#include "cpu_exec.h"
#include "monitor.h"
#include "memory.h"
#include "reg.h"
#include "expr.h"

void sdb_mainloop();

#endif
