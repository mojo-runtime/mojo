#ifndef _c__linux__x86_64__linux_dirent_h
#define _c__linux__x86_64__linux_dirent_h

#include "c/uint16_t.h"
#include "c/uint64_t.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

struct linux_dirent
{
    uint64_t // unsigned long
    d_ino;

    uint64_t // unsigned long
    d_off;

    uint16_t // unsigned short
    d_reclen;

    char
    d_name[];

    /*
    char
    pad;

    _DirentType (char)
    d_type;
    */
};

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
