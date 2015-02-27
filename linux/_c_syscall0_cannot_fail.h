#ifndef _c_syscall0_cannot_fail
#  include "_c_syscall0.h"
#  ifdef __cplusplus
#    define _c_syscall0_cannot_fail(number, Ok) Ok(_c_syscall0(number))
#  else
#    define _c_syscall0_cannot_fail(number, Ok) ((Ok)(_c_syscall0(number)))
#  endif
#endif
