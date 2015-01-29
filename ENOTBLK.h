#ifndef _c__ENOTBLK_h
#define _c__ENOTBLK_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
ENOTBLK =
#ifdef __linux__
 15
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
