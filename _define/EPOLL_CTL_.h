#ifndef _c_define_EPOLL_CTL_
#  include "_constant.h"
#  define _c_define_EPOLL_CTL_(name, value) _c_define_constant(int, EPOLL_CTL_##name, value)
#endif
