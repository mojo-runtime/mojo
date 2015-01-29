#ifndef _c__ENOMEM_h
#define _c__ENOMEM_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
ENOMEM =
#ifdef __linux__
 12
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
