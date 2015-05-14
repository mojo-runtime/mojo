#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getegid 108
#  elif defined(__arm__)
#    define SYS_getegid 50
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getegid 43
#else
#  error
#endif
