#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__powerpc__)
#    include "_IOR.h"
#    define TCGETS _IOR('t', 19, struct termios)
#  elif defined(__hppa__)
#    include "_IOR.h"
#    define TCGETS _IOR('T', 16, struct termios)
#  elif defined(__sparc__)
#    include "_IOR.h"
#    define TCGETS _IOR('T', 8, struct termios)
#  elif defined(__mips__)
#    define TCGETS 0x540d
#  else
#    define TCGETS 0x5401
#  endif
#elif defined(__FreeBSD__)
#  include "_IOR.h"
#  define TCGETS _IOR('t', 19, struct termios) // aka `TIOCGETA`
#else
#  error
#endif
