#ifndef _c__EPOLLWAKEUP_h
#define _c__EPOLLWAKEUP_h

#include "c/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _EpollEvents
EPOLLWAKEUP =
#ifdef __linux__
 (1 << 29)
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
