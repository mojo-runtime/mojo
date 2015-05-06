#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_feature)
#  define __has_c_static_assert __has_feature(c_static_assert)
#elif defined(__GNUC__)
#  define __has_c_static_assert ((__GNUC__ > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 3)))
#else
#  error
#endif

#pragma clang diagnostic pop
