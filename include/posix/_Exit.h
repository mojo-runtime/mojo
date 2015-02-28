#ifndef c_posix_Exit_h_
#define c_posix_Exit_h_

#include "builtin/unreachable.h"
#include "attribute/noreturn.h"
#include "attribute/nothrow.h"

#include "SYS_exit.h"
#include "_c_syscall1.h"

attribute_noreturn
attribute_nothrow
static
void
_Exit(int status)
{
    _c_syscall1(SYS_exit, status);
    unreachable();
}

#endif
