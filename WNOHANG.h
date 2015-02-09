#ifndef c_WNOHANG_h_
#define c_WNOHANG_h_

#include "c/WaitFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const WaitFlags
WNOHANG =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
