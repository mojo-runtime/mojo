#ifndef _c_define_SYS_
#  include "__c_namespace.h"
#  define _c_define_SYS_(name, value) \
    __c_namespace_open \
    static \
    const int \
    SYS_##name = value; \
    __c_namespace_close
#endif
