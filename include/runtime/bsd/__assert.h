#ifndef _runtime_bsd_assert_h_
#define _runtime_bsd_assert_h_

#include "c/_c_noreturn.h"
//#include "c/_c_nothrow.h"

#ifdef __cplusplus
extern "C" {
#endif

_c_noreturn
//_c_nothrow
extern
void
__assert(const char* function, const char* file, unsigned int line, const char* expression);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
