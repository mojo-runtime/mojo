#ifndef glibc_assert_fail_h_
#define glibc_assert_fail_h_

#include "compat/_Nothrow.h"
#include "compat/_Noreturn.h"

#ifdef __cplusplus
extern "C" {
#endif

_Noreturn
_Nothrow
extern
void
__assert_fail(const char* expression, const char* file, unsigned int line, const char* function);

#ifdef __cplusplus
} // extern "C"
#endif


#endif
