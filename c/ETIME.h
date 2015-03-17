#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ETIME 62
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ETIME _Pragma("GCC error \"C++11, but they don't have one\"")
#else
#  error
#endif
