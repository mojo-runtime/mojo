#ifndef c_EOVERFLOW_h_
#define c_EOVERFLOW_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EOVERFLOW =
#ifdef __linux__
#  ifdef __x86_64__
 75 // generic
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
