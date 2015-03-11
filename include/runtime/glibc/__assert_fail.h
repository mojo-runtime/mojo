#ifndef _runtime_glibc_assert_fail_h_
#define _runtime_glibc_assert_fail_h_

#include "c/_c_noreturn.h"
#include "c/_c_nothrow.h"

#ifdef __cplusplus
extern "C" {
#endif

_c_noreturn
_c_nothrow
extern
void
__assert_fail(const char* expression, const char* file, unsigned int line, const char* function);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
