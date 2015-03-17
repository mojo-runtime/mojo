#pragma once

#if !defined(__GNUC__)
#  include "__has_feature.h"
#  if __has_feature(cxx_decltype)
#    define __typeof__(x) decltype(x)
#  else
#    error
#  endif
#endif
