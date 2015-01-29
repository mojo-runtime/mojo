#ifndef _c__ENOSPC_h
#define _c__ENOSPC_h

#include "c/alias/ErrorNumber.h"

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
