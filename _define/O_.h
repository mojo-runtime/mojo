#ifndef _c_define_O_
#  include "../__c_namespace.h"
#  define _c_define_O_(name, value) \
    __c_namespace_open \
    static \
    const int \
    O_##name = value; \
    __c_namespace_close
#endif
