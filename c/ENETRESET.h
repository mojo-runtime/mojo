#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENETRESET 102
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENETRESET 52
#else
#  error
#endif
