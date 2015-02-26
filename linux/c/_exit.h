#ifndef linux_c_exit_h_
#define linux_c_exit_h_

#include "x/noreturn.h"
#include "x/nothrow.h"
#include "x/unreachable.h"

#include "SYS_exit.h"
#include "_linux_syscall1.h"

x_noreturn
x_nothrow
static
void
_exit(int status)
{
    _linux_syscall1(SYS_exit, status);
    x_unreachable();
}

#endif
