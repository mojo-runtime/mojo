#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ENOTCONN 107
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOTCONN 57
#else
#  error
#endif
