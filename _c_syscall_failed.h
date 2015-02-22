#ifndef _c_syscall_failed
#  if defined(__linux__) && defined(__x86_64__)
#    include "x/x_static_cast.h"
#    define _c_syscall_failed(result) ((result) > x_static_cast(unsigned long, -4096))
#  else
#    error
#  endif
#endif
