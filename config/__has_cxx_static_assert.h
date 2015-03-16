#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__has_cxx_static_assert) && defined(__has_feature)
#  define __has_cxx_static_assert __has_feature(cxx_static_assert)
#endif

#if !defined(__has_cxx_static_assert) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  define __has_cxx_static_assert __has_gnuc(4, 3)
#endif

#if !defined(__has_cxx_static_assert)
#  define __has_cxx_static_assert 0
#endif

#pragma clang diagnostic pop
