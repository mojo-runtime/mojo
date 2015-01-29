#ifndef _c__EPOLLHUP_h
#define _c__EPOLLHUP_h

#include "c/POLLHUP.h"
#include "c/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
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
