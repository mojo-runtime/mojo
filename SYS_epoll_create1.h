#ifndef c_SYS_epoll_create1_h_
#define c_SYS_epoll_create1_h_

#include "c/SystemCallNumber.h"

#ifdef __cplusplus
inline namespace c {
#endif

static
const SystemCallNumber
SYS_epoll_create1 =
#ifdef __linux__
#  ifdef __x86_64__
 291
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
