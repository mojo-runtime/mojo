// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_ioctl 16
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_ioctl 54
#else
#  error
#endif
