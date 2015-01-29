#ifndef _c__ETXTBSY_h
#define _c__ETXTBSY_h

#include "c/alias/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
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
