#ifndef _c__WSTOPPED_h
#define _c__WSTOPPED_h

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
