// -*- C -*-

#pragma once

#if defined(__SIG_ATOMIC_MIN__)
#  define SIG_ATOMIC_MIN __SIG_ATOMIC_MIN__
#elif defined(__SIG_ATOMIC_WIDTH__)
#  if __SIG_ATOMIC_WIDTH__ == 32
#    include "INT32_MIN.h"
#    define SIG_ATOMIC_MIN INT32_MIN
#  else
#    error
#  endif
#endif
