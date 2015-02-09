#ifndef c_WEXITED_h_
#define c_WEXITED_h_

#include "c/WaitFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const WaitFlags
WEXITED =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
