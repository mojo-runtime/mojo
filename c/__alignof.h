#ifndef __alignof

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_feature)
#    if __has_feature(cxx_alignof)
#      define __alignof alignof
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 8)
#      define __alignof alignof
#    else
#      error
#    endif
#  else
#    error
#  endif
#else
#  if defined(__has_feature)
#    if __has_feature(c_alignof)
#      define __alignof _Alignof
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 8)
#      define __alignof _Alignof
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop

#endif
