#ifndef _c__EBUSY_h
#define _c__EBUSY_h

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EBUSY =
#ifdef __linux__
 16
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
