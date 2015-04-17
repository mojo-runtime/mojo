#pragma once

#if defined(__linux__)
#  if defined(__alpha__) || defined(__powerpc__)
#    include "_IOR.h"
#    define TCSETSF _IOR('t', 22, struct termios)
#  elif defined(__hppa__)
#    include "_IOR.h"
#    define TCSETSF _IOR('T', 19, struct termios)
#  elif defined(__sparc__)
#    include "_IOR.h"
#    define TCSETSF _IOR('T', 11, struct termios)
#  elif defined(__mips__)
#    define TCSETSF 0x5410
#  else
#    define TCSETSF 0x5404
#  endif
#elif defined(__FreeBSD__)
#  include "_IOR.h"
#  define TCSETSF _IOR('t', 21, struct termios) // aka `TIOCSETAW`
#else
#  error
#endif
