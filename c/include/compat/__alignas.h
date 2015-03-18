#pragma once

#include "__has_feature.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__alignas) && __has_feature(cxx_alignas)
#  define __alignas(x) alignas(x)
#endif

#if !defined(__alignas) && __has_feature(c_alignas)
#  define __alignas(x) _Alignas(x)
#endif

#if !defined(__alignas)
#  error
#endif

#pragma clang diagnostic pop
