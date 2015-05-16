#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ECONNRESET 104
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ECONNRESET 54
#else
#  error
#endif
