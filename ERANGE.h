#ifndef _c__ERANGE_h
#define _c__ERANGE_h

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ERANGE =
#ifdef __linux__
 34
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
