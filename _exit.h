#ifndef c_exit_h_
#define c_exit_h_

#include "builtin/__builtin_unreachable.h"
#include "c/noexcept.h"
#include "c/SYS_exit.h"
#include "c/_c_noreturn.h"

__c_namespace_open

_c_noreturn
static
void
_exit(int status) noexcept
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

__c_namespace_close

#endif
