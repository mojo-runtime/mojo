#ifndef c_ELOOP_h_
#define c_ELOOP_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ELOOP =
#ifdef __linux__
#  ifdef __x86_64__
 40 // generic
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
