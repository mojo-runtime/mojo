#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__unavailable)
#  include "config/__has_attribute_unavailable.h"
#  if __has_attribute_unavailable
#    define __unavailable(x) __attribute__((__unavailable__(x)))
#  endif
#endif

#if !defined(__unavailable)
#  include "config/__has_attribute_error.h"
#  if __has_attribute_error
#    define __unavailable(x) __attribute__((__error__(x)))
#  endif
#endif

#if !defined(__unavailable)
#  error
#endif

#pragma clang diagnostic pop
