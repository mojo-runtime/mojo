#pragma once

#include "__has_attribute_nothrow.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if __has_attribute_nothrow
#  define __nothrow __attribute__((__nothrow__))
#else
#  error
#endif

#pragma clang diagnostic pop
