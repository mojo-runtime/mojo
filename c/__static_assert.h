#ifndef __static_assert

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_feature)
#    if __has_feature(cxx_static_assert)
#      define __static_assert static_assert
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 3)
#      define __static_assert static_assert
#    else
#      error
#    endif
#  else
#    error
#  endif
#else
#  if defined(__has_feature)
#    if __has_feature(c_static_assert)
#      define __static_assert _Static_assert
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 3)
#      define __static_assert _Static_assert
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop

#endif
