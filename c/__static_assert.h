#ifndef __static_assert

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
// No C++1z feature tests yet
#  if defined(__clang__)
#    include "__has_clang.h"
#    if __has_clang(3, 5)
#      define __static_assert static_assert
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 3)
#      define __static_assert_2 static_assert
#    else
#      error
#    endif
#  else
#    error
#  endif
#else
#  if defined(__has_feature)
#    if __has_feature(c_static_assert)
#      define __static_assert_2 _Static_assert
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 3)
#      define __static_assert_2 _Static_assert
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

#if !defined(__static_assert)
#  if defined(__static_assert_2)
#    include "__va_dispatch.h"
#    define __static_assert(...) __va_dispatch(__static_assert, __VA_ARGS__)
#    define __static_assert_1(x) __static_assert_2(x, "")
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop

#endif
