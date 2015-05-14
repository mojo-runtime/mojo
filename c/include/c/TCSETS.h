#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__powerpc__)
#    include "_IOR.h"
#    define TCSETS _IOR('t', 20, struct termios)
#  elif defined(__hppa__)
#    include "_IOR.h"
#    define TCSETS _IOR('T', 17, struct termios)
#  elif defined(__sparc__)
#    include "_IOR.h"
#    define TCSETS _IOR('T', 9, struct termios)
#  elif defined(__mips__)
#    define TCSETS 0x540e
#  else
#    define TCSETS 0x5402
#  endif
#elif defined(__FreeBSD__)
#  include "_IOR.h"
#  define TCSETS _IOR('t', 20, struct termios) // aka `TIOCSETA`
#else
#  error
#endif
