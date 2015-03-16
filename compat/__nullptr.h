#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

//--------------------------------------------------------------------------------------------------

#if !defined(__nullptr)
#  if defined(__has_feature)
#    define __has_cxx_nullptr __has_feature(cxx_nullptr)
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    define __has_cxx_nullptr __has_gnuc(4, 6)
#  else
#    error
#  endif
#  if __has_cxx_nullptr
#    define __nullptr nullptr
#  endif
#  undef __has_cxx_nullptr
#endif

//--------------------------------------------------------------------------------------------------

#if !defined(__nullptr)
#  define __nullptr 0
#endif

//--------------------------------------------------------------------------------------------------

#pragma clang diagnostic pop
