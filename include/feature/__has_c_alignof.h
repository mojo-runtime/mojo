#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_feature)
#  define __has_c_alignof __has_feature(c_alignof)
#elif defined(__GNUC__)
#  define __has_c_alignof ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 7)))
#else
#  error
#endif

#pragma clang diagnostic pop
