#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define ENOTRECOVERABLE 131
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define ENOTRECOVERABLE 95
#else
#  error
#endif
