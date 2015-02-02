#ifndef _c__MAP_DENYWRITE_h
#define _c__MAP_DENYWRITE_h

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
