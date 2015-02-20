#ifndef _c_syscall_failed
#  if defined(__linux__) && defined(__x86_64__)
#    include "c/_c_static_cast.h"
#    define _c_syscall_failed(result) ((result) > _c_static_cast(unsigned long, -4096))
#  else
#    error
#  endif
#endif
