#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cxx_relaxed_constexpr) && defined(__has_feature)
#  define __has_cxx_relaxed_constexpr __has_feature(cxx_relaxed_constexpr)
#endif

#if !defined(__has_cxx_relaxed_constexpr) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cxx_relaxed_constexpr __has_gnuc(5, 0)
#endif

#if !defined(__has_cxx_relaxed_constexpr)
#  define __has_cxx_relaxed_constexpr 0
#endif

#pragma clang diagnostic pop
