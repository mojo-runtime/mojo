#ifndef _c_define_POLL
#  include "../__c_namespace.h"
#  define _c_define_POLL(name, value) \
    __c_namespace_open \
    static \
    const int \
    POLL##name = value; \
    __c_namespace_close
#endif
