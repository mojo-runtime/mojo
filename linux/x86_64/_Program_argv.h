#ifndef _c__linux__x86_64___Program_argv_h
#define _c__linux__x86_64___Program_argv_h

#include "c/linux/x86_64/_Program.h"
#include "c/__internal/__c_REINTERPRET_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
const char* const*
_Program_argv(const _Program* program)
{
    return __c_REINTERPRET_CAST(const char* const*, program) + 1; // @see _Program_envp
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
