#ifndef c_EPOLL_CLOEXEC_h_
#define c_EPOLL_CLOEXEC_h_

#include "_internal/_c_define_EPOLL_.h"

#ifdef __linux__
#  include "O_CLOEXEC.h"
_c_define_EPOLL_(CLOEXEC, O_CLOEXEC);
#else
#  error
#endif

#endif
