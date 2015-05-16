#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__powerpc__)
#    include "_IOR.h"
#    define TCSETSW _IOR('t', 21, struct termios)
#  elif defined(__hppa__)
#    include "_IOR.h"
#    define TCSETSW _IOR('T', 18, struct termios)
#  elif defined(__sparc__)
#    include "_IOR.h"
#    define TCSETSW _IOR('T', 10, struct termios)
#  elif defined(__mips__)
#    define TCSETSW 0x540f
#  else
#    define TCSETSW 0x5403
#  endif
#elif defined(__FreeBSD__)
#  include "_IOR.h"
#  define TCSETSW _IOR('t', 22, struct termios) // aka `TIOCSETAF`
#else
#  error
#endif
