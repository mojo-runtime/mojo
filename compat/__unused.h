#pragma once

#include "__has_attribute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__unused) && __has_attribute(unused)
#  define __unused __attribute__((__unused__))
#endif

#if !defined(__unused)
#  error
#endif

#pragma clang diagnostic pop
