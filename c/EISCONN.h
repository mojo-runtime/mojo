#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EISCONN 106
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EISCONN 56
#else
#  error
#endif
