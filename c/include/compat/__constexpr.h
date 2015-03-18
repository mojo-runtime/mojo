#pragma once // C++14's "relaxed" constexpr

#include "__has_attribute.h"
#include "__has_feature.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__constexpr) && __has_feature(cxx_relaxed_constexpr)
#  define __constexpr constexpr
#endif

#if !defined(__constexpr) && __has_attribute(const)
#  define __constexpr __attribute__((__const__))
#endif

#if !defined(__constexpr)
#  define __constexpr
#endif

#pragma clang diagnostic pop
