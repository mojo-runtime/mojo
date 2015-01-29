#ifndef _c__ENFILE_h
#define _c__ENFILE_h

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENFILE =
#ifdef __linux__
 23
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
