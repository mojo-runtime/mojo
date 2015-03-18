#pragma once

#include "__has_attribute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__unavailable) && __has_attribute(unavailable)
#  define __unavailable(x) __attribute__((__unavailable__(x)))
#endif

#if !defined(__unavailable) && __has_attribute(error)
#  define __unavailable(x) __attribute__((__error__(x)))
#endif

#if !defined(__unavailable)
#  error
#endif

#pragma clang diagnostic pop
