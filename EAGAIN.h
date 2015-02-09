#ifndef c_EAGAIN_h_
#define c_EAGAIN_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EAGAIN =
#ifdef __linux__
#  ifdef __x86_64__
 11 // generic
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
