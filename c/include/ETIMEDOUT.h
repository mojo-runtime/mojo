#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ETIMEDOUT 110
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ETIMEDOUT 60
#else
#  error
#endif
