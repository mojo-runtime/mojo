#pragma once

#if defined(__WCHAR_MIN__)
#  define WCHAR_MIN __WCHAR_MIN__
#elif defined(__GNUC__)
#  if defined(__WCHAR_UNSIGNED__)
#    define WCHAR_MIN (0u)
#  elif defined(__SIZEOF_WCHAR_T__)
#    if __SIZEOF_WCHAR_T__ == 4
#      include "INT32_MIN.h"
#      define WCHAR_MIN INT32_MIN
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
