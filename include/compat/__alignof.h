#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_feature)
#    if __has_feature(cxx_alignof)
#      define __alignof alignof
#    endif
#  elif defined(__GNUC__)
#    if ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#      define __alignof alignof
#    endif
#  else
#    error
#  endif
#else
#  if defined(__has_feature)
#    if __has_feature(c_alignof)
#      define __alignof _Alignof
#    endif
#  elif defined(__GNUC__)
#    if ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 7)))
#      define __alignof _Alignof
#    endif
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop
