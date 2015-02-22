#ifndef _c_define_constant
#  include "../_c_namespace.h"
#  define _c_define_constant(Type, name, value)  \
    _c_namespace \
    static \
    const Type \
    name = value; \
    _c_namespace_end
#endif
