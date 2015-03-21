// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_clone
#  else
#    error
#  endif
#else
#  error
#endif
