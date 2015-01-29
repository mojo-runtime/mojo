#ifndef _c__EPIPE_h
#define _c__EPIPE_h

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EPIPE =
#ifdef __linux__
 32
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
