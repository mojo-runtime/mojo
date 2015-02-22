#ifndef c_EPOLL_CTL_MOD_h_
#define c_EPOLL_CTL_MOD_h_

#include "_internal/_c_define_EPOLL_CTL_.h"

#ifdef __linux__
_c_define_EPOLL_CTL_(MOD, 3);
#else
#  error
#endif

#endif
