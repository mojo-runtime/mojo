#ifndef c_exit_h_
#define c_exit_h_

#include "SYS_exit.h"
#include "_internal/_c_noexcept.h"
#include "_internal/_c_noreturn.h"
#include "_internal/_c_syscall1.h"
#include "_internal/_c_unreachable.h"

_c_noreturn
static
void
_exit(int status) _c_noexcept
{
    _c_syscall1(SYS_exit, status);
    _c_unreachable();
}

#endif
