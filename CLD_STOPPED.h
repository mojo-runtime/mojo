#ifndef _c__CLD_STOPPED_h
#define _c__CLD_STOPPED_h

#include "c/_ChildStatus.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _ChildStatus
CLD_STOPPED =
#ifdef __linux__
 5
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
