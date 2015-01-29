#ifndef _c__E2BIG_h
#define _c__E2BIG_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
E2BIG =
#ifdef __linux__
 7
#else
#  error todo
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
