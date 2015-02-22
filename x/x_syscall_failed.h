#ifndef x_syscall_failed
#  if defined(__linux__) && defined(__x86_64__)
#    include "x_static_cast.h"
#    define x_syscall_failed(result) ((result) > x_static_cast(unsigned long, -4096))
#  else
#    error
#  endif
#endif
