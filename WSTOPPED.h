#ifndef c_WSTOPPED_h_
#define c_WSTOPPED_h_

#include "c/WaitFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const WaitFlags
WSTOPPED =
#ifdef __linux__
 2 // WUNTRACED
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
