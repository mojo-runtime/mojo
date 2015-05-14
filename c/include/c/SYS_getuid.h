#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_getuid 102
#  elif defined(__arm__)
#    define SYS_getuid 24
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_getuid 24
#else
#  error
#endif
