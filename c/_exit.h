#pragma once

#include "compat/__builtin_unreachable.h"
#include "compat/__noexcept.h"
#include "compat/__noreturn.h"
#include "SYS_exit.h"
#include "__syscall1.h"

__noreturn
static inline
void
_exit(int status) __noexcept
{
    __syscall1(SYS_exit, status);
    __builtin_unreachable();
}
