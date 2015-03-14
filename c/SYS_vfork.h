#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_vfork 58
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_vfork 66
#else
#  error
#endif
