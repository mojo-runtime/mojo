#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define EPROTO 71
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EPROTO 92
#else
#  error
#endif
