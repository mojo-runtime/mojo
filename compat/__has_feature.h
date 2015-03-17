#pragma once

#if !defined(__has_feature) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_feature(x)                          __has_feature_(x)()
#  define __has_feature_(x)                         __has_feature_ ## x
#  define __has_feature_c_alignas()                 __has_gnuc(4, 7)
#  define __has_feature_c_alignof()                 __has_gnuc(4, 7)
#  define __has_feature_c_noreturn()                __has_gnuc(4, 7)
#  define __has_feature_c_static_assert()           __has_gnuc(4, 3)
#  define __has_feature_cxx_alignas()               __has_gnuc(4, 7)
#  define __has_feature_cxx_alignof()               __has_gnuc(4, 7)
#  define __has_feature_cxx_decltype()              __has_gnuc(4, 3)
#  define __has_feature_cxx_noexcept()              __has_gnuc(4, 6)
#  define __has_feature_cxx_nullptr()               __has_gnuc(4, 6)
#  define __has_feature_cxx_relaxed_constexpr()     __has_gnuc(5, 0)
#  define __has_feature_cxx_return_type_deduction() __has_gnuc(4, 9)
#  define __has_feature_cxx_static_assert()         __has_gnuc(4, 3)
#endif

#if !defined(__has_feature)
#  error
#endif
