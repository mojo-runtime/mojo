#ifndef _c__linux__CLD_STOPPED_h
#define _c__linux__CLD_STOPPED_h

#include "c/linux/_ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _ChildStatus CLD_STOPPED = 5; // __SI_CHLD | 5

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
