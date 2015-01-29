#ifndef _c__EPOLL_CTL_DEL_h
#define _c__EPOLL_CTL_DEL_h

#include "c/_EpollCtlOperation.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const _EpollCtlOperation
EPOLL_CTL_DEL =
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
