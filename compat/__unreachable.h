#pragma once

#include "__has_builtin.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__unreachable) && __has_builtin(__builtin_unreachable)
#  define __unreachable() __builtin_unreachable()
#endif

#if !defined(__unreachable)
#  error
#endif

#pragma clang diagnostic pop
