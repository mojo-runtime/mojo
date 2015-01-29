#ifndef _c__WNOWAIT_h
#define _c__WNOWAIT_h

#include "c/_WaitOptions.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _WaitOptions
WNOWAIT =
#ifdef __linux__
 0x1000000
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
