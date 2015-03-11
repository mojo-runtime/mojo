#ifndef external_glibc_assert_fail_h_
#define external_glibc_assert_fail_h_

#include "compat/x_nothrow.h"
#include "compat/_Noreturn.h"

#ifdef __cplusplus
extern "C" {
#endif

_Noreturn
x_nothrow
extern
void
__assert_fail(const char* expression, const char* file, unsigned int line, const char* function);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
