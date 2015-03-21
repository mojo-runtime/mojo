// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_geteuid 107
#  else
#    error
#  endif
#elif defined(__FreeBSD__)
#  define SYS_geteuid 25
#else
#  error
#endif
