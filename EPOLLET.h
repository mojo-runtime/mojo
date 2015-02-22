#ifndef c_EPOLLET_h_
#define c_EPOLLET_h_

#include "_internal/_c_define_EPOLL.h"

#ifdef __linux__
#  include "extension/x_static_cast.h"
_c_define_EPOLL(ET, x_static_cast(int, 1u << 31));
#else
#  error
#endif

#endif
