#ifndef c_WCONTINUED_h_
#define c_WCONTINUED_h_

#include "c/WaitFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const WaitFlags
WCONTINUED =
#ifdef __linux__
 8
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
