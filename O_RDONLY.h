#ifndef _c__O_RDONLY_h
#define _c__O_RDONLY_h

#include "c/alias/OpenFlags.h"

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
