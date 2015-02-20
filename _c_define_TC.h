#ifndef _c_define_TC
#  include "_c_define_ioctl_request.h"
#  define _c_define_TC(name, value) _c_define_ioctl_request(TC##name, value)
#endif
