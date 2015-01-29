#ifndef _c__ENOTTY_h
#define _c__ENOTTY_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
ENOTTY =
#ifdef __linux__
 25
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
