#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENODATA 61
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENODATA _Pragma("GCC error \"Strictly speaking, they don't have one\"")
#else
#  error
#endif
