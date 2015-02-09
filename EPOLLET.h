#ifndef c_EPOLLET_h_
#define c_EPOLLET_h_

#include "c/EpollEvents.h"
#include "c/_STATIC_CAST.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollEvents
EPOLLET =
#ifdef __linux__
// 0x80000000
 _STATIC_CAST(EpollEvents, (1u << 31))
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
