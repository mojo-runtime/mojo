#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_vfork 58
#  elif defined(__arm__)
#    define SYS_vfork 190
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_vfork 66
#else
#  error
#endif
