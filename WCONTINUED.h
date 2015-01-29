#ifndef _c__WCONTINUED_h
#define _c__WCONTINUED_h

#include "c/alias/WaitFlags.h"

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
