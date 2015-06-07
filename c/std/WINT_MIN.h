#pragma once

#if defined(__WINT_MIN__)
#  define WINT_MIN __WINT_MIN__
#elif defined(__GNUC__)
#  if defined(__WINT_UNSIGNED__)
#    define WINT_MIN (0u)
#  elif defined(__SIZEOF_WINT_T__)
#    if __SIZEOF_WINT_T__ == 4
#      include "INT32_MIN.h"
#      define WINT_MIN INT32_MIN
#    else
#      error
#    endif
#  else
#    error
#  endif
#else
#  error
#endif
