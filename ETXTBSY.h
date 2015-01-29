#ifndef _c__ETXTBSY_h
#define _c__ETXTBSY_h

#include "c/_ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ErrorNumber
ETXTBSY =
#ifdef __linux__
 26
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
