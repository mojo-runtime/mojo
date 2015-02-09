#ifndef c_EOPNOTSUPP_h_
#define c_EOPNOTSUPP_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EOPNOTSUPP =
#ifdef __linux__
#  ifdef __x86_64__
 95 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
