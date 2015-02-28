#ifndef freebsd_assert_h_
#define freebsd_assert_h_

//#include "compat/_Nothrow.h"
#include "compat/_Noreturn.h"

#ifdef __cplusplus
extern "C" {
#endif

_Noreturn
//_Nothrow
extern
void
__assert_fail(const char* function, const char* file, unsigned int line, const char* expression);

#ifdef __cplusplus
} // extern "C"
#endif


#endif
