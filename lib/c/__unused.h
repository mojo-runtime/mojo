#pragma once

#include "config/__has_attribute_unused.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if __has_attribute_unused
#  define __unused __attribute__((__unused__))
#else
#  error
#endif

#pragma clang diagnostic pop
