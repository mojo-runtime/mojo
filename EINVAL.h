#ifndef _c__EINVAL_h
#define _c__EINVAL_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
EINVAL =
#ifdef __linux__
 22
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
