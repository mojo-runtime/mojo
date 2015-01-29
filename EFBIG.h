#ifndef _c__EFBIG_h
#define _c__EFBIG_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
EFBIG =
#ifdef __linux__
 27
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
