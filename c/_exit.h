#pragma once

#include "SYS_exit.h"
#include "__noreturn.h"
#include "__nothrow.h"
#include "__syscall1.h"
#include "__unreachable.h"

__noreturn
__nothrow
static inline
void
_exit(int status)
{
    __syscall1(SYS_exit, status);
    __unreachable();
}
