#ifndef c_MAP_PRIVATE_h_
#define c_MAP_PRIVATE_h_

#include "c/MemoryMapFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const MemoryMapFlags
MAP_PRIVATE =
#ifdef __linux__
 2
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
