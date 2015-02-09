#ifndef c_ENOSYS_h_
#define c_ENOSYS_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENOSYS =
#ifdef __linux__
#  ifdef __x86_64__
 38 // generic
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
