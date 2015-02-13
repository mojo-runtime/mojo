#ifndef c_EPOLLET_h_
#define c_EPOLLET_h_

#include "c/EpollEvents.h"
#include "c/__c_static_cast.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLET =
#ifdef __linux__
// 0x80000000
 __c_static_cast(EpollEvents, (1u << 31))
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
