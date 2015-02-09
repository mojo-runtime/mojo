#ifndef c_EPOLLONESHOT_h_
#define c_EPOLLONESHOT_h_

#include "c/EpollEvents.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLONESHOT =
#ifdef __linux__
 (1 << 30)
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
