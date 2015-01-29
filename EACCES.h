#ifndef _c__EACCES_h
#define _c__EACCES_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
EACCES =
#ifdef __linux__
 13
#else
#  error todo
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
