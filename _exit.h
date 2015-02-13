#ifndef c_exit_h_
#define c_exit_h_

#include "c/ExitStatus.h"
#include "c/SYS_exit.h"
#include "c/__c_noexcept.h"
#include "c/__c_noreturn.h"

#ifdef __cplusplus
__c_namespace_open
#endif

__c_noreturn
static
void
_exit(ExitStatus status) __c_noexcept
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

#ifdef __cplusplus
__c_namespace_close
#endif

#endif
