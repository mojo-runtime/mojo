#ifndef c_EPOLL_CLOEXEC_h_
#define c_EPOLL_CLOEXEC_h_

#include "c/O_CLOEXEC.h"
#include "c/EpollCreateFlags.h"

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
