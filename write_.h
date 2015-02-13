#ifndef c_write_h_
#define c_write_h_

#include "c/FileDescriptor.h"
#include "c/noexcept.h"
#include "c/size_t.h"
#include "c/SystemCallResult.h"
#include "c/SYS_write.h"

__c_namespace_open

static
SystemCallResult
write_(FileDescriptor fd, const void* data, size_t length) noexcept
{
    SystemCallResult
    result;

#if defined(__linux__) && defined(__x86_64__)
    register const FileDescriptor r1 __asm__("rdi") = fd;
    register const void* const    r2 __asm__("rsi") = data;
    register const size_t         r3 __asm__("rdx") = length;

    __asm__ __volatile__ ("syscall"
                          : "=a" (result)
                          : "0" (SYS_write), "r" (r1), "r" (r2), "r" (r3)
                          : "rcx", "r11");
#else
#  error
#endif

    return result;
}

__c_namespace_close

#endif
