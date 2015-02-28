#ifndef c_posix_Exit_h_
#define c_posix_Exit_h_

#include "compatibility/NORETURN.h"
#include "compatibility/NOTHROW.h"
#include "compatibility/__builtin_unreachable.h"

#include "SYS_exit.h"
#include "_system_call_1.h"

NORETURN
NOTHROW
static
void
_Exit(int status)
{
    _system_call_1(SYS_exit, status);
    __builtin_unreachable();
}

#endif
