#ifndef c_MAP_SHARED_h_
#define c_MAP_SHARED_h_

#include "c/MemoryMapFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const MemoryMapFlags
MAP_SHARED =
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
