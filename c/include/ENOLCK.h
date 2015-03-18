#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOLCK 37
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOLCK 77
#else
#  error
#endif
