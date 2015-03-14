#ifndef __alignas

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_feature)
#    if __has_feature(cxx_alignas)
#      define __alignas alignas
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 8)
#      define __alignas alignas
#    else
#      error
#    endif
#  else
#    error
#  endif
#else
#  if defined(__has_feature)
#    if __has_feature(c_alignas)
#      define __alignas _Alignas
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 7)
#      define __alignas _Alignas
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

#pragma clang diagnostic push

#endif
