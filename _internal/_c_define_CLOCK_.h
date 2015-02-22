#ifndef _c_define_CLOCK_
#  include "../clockid_t.h"
#  include "_c_define_constant.h"
#  define _c_define_CLOCK_(name, value) _c_define_constant(clockid_t, CLOCK_##name, value)
#endif
