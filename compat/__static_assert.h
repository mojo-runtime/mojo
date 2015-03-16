#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__static_assert)
#  include "config/__has_cxx_static_assert_without_message.h"
#  if __has_cxx_static_assert_without_message
#    define __static_assert static_assert
#  endif
#endif

#if !defined(__static_assert)
#  if defined(__cplusplus)
#    include "config/__has_cxx_static_assert.h"
#    if __has_cxx_static_assert
#      define __static_assert_2 static_assert
#    endif
#  else
#    include "config/__has_c_static_assert.h"
#    if __has_c_static_assert
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
