#ifndef _c__EDESTADDRREQ_h
#define _c__EDESTADDRREQ_h

#include "c/alias/ErrorNumber.h"

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
