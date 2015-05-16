#pragma once

#if defined(__linux__)
#  if defined(__alpha__)
#    define VTIME 17
#  elif defined(__powerpc__)
#    define VTIME 7
#  elif defined(__sparc__)
#    error
#  else
#    define VTIME 5
#  endif
#elif defined(__FreeBSD__)
#  define VTIME 17
#else
#  error
#endif
