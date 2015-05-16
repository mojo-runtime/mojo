#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ECONNABORTED 103
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ECONNABORTED 53
#else
#  error
#endif
