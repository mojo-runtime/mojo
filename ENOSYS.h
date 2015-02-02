#ifndef _c__ENOSYS_h
#define _c__ENOSYS_h

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
