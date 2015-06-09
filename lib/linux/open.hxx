#pragma once

#include "Result.hxx"

#define EACCES 13
// EDQUOT
#define EEXIST 17
#define EFAULT 14
#define EINTR 4
#define EINVAL 22
#define EISDIR 21
// ELOOP
#define EMFILE 24
// ENAMETOOLONG
#define ENFILE 23
#define ENODEV 19
#define ENOENT 2
#define ENOMEM 12
#define ENOSPC 28
#define ENOTDIR 20
#define ENXIO 6
// EOPNOTSUPP
// EOVERFLOW
#define EPERM 1
#define EROFS 30
#define ETXTBSY 26
// EWOULDBLOCK

#if defined(__arm__)
#  define EDQUOT 122
#  define ELOOP 40
#  define ENAMETOOLONG 36
#  define EOPNOTSUPP 95
#  define EOVERFLOW 75
#  define EWOULDBLOCK 11
#  define __NR_open 5
#elif defined(__x86_64__)
#  define EDQUOT 122
#  define ELOOP 40
#  define ENAMETOOLONG 36
#  define EOPNOTSUPP 95
#  define EOVERFLOW 75
#  define EWOULDBLOCK 11
#  define __NR_open 2
#else
#  error
#endif

namespace linux {

static inline
auto
open(const char* pathname, int flags) noexcept
{
    enum Error
    {
        _E(ACCES),
        _E(DQUOT),
        _E(EXIST),
        _E(FAULT),
        _E(INTR),
        _E(INVAL),
        _E(ISDIR),
        _E(LOOP),
        _E(MFILE),
        _E(NAMETOOLONG),
        _E(NFILE),
        _E(NODEV),
        _E(NOENT),
        _E(NOMEM),
        _E(NOSPC),
        _E(NOTDIR),
        _E(NXIO),
        _E(OPNOTSUPP),
        _E(OVERFLOW),
        _E(PERM),
        _E(ROFS),
        _E(TXTBSY),
        _E(WOULDBLOCK),
    };

    Result<int, Error>
    result;

#if defined(__arm__)

    register Word r0 asm ("r0") = __NR_open;
    register auto r1 asm ("r1") = pathname;
    register auto r2 asm ("r2") = flags;

    asm volatile ("swi 0x0"
                  : "=r" (r0)
                  : "r" (r0),
                    "r" (r1),
                    "r" (r2)
                  : "memory");

    result.__word = r0;

#elif defined(__x86_64__)

    asm volatile ("syscall"
                  : "=a" (result.__word)
                  : "a" (__NR_open),
                    "D" (pathname),
                    "S" (flags)
                  : "rcx", "r11");

#else
#  error
#endif

    return result;
}

}
