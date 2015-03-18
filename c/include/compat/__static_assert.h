#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

// XXX: No C++1z feature tests yet
#if !defined(__static_assert) && defined(__cplusplus)
#  if defined(__clang__)
#    include "__has_clang.h"
#    if __has_clang(3, 5)
#      define __static_assert(...) static_assert(__VA_ARGS__)
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(5, 0)
#      define __static_assert(...) static_assert(__VA_ARGS__)
#    endif
#  endif
#endif

#if !defined(__static_assert)
#  include "__has_feature.h"
#  if defined(__cplusplus)
#    if __has_feature(cxx_static_assert)
#      define __static_assert_2 static_assert
#    endif
#  else
#    if __has_feature(c_static_assert)
#      define __static_assert_2 _Static_assert
#    endif
#  endif
#  if defined(__static_assert_2)
#    include "macro/__va_dispatch.h"
#    define __static_assert(...) __va_dispatch(__static_assert_, __VA_ARGS__)
#    define __static_assert_1(x) __static_assert_2(x, "")
#  endif
#endif

#if !defined(__static_assert)
#  error
#endif

#pragma clang diagnostic pop
