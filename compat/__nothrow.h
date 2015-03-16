#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__nothrow)
#  include "config/__has_attribute_nothrow.h"
#  if __has_attribute_nothrow
#    define __nothrow __attribute__((__nothrow__))
#  endif
#endif

#if !defined(__nothrow)
#  error
#endif

#pragma clang diagnostic pop
