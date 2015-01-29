#ifndef _c__EPOLL_CTL_MOD_h
#define _c__EPOLL_CTL_MOD_h

#include "c/alias/EpollControlKind.h"

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
