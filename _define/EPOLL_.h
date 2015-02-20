#ifndef _c_define_EPOLL_
#  include "../__c_namespace.h"
#  define _c_define_EPOLL_(name, value) \
    __c_namespace_open \
    static \
    const int \
    EPOLL_##name = value; \
    __c_namespace_close
#endif
