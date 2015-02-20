#ifndef _c_define_EPOLL_CTL_
#  include "../__c_namespace.h"
#  define _c_define_EPOLL_CTL_(name, value) \
    __c_namespace_open \
    static \
    const int \
    EPOLL_CTL_##name = value; \
    __c_namespace_close
#endif
