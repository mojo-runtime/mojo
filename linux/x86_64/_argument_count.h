#ifndef _c__linux__x86_64___argument_count_h
#define _c__linux__x86_64___argument_count_h

#include "c/linux/x86_64/_Program.h"
#include "c/__internal/__c_REINTERPRET_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
uint64_t
_argument_count(const _Program* program)
{
    return *__c_REINTERPRET_CAST(const uint64_t*, program); // @see _environment_pointers
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
