// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_pause 34
#  elif defined(__arm__)
#    define SYS_pause 29
#  else
#    error
#  endif
#else
#  error
#endif
