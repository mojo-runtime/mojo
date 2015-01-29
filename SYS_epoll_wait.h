#ifndef _c__SYS_epoll_wait_h
#define _c__SYS_epoll_wait_h

#include "c/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_epoll_wait =
#ifdef __linux__
#  ifdef __x86_64__
 232
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
