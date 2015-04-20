#pragma once

#if defined(__linux__)
#  if defined(__alpha__)
#    define O_NONBLOCK 0x4
#  elif defined(__hppa__)
#    define O_NONBLOCK 0x10004
#  elif defined(__mips__)
#    define O_NONBLOCK 0x80
#  elif defined(__sparc__)
#    define O_NONBLOCK 0x4000
#  else
#    define O_NONBLOCK 0x800
#  endif
#elif defined(__FreeBSD__)
#  define O_NONBLOCK 0x4
#else
#  error
#endif
