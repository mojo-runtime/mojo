// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_waitid 247
#  elif defined(__arm__)
#    define SYS_waitid 280
#  else
#    error
#  endif
#else
#  error
#endif
