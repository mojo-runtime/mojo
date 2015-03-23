#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__powerpc__)
#    define IXON 01000
#  else
#    define IXON 02000
#  endif
#elif defined(__FreeBSD__)
#  define IXON 0x200
#else
#  error
#endif
