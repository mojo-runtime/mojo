#ifndef _c__linux__CLD_KILLED_h
#define _c__linux__CLD_KILLED_h

#include "c/linux/_ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _ChildStatus CLD_KILLED = 2; // __SI_CHLD | 2

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
