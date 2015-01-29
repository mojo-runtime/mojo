#ifndef _c__EEXIST_h
#define _c__EEXIST_h

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EEXIST =
#ifdef __linux__
 17
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
