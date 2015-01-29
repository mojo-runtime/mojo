#ifndef _c__ENODEV_h
#define _c__ENODEV_h

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENODEV =
#ifdef __linux__
 19
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
