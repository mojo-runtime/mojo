#ifndef _c_define_ioctl_request
#  include "../_c_namespace.h"
#  define _c_define_ioctl_request(name, value) \
    _c_namespace \
    static \
    const int \
    name = value; \
    _c_namespace_end
#endif
