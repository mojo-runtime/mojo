#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  include "__has_feature.h"
#  if __has_feature(cxx_noexcept)
#    define __noexcept noexcept
#  else
#    define __noexcept throw()
#  endif
#else
#  define __noexcept
#endif

#pragma clang diagnostic pop
