#ifndef _c__ELOOP_h
#define _c__ELOOP_h

#include "c/alias/ErrorNumber.h"

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
