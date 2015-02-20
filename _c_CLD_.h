#ifndef _c_CLD_
#  include "__c_namespace.h"
#  define _c_CLD_(name, value) \
    __c_namespace_open \
    static \
    const int \
    CLD_##name = value; \
    __c_namespace_close
#endif
