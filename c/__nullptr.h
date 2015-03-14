#ifndef __nullptr

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_feature)
#  if __has_feature(cxx_nullptr)
#    define __nullptr nullptr
#  endif
#elif defined(__GNUC__)
#  include "__has_gnuc.h"
#  if __has_gnuc(4, 6)
#    define __nullptr nullptr
#  endif
#else
#  error
#endif

#if !defined(__nullptr)
#  define __nullptr 0
#endif

#pragma clang diagnostic pop

#endif
