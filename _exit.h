#ifndef c_exit_h_
#define c_exit_h_

#include "builtin/__builtin_unreachable.h"
#include "extension/x_noexcept.h"
#include "extension/x_noreturn.h"

#include "SYS_exit.h"

_c_namespace

x_noreturn
static
void
_exit(int status) x_noexcept
{
#if defined(__linux__) && defined(__x86_64__)
    register int r1 __asm__ ("rdi") = status;

    __asm__ __volatile__ ("syscall"
                          :
                          : "ra" (SYS_exit), "r" (r1));
#else
#  error
#endif
    __builtin_unreachable();
}

_c_namespace_end

#endif
