#ifndef _c__POLLHUP_h
#define _c__POLLHUP_h

#include "c/_PollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _PollEvents
POLLHUP =
#ifdef __linux__
 0x10
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
