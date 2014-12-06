#ifndef _c__linux__x86_64___sys_mmap_h
#define _c__linux__x86_64___sys_mmap_h

#include "c/linux/x86_64/SYS_mmap.h"
#include "c/linux/x86_64/off_t.h"
#include "c/linux/x86_64/size_t.h"
#include "c/linux/x86_64/_FileDescriptor.h"
#include "c/linux/x86_64/_MapFlags.h"
#include "c/linux/x86_64/_ProtectionFlags.h"
#include "c/linux/x86_64/_SystemCallResult.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
_SystemCallResult
_sys_mmap(void* address, size_t length, _ProtectionFlags protection, _MapFlags flags, _FileDescriptor fd, off_t offset)
{
    _SystemCallResult
    result;

    register
    void*
    r1 __asm__ ("rdi") = address;

    register
    size_t
    r2 __asm__ ("rsi") = length;

    register
    _ProtectionFlags
    r3 __asm__ ("rdx") = protection;

    register
    _MapFlags
    r4 __asm__ ("r10") = flags;

    register
    _FileDescriptor
    r5 __asm__ ("r8") = fd;

    register
    off_t
    r6 __asm__ ("r9") = offset;

    __asm__ volatile (
        "syscall"
        : /* outputs  */ "=a" (result)
        : /* inputs   */ "0" (SYS_mmap), "r" (r1), "r" (r2), "r" (r3), "r" (r4), "r" (r5), "r" (r6)
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
