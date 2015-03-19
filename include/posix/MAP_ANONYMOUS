// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic
#    define MAP_ANONYMOUS 0x20
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define MAP_ANONYMOUS 0x1000
#else
#  error
#endif
