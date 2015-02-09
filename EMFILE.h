#ifndef c_EMFILE_h_
#define c_EMFILE_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
EMFILE =
#ifdef __linux__
 24
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
