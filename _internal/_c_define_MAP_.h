#ifndef _c_define_MAP_
#  include "_c_define_constant.h"
#  define _c_define_MAP_(name, value) _c_define_constant(int, MAP_##name, value)
#endif
