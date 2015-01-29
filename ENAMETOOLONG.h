#ifndef _c__ENAMETOOLONG_h
#define _c__ENAMETOOLONG_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
ENAMETOOLONG =
#ifdef __linux__
#  ifdef __x86_64__
 36 // generic
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
