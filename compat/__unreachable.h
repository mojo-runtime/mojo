#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__unreachable)
#  include "config/__has_builtin_unreachable.h"
#  if __has_builtin_unreachable
#    define __unreachable __builtin_unreachable
#  endif
#endif

#if !defined(__unreachable)
#  error
#endif

#pragma clang diagnostic pop
