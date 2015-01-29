#ifndef _c__WEXITED_h
#define _c__WEXITED_h

#include "c/_WaitOptions.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _WaitOptions
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
