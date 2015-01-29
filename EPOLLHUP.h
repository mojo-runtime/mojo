#ifndef _c__EPOLLHUP_h
#define _c__EPOLLHUP_h

#include "c/POLLHUP.h"
#include "c/_EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _EpollEvents
EPOLLHUP =
#ifdef __linux__
 POLLHUP
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
