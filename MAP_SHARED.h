#ifndef _c__MAP_SHARED_h
#define _c__MAP_SHARED_h

#include "c/_MapFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _MapFlags
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
