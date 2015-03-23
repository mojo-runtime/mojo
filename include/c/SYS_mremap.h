// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_mremap 25
#  elif defined(__arm__)
#    define SYS_mremap 163
#  else
#    error
#  endif
#else
#  error
#endif
