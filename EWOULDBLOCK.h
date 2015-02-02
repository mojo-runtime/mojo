#ifndef _c__EWOULDBLOCK_h
#define _c__EWOULDBLOCK_h

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EWOULDBLOCK =
#ifdef __linux__
#  ifdef __x86_64__
 11 // generic (EAGAIN)
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
