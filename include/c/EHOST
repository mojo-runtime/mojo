#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EHOSTUNREACH 113
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EHOSTUNREACH 65
#else
#  error
#endif
