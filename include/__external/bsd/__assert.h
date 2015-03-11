#ifndef external_bsd_assert_h_
#define external_bsd_assert_h_

#include "compat/x_noreturn.h"
//#include "compat/x_nothrow.h"

#ifdef __cplusplus
extern "C" {
#endif

x_noreturn
//x_nothrow
extern
void
__assert(const char* function, const char* file, unsigned int line, const char* expression);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
