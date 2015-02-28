#ifndef c_posix_Exit_h_
#define c_posix_Exit_h_

#include "builtin/unreachable.h"
#include "compatibility/NORETURN.h"
#include "compatibility/NOTHROW.h"

#include "SYS_exit.h"
#include "_system_call_1.h"

NORETURN
NOTHROW
static
void
_Exit(int status)
{
    _system_call_1(SYS_exit, status);
    unreachable();
}

#endif
