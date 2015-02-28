#ifndef c_posix_Exit_h_
#define c_posix_Exit_h_

#include "builtin/unreachable.h"
#include "compatibility/x_noreturn.h"
#include "compatibility/x_nothrow.h"

#include "SYS_exit.h"
#include "_system_call_1.h"

x_noreturn
x_nothrow
static
void
_Exit(int status)
{
    _system_call_1(SYS_exit, status);
    unreachable();
}

#endif
