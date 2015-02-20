#ifndef _c_define_W
#  include "__c_namespace.h"
#  define _c_define_W(name, value) \
    __c_namespace_open \
    static \
    const int \
    W##name = value; \
    __c_namespace_close
#endif
