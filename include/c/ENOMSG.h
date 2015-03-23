#pragma once

#if defined(__linux__)
#  if defined(__arm__) || defined(__x86_64__) // generic
#    define ENOMSG 42
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOMSG 83
#else
#  error
#endif
