#ifndef c_O_WRONLY_h_
#define c_O_WRONLY_h_

#include "c/OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const OpenFlags
O_WRONLY =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
