#ifndef c_close_h_
#define c_close_h_

#include "c/FileDescriptor.h"
#include "c/noexcept.h"
#include "c/SYS_close.h"

__c_namespace_open

static
SystemCallResult
close_(FileDescriptor fd) noexcept
{
    SystemCallResult
    result;

#if defined(__linux__) && defined(__x86_64__)
    register const FileDescriptor r1 __asm__("rdi") = fd;

    __asm__ __volatile__ ("syscall"
                          : "=a" (result)
                          : "0" (SYS_close), "r" (r1)
                          : "rcx", "r11");
#else
#  error
#endif

    return result;
}

__c_namespace_close

#endif
