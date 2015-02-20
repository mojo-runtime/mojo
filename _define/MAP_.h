#ifndef _c_define_MAP_
#  include "../__c_namespace.h"
#  define _c_define_MAP_(name, value) \
    __c_namespace_open \
    static \
    const int \
    MAP_##name = value; \
    __c_namespace_close
#endif
