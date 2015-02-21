#ifndef _c_define_constant
#  include "../__c_namespace.h"
#  define _c_define_constant(Type, name, value)  \
    __c_namespace_open \
    static \
    const Type \
    name = value; \
    __c_namespace_close
#endif
