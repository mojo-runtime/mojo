#ifndef _c__O_WRONLY_h
#define _c__O_WRONLY_h

#include "c/_OpenFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _OpenFlags
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
