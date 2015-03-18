#pragma once

#if defined(__WCHAR_MIN__)
#  define WCHAR_MIN __WCHAR_MIN__
#elif defined(__WCHAR_WIDTH__)
#  include "WCHAR_MAX.h"
#  if WCHAR_MAX == 2147483647
#    define WCHAR_MIN (-2147483648)
#  else
#    error
#  endif
#endif
