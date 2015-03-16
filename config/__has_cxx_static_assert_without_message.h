#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

// XXX: No C++1z feature tests yet

#if !defined(__has_cxx_static_assert_with_no_message) && defined(__clang__)
#  include "__has_clang.h"
#  define __has_cxx_static_assert_without_message __has_clang(3, 5)
#endif

#if !defined(__has_cxx_static_assert_without_message) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cxx_static_assert_without_message __has_gnuc(5, 0)
#endif

#if !defined(__has_cxx_static_assert_without_message)
#  define __has_cxx_static_assert_without_message 0
#endif

#pragma clang diagnostic pop
