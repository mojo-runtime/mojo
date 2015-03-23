#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define CS8 060
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define CS8 0x300
#else
#  error
#endif
