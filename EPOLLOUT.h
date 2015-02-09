#ifndef c_EPOLLOUT_h_
#define c_EPOLLOUT_h_

#include "c/POLLOUT.h"
#include "c/EpollEvents.h"

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
