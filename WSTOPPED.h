#ifndef _c__WSTOPPED_h
#define _c__WSTOPPED_h

#include "c/_WaitOptions.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _WaitOptions
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
