#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_feature)
#  define __has_cxx_alignas __has_feature(cxx_alignas)
#elif defined(__GNUC__)
#  define __has_cxx_alignas ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#else
#  error
#endif

#pragma clang diagnostic pop
