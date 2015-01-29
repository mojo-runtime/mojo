#ifndef _c__EMLINK_h
#define _c__EMLINK_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
EMLINK =
#ifdef __linux__
 31
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
