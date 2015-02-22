#ifndef _c_define_AT_
#  include "_c_define_constant.h"
#  define _c_define_AT_(name, value) _c_define_constant(int, AT_##name, value)
#endif
