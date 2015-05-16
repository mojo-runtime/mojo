#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ECONNREFUSED 111
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ECONNREFUSED 61
#else
#  error
#endif
