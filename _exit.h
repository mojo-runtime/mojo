#ifndef c_exit_h_
#define c_exit_h_

#include "x/noexcept.h"
#include "x/noreturn.h"
#include "x/unreachable.h"

#include "SYS_exit.h"
#include "extension/x_syscall1.h"

x_noreturn
static
void
_exit(int status) x_noexcept
{
    x_syscall1(SYS_exit, status);
    x_unreachable();
}

#endif
