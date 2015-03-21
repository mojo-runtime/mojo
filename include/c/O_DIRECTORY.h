// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__arm__)
#    define O_DIRECTORY 040000
#  elif defined(__x86_64__) // generic
#    define O_DIRECTORY 0200000
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define O_DIRECTORY 0x20000
#else
#  error
#endif
