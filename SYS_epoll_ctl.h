#ifndef _c__SYS_epoll_ctl_h
#define _c__SYS_epoll_ctl_h

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
