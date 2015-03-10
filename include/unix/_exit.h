#ifndef unix_exit_h_
#define unix_exit_h_

#include "builtin/__builtin_unreachable.h"
#include "compat/_Nothrow.h"
#include "compat/_Noreturn.h"

#include "SYS_exit.h"
#include "_syscall_1.h"

_Noreturn
_Nothrow
static
void
_exit(int status)
{
    _syscall_1(SYS_exit, status);
    __builtin_unreachable();
}

#endif
