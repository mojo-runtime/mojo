#ifndef _c__ECHILD_h
#define _c__ECHILD_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
ECHILD =
#ifdef __linux__
 10
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
