#ifndef _c_define_ioctl
#  include "_c_namespace.h"
#  define _c_define_ioctl(name, value) \
    _c_namespace \
    static \
    const int \
    name = value; \
    _c_namespace_end
#endif
