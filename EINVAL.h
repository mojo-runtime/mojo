#ifndef _c__EINVAL_h
#define _c__EINVAL_h

#include "c/alias/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EINVAL =
#ifdef __linux__
 22
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
