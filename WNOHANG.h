#ifndef _c__WNOHANG_h
#define _c__WNOHANG_h

#include "c/_WaitOptions.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _WaitOptions
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
