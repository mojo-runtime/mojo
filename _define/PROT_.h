#ifndef _c_define_PROT_
#  include "../__c_namespace.h"
#  define _c_define_PROT_(name, value) \
    __c_namespace_open \
    static \
    const int \
    PROT_##name = value; \
    __c_namespace_close
#endif
