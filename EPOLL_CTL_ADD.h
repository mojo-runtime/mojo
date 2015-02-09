#ifndef c_EPOLL_CTL_ADD_h_
#define c_EPOLL_CTL_ADD_h_

#include "c/EpollControlKind.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollControlKind
EPOLL_CTL_ADD =
#ifdef __linux__
 1
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
