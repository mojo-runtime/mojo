#ifndef _c__CLD_TRAPPED_h
#define _c__CLD_TRAPPED_h

#include "c/_ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ChildStatus
CLD_TRAPPED =
#ifdef __linux__
 4
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
