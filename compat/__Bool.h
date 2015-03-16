#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__Bool) && defined(__cplusplus)
#  define __Bool bool
#endif

#if !defined(__Bool)
#  include "config/__has_c99.h"
#  if __has_c99
#    define __Bool _Bool
#  endif
#endif

#if !defined(__Bool)
#  error
#endif

#pragma clang diagnostic pop
