#ifndef c_SYS_epoll_ctl_h_
#define c_SYS_epoll_ctl_h_

#include "c/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_epoll_ctl =
#ifdef __linux__
#  ifdef __x86_64__
 233
#  else
#    error
#  endif
#else
#  error
#endif
 ;

#ifdef __cplusplus
} // inline namespace c
#endif

#endif
