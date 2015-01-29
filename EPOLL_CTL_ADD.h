#ifndef _c__EPOLL_CTL_ADD_h
#define _c__EPOLL_CTL_ADD_h

#include "c/alias/EpollControlKind.h"

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
