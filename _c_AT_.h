#ifndef _c_AT_
#  include "__c_namespace.h"
#  define _c_AT_(name, value) \
    __c_namespace_open \
    static \
    const int \
    AT_##name = value; \
    __c_namespace_close
#endif
