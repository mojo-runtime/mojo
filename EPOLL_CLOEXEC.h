#ifndef _c__EPOLL_CLOEXEC_h
#define _c__EPOLL_CLOEXEC_h

#include "c/O_CLOEXEC.h"
#include "c/alias/EpollCreateFlags.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const EpollCreateFlags
EPOLL_CLOEXEC =
#ifdef __linux__
 O_CLOEXEC
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
