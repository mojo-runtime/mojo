#ifndef _linux_syscall0_cannot_fail
#  include "_linux_syscall0.h"
#  ifdef __cplusplus
#    define _linux_syscall0_cannot_fail(number, Ok) Ok(_linux_syscall0(number))
#  else
#    define _linux_syscall0_cannot_fail(number, Ok) ((Ok)(_linux_syscall0(number)))
#  endif
#endif
