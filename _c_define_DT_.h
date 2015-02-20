#ifndef _c_define_DT_
#  include "__c_namespace.h"
#  define _c_define_DT_(name, value) \
    __c_namespace_open \
    static \
    const char \
    DT_##name = value; \
    __c_namespace_close
#endif
