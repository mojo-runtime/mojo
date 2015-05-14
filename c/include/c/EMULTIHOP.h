#pragma once

#if defined(__linux__)
#  if defined(__alpha__)
#    define EMULTIHOP 110
#  elif defined(__mips__)
#    define EMULTIHOP 74
#  elif defined(__hppa__)
#    define EMULTIHOP 64
#  elif defined(__sparc__)
#    define EMULTIHOP 87
#  else
#    define EMULTIHOP 72
#  endif
#elif defined(__FreeBSD__)
#  define EMULTIHOP 90
#else
#  error
#endif
