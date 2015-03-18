#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EAGAIN 11
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EAGAIN 35
#else
#  error
#endif
