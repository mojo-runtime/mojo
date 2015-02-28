#ifndef c_posix_exit_h_
#define c_posix_exit_h_

#include "compat/_Nothrow.h"
#include "compat/_Noreturn.h"
#include "compat/__builtin_unreachable.h"

#include "SYS_exit.h"
#include "_system_call_1.h"

_Noreturn
_Nothrow
static
void
_exit(int status)
{
    _system_call_1(SYS_exit, status);
    __builtin_unreachable();
}

#endif
