#ifndef c_EPOLLWAKEUP_h_
#define c_EPOLLWAKEUP_h_

#include "c/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
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
