#ifndef alignas

#include "__has_feature.h"

#if !__has_feature(cxx_alignas)
#  if __has_feature(c_alignas)
#    define alignas _Alignas
#  else
#    error
#  endif
#endif

#endif
