#ifndef _c_define_P_
#  include "../idtype_t.h"
#  include "_c_define_constant.h"
#  define _c_define_P_(name, value) _c_define_constant(idtype_t, P_##name, value)
#endif
