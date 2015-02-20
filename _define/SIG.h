#ifndef _c_define_SIG
#  include "../__c_namespace.h"
#  define _c_define_SIG(name, value) \
    __c_namespace_open \
    static \
    const int \
    SIG##name = value; \
    __c_namespace_close
#endif
