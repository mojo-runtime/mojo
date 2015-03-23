#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__powerpc__)
#    define ICANON 0x100
#  else
#    define ICANON 0x2
#  endif
#elif defined(__FreeBSD__)
#  define ICANON 0x100
#else
#  error
#endif
