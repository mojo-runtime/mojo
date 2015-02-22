#ifndef _c_define_CLD_
#  include "_c_define_constant.h"
#  define _c_define_CLD_(name, value) _c_define_constant(int, CLD_##name, value)
#endif
