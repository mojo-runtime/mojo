#ifndef _c__linux__CLD_EXITED_h
#define _c__linux__CLD_EXITED_h

#include "c/linux/_ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
inline namespace linux {
#endif

static const _ChildStatus CLD_EXITED = 1; // __SI_CHLD | 1

#ifdef __cplusplus
} // inline namespace linux
} // inline namespace c
#endif

#endif
