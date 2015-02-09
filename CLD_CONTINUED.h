#ifndef c_CLD_CONTINUED_h_
#define c_CLD_CONTINUED_h_

#include "c/ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ChildStatus
CLD_CONTINUED =
#ifdef __linux__
 6
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
