#ifndef c_EDESTADDRREQ_h_
#define c_EDESTADDRREQ_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EDESTADDRREQ =
#ifdef __linux__
#  ifdef __x86_64__
 89 // generic
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
