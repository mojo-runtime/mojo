#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__used)
#  include "config/__has_attribute_used.h"
#  if __has_attribute_used
#    define __used __attribute__((__used__))
#  endif
#endif

#if !defined(__used)
#  error
#endif

#pragma clang diagnostic pop
