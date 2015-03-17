#pragma once

#include "__has_attribute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__used) && __has_attribute(used)
#  define __used __attribute__((__used__))
#endif

#if !defined(__used)
#  error
#endif

#pragma clang diagnostic pop
