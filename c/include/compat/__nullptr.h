#pragma once

#include "__has_feature.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__nullptr) && __has_feature(cxx_nullptr)
#  define __nullptr nullptr
#endif

#if !defined(__nullptr)
#  define __nullptr 0
#endif

#pragma clang diagnostic pop
