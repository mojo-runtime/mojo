#pragma once

#include "__has_feature.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__alignof) && __has_feature(cxx_alignof)
#  define __alignof(x) alignof(x)
#endif

#if !defined(__alignof) && __has_feature(c_alignof)
#  define __alignof(x) _Alignof(x)
#endif

#if !defined(__alignof)
#  error
#endif

#pragma clang diagnostic pop
