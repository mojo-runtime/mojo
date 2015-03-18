#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOBUFS 105
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOBUFS 55
#else
#  error
#endif
