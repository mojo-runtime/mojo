#ifndef _c__POLLOUT_h
#define _c__POLLOUT_h

#include "c/_PollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _PollEvents
POLLOUT =
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
