#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_feature)
#    if __has_feature(cxx_alignas)
#      define __alignas alignas
#    endif
#  elif defined(__GNUC__)
#    if ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 8)))
#      define __alignas alignas
#    endif
#  else
#    error
#  endif
#else
#  if defined(__has_feature)
#    if __has_feature(c_alignas)
#      define __alignas _Alignas
#    endif
#  elif defined(__GNUC__)
#    if ((__GNUC__ >= 5) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 7)))
#      define __alignas _Alignas
#    endif
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop
