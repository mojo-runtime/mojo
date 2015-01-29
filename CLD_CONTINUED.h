#ifndef _c__CLD_CONTINUED_h
#define _c__CLD_CONTINUED_h

#include "c/alias/ChildStatus.h"

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
