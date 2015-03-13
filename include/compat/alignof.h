#ifndef alignof

#include "__has_feature.h"

#if !__has_feature(cxx_alignof)
#  if __has_feature(c_alignof)
#    define alignof _Alignof
#  else
#    error
#  endif
#endif

#endif
