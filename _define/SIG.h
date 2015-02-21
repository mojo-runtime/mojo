#ifndef _c_define_SIG
#  include "_constant.h"
#  define _c_define_SIG(name, value) _c_define_constant(int, SIG##name, value)
#endif
