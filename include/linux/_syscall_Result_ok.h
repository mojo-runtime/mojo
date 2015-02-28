#ifndef _syscall_Result_ok
#  include "compat/_c_static_cast.h"
#  define _syscall_Result_ok(T, self) _c_static_cast(T, self)
#endif
