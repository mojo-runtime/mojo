#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define EDQUOT 122
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define EDQUOT 69
#else
#  error
#endif
