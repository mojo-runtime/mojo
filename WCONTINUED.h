#ifndef _c__WCONTINUED_h
#define _c__WCONTINUED_h

#include "c/_WaitOptions.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _WaitOptions
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
