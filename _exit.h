#ifndef c_exit_h_
#define c_exit_h_

#include "abi/_abi_syscall_1.h"

#include "SYS_exit.h"
#include "_compat/_c_noexcept.h"
#include "_compat/_c_noreturn.h"
#include "_compat/_c_unreachable.h"

_c_noreturn
static
void
_exit(int status) _c_noexcept
{
    _abi_syscall_1(SYS_exit, status);
    _c_unreachable();
}

#endif
