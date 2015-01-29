#ifndef _c__EAGAIN_h
#define _c__EAGAIN_h

#include "c/alias/ErrorNumber.h"

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
