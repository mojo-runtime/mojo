#pragma once

#if defined(__linux__)
#  if defined(__alpha__)
#    define VMIN 16
#  elif defined(__mips__)
#    define VMIN 4
#  elif defined(__powerpc__)
#    define VMIN 5
#  elif defined(__sparc__)
#    error
#  else
#    define VMIN 6
#  endif
#elif defined(__FreeBSD__)
#  define VMIN 16
#else
#  error
#endif
