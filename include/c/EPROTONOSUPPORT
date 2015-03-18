#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EPROTONOSUPPORT 93
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EPROTONOSUPPORT 43
#else
#  error
#endif
