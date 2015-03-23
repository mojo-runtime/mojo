// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_tgkill 234
#  elif defined(__arm__)
#    define SYS_tgkill 268
#  else
#    error
#  endif
#else
#  error
#endif
