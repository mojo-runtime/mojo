#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__typeof) && defined(__cplusplus)
#  include "config/__has_cxx_decltype.h"
#  if __has_cxx_decltype
#    define __typeof decltype
#  endif
#endif

#if !defined(__typeof) && defined(__GNUC__)
#  define __typeof __typeof__
#endif

#if !defined(__typeof)
#  error
#endif

#pragma clang diagnostic pop
