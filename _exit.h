#ifndef c_exit_h_
#define c_exit_h_

#include "c/ExitStatus.h"
#include "c/noexcept.h"
#include "c/noreturn.h"
#include "c/SYS_exit.h"

__c_namespace_open

noreturn
static
void
_exit(ExitStatus status) noexcept
{
#if defined(__linux__) && defined(__x86_64__)
    register ExitStatus r1 __asm__ ("rdi") = status;

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
