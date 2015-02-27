#ifndef linux_c_exit_h_
#define linux_c_exit_h_

#include "builtin/unreachable.h"
#include "attribute/noreturn.h"
#include "attribute/nothrow.h"

#include "SYS_exit.h"
#include "_linux_syscall1.h"

attribute_noreturn
attribute_nothrow
static
void
_exit(int status)
{
    _linux_syscall1(SYS_exit, status);
    unreachable();
}

#endif
