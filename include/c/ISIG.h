#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__powerpc__)
#    define ISIG 0x80
#  else
#    define ISIG 0x1
#  endif
#elif defined(__FreeBSD__)
#  define ISIG 0x80
#else
#  error
#endif
