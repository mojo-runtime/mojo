#ifndef _c__linux__x86_64___Application_argc_h
#define _c__linux__x86_64___Application_argc_h

#include "c/uint64_t.h"
#include "c/linux/x86_64/_Application.h"
#include "c/__internal/__c_REINTERPRET_CAST.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
inline namespace x86_64 {
#endif

static
uint64_t
_Application_argc(const _Application* self)
{
    return *__c_REINTERPRET_CAST(const uint64_t*, self); // @see _Application_envp
}

#ifdef __cplusplus
} // inline namespace x86_64
} // inline namespace linux
} // inline namespace c
#endif

#endif
