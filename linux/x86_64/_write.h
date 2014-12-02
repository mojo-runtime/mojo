#ifndef _c__linux__x86_64___write_h
#define _c__linux__x86_64___write_h

#include "c/linux/x86_64/SYS_write.h"
#include "c/linux/x86_64/size_t.h"
#include "c/linux/x86_64/_FileDescriptor.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
_write(_FileDescriptor fd, const void* data, size_t length)
{
    _SystemCallResult
    result;

    register
    _FileDescriptor
    r1 __asm__ ("rdi") = fd;

    register
    const void*
    r2 __asm__ ("rsi") = data;

    register
    size_t
    r3 __asm__ ("rdx") = length;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "ra" (SYS_write), "r" (r1), "r" (r2), "r" (r3)
        : /* clobbers */ "rcx", "r11"
    );

    return result;
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
