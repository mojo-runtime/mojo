#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EOVERFLOW 75
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EOVERFLOW 84
#else
#  error
#endif
