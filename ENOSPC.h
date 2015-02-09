#ifndef c_ENOSPC_h_
#define c_ENOSPC_h_

#include "c/ErrorNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const ErrorNumber
ENOSPC =
#ifdef __linux__
 28
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
