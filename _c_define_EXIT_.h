#ifndef _c_define_EXIT_
#  include "__c_namespace.h"
#  define _c_define_EXIT_(name, value) \
    __c_namespace_open \
    static \
    const int \
    EXIT_##name = value; \
    __c_namespace_close
#endif
