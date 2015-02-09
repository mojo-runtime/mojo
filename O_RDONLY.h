#ifndef c_O_RDONLY_h_
#define c_O_RDONLY_h_

#include "c/OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const OpenFlags
O_RDONLY =
#ifdef __linux__
 0
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
