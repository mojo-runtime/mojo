#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define __NR_getppid 110
#  elif defined(__arm__)
#    define __NR_getppid 64
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define __NR_getppid 39
#else
#  error
#endif

#error
