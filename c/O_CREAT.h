#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic (0100)
#    define O_CREAT 0x40
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define O_CREAT 0x200
#else
#  error
#endif
