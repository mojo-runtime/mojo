#ifndef c_EPOLL_CTL_MOD_h_
#define c_EPOLL_CTL_MOD_h_

#include "c/EpollControlKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollControlKind
EPOLL_CTL_MOD =
#ifdef __linux__
 3
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
