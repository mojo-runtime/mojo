#ifndef _c_define_SYS_
#  include "_c_define_constant.h"
#  define _c_define_SYS_(name, value) _c_define_constant(int, SYS_##name, value)
#endif
