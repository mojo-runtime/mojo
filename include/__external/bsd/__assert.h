#ifndef external_bsd_assert_h_
#define external_bsd_assert_h_

#include "compat/_Noreturn.h"
// They don't label it nothrow.

#ifdef __cplusplus
extern "C" {
#endif

_Noreturn
extern
void
__assert(const char* function, const char* file, unsigned int line, const char* expression);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
