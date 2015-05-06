#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
// No C++1z feature tests yet
#  if defined(__clang__)
#    if ((__clang_major__ > 3) || ((__clang_major__ == 3) && (__clang_minor__ >= 5)))
#      define __static_assert(...)                                  \
         _Pragma("clang diagnostic push")                           \
         _Pragma("clang diagnostic ignored \"-Wc++1z-extensions\"") \
         static_assert(__VA_ARGS__)                                 \
         _Pragma("clang diagnostic pop")
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    if ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 3)))
#      define __static_assert_2(x, y) static_assert(x, y)
#    else
#      error
#    endif
#  else
#    error
#  endif
#else
#  if defined(__has_feature)
#    if __has_feature(c_static_assert)
#      define __static_assert_2(x, y) _Static_assert(x, y)
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    if ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 3)))
#      define __static_assert_2(x, y) _Static_assert(x, y)
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

#if !defined(__static_assert)
#  if defined(__static_assert_2)
#    define __static_assert(...)             __static_assert_(__VA_ARGS__, 2, 1)(__VA_ARGS__)
#    define __static_assert_(_1, _2, n, ...) __static_assert_ ## n
#    define __static_assert_1(x)             __static_assert_2(x, #x)
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop
