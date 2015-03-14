#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic (0200000)
#    define O_DIRECTORY 0x10000
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define O_DIRECTORY 0x20000
#else
#  error
#endif
