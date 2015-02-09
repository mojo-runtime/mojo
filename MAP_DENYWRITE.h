#ifndef c_MAP_DENYWRITE_h_
#define c_MAP_DENYWRITE_h_

#include "c/MemoryMapFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const MemoryMapFlags
MAP_DENYWRITE =
#ifdef __linux__
#  ifdef __x86_64__
 0x800 // generic
#  else
#    error
#  endif
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
