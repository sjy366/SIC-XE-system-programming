#ifndef __LINKING_LOADER_H__
#define __LINKING_LOADER_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "external_symbol_table.h"
#include "memory.h"
#include "proc_command.h"
#define MAX_LEN 1001
#define MAX_TOKEN 1001

void loader_(int tsz, char filename[MAX_TOKEN][MAX_LEN]);

void progaddr_(int addr);

#endif
