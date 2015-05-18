#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  include "__has_cxx_relaxed_constexpr.h"
#  if __has_cxx_relaxed_constexpr
#    define __constexpr constexpr
#  else
#    define __constexpr
#  endif
#else
#  define __constexpr
#endif

#pragma clang diagnostic pop
