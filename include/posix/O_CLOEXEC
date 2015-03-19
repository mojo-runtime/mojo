// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__) // generic (02000000)
#    define O_CLOEXEC 0x80000
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define O_CLOEXEC 0x100000
#else
#  error
#endif
