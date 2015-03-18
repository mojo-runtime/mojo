#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOLINK 67
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOLINK 91
#else
#  error
#endif
