#ifndef c_EPOLLERR_h_
#define c_EPOLLERR_h_

#include "_c_define_EPOLL.h"

#ifdef __linux__
#  include "POLLERR.h"
_c_define_EPOLL(ERR, POLLERR);
#else
#  error
#endif

#endif
