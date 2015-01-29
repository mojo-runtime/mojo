#ifndef _c__EPOLLOUT_h
#define _c__EPOLLOUT_h

#include "c/POLLOUT.h"
#include "c/alias/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLOUT =
#ifdef __linux__
 POLLOUT
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
