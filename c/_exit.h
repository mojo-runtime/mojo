#pragma once

#include "compat/__noreturn.h"
#include "compat/__nothrow.h"
#include "compat/__unreachable.h"
#include "SYS_exit.h"
#include "__syscall1.h"

__noreturn
__nothrow
static inline
void
_exit(int status)
{
    __syscall1(SYS_exit, status);
    __unreachable();
}
