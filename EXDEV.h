#ifndef _c__EXDEV_h
#define _c__EXDEV_h

#include "c/alias/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EXDEV =
#ifdef __linux__
 18
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
