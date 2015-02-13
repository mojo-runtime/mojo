#ifndef c_fork_h_
#define c_fork_h_

#include "c/noexcept.h"
#include "c/SystemCallResult.h"
#include "c/SYS_fork.h"

__c_namespace_open

static
SystemCallResult
fork_() noexcept
{
    SystemCallResult
    result;

#if defined(__linux__) && defined(__x86_64__)
    __asm__ __volatile__ ("syscall"
                          : "=a" (result)
                          : "0" (SYS_fork)
                          : "rcx", "r11");
#else
#  error
#endif

    return result;
}

__c_namespace_close

#endif
