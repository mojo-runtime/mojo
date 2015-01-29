#ifndef _c__ELIBBAD_h
#define _c__ELIBBAD_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
ELIBBAD =
#ifdef __linux__
#  ifdef __x86_64__
 80 // generic
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
