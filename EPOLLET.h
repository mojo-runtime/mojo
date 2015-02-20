#ifndef c_EPOLLET_h_
#define c_EPOLLET_h_

#include "_define/EPOLL.h"

#ifdef __linux__
#  include "_c_static_cast.h"
_c_define_EPOLL(ET, _c_static_cast(int, 1u << 31));
#else
#  error
#endif

#endif
