// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_uname 63
#  else
#    error
#  endif
#else
#  error
#endif
