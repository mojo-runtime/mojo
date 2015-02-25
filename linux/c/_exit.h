#ifndef linux_c_exit_h_
#define linux_c_exit_h_

#include "compat/_c_noexcept.h"
#include "compat/_c_noreturn.h"
#include "compat/_c_unreachable.h"

#include "SYS_exit.h"
#include "_c_syscall1.h"

_c_noreturn
static
void
_exit(int status) _c_noexcept
{
    _c_syscall1(SYS_exit, status);
    _c_unreachable();
}

#endif
