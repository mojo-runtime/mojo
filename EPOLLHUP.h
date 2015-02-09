#ifndef c_EPOLLHUP_h_
#define c_EPOLLHUP_h_

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
