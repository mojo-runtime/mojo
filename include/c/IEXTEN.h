#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__powerpc__)
#    define IEXTEN 0x400
#  elif defined(__mips__)
#    define IEXTEN 0400
#  else
#    define IEXTEN 0100000
#  endif
#elif defined(__FreeBSD__)
#  define IEXTEN 0x400
#else
#  error
#endif
