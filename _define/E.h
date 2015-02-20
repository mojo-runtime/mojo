#ifndef _c_define_E
#  include "../__c_namespace.h"
#  define _c_define_E(name, value) \
    __c_namespace_open \
    static \
    const int \
    E##name = value; \
    __c_namespace_close
#endif
