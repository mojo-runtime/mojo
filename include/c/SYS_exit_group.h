// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_exit_group 231
#  elif defined(__arm__)
#    define SYS_exit_group 248
#  else
#    error
#  endif
#else
#  error
#endif
