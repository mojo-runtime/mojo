#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__nullptr)
#  include "config/__has_cxx_nullptr.h"
#  if __has_cxx_nullptr
#    define __nullptr nullptr
#  endif
#endif

#if !defined(__nullptr)
#  define __nullptr 0
#endif

#pragma clang diagnostic pop
