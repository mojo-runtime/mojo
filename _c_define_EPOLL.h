#ifndef _c_define_EPOLL
#  include "__c_namespace.h"
#  define _c_define_EPOLL(name, value) \
    __c_namespace_open \
    static \
    const int \
    EPOLL##name = value; \
    __c_namespace_close
#endif
