#ifndef _c_define_P_
#  include "idtype_t.h"
#  include "__c_namespace.h"
#  define _c_define_P_(name, value) \
    __c_namespace_open \
    static \
    const idtype_t \
    P_##name = value; \
    __c_namespace_close
#endif
