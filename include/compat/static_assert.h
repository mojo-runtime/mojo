#ifndef static_assert

#include "__has_feature.h"

#if !__has_feature(cxx_static_assert)
#  if __has_feature(c_static_assert)
#    define static_assert _Static_assert
#  else
#    error
#  endif
#endif

#endif
