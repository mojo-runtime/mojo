#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__has_feature)
#  define __has_c_alignas   __has_feature(c_alignas)
#  define __has_cxx_alignas __has_feature(cxx_alignas)
#elif defined(__GNUC__)
#  define __has_c_alignas   ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 7)))
#  define __has_cxx_alignas ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#else
#  error
#endif

#if defined(__cplusplus)
#  if __has_cxx_alignas
#    define __alignas alignas
#  else
#    error
#  endif
#else
#  if __has_c_alignas
#    define __alignas _Alignas
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop
