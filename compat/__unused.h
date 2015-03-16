#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__unused)
#  include "config/__has_attribute_unused.h"
#  if __has_attribute_unused
#    define __unused __attribute__((__unused__))
#  endif
#endif

#if !defined(__unused)
#  error
#endif

#pragma clang diagnostic pop
