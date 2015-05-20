#pragma once

#if defined(__has_feature)
#  define __has_c_alignof   __has_feature(c_alignof)
#  define __has_cxx_alignof __has_feature(cxx_alignof)
#elif defined(__GNUC__)
#  define __has_c_alignof   ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 7)))
#  define __has_cxx_alignof ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#else
#  error
#endif

#if defined(__cplusplus)
#  if __has_cxx_alignof
#    define __alignof alignof
#  else
#    error
#  endif
#else
#  if __has_c_alignof
#    define __alignof _Alignof
#  else
#    error
#  endif
#endif
