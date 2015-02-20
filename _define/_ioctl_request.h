#ifndef _c_define_ioctl_request
#  include "../__c_namespace.h"
#  define _c_define_ioctl_request(name, value) \
    __c_namespace_open \
    static \
    const int \
    name = value; \
    __c_namespace_close
#endif
