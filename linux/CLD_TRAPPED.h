#ifndef _c__linux__CLD_TRAPPED_h
#define _c__linux__CLD_TRAPPED_h

#include "c/linux/_ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _ChildStatus CLD_TRAPPED = 4; // __SI_CHLD | 4

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
