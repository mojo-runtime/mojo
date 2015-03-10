#ifndef unix_exit_h_
#define unix_exit_h_

#include "builtin/__builtin_unreachable.h"
#include "c/SYS_exit.h"
#include "c/_c_noreturn.h"
#include "c/_c_nothrow.h"

#include "_syscall_1.h"

_c_noreturn
_c_nothrow
static
void
_exit(int status)
{
    _syscall_1(SYS_exit, status);
    __builtin_unreachable();
}

#endif
