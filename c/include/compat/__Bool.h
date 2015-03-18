#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__Bool) && defined(__cplusplus)
#  define __Bool bool
#endif

#if !defined(__Bool)
#  include "__has_c.h"
#  if __has_c(99)
#    define __Bool _Bool
#  endif
#endif

#if !defined(__Bool)
#  error
#endif

#pragma clang diagnostic pop
