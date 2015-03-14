#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  if defined(__has_cpp_attribute)
#    if __has_cpp_attribute(noreturn)
#      define __noreturn [[noreturn]]
#    else
#      error
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 8)
#      define __noreturn [[noreturn]]
#    endif
#  endif
#else
#  if defined(__has_feature)
#    if __has_feature(c_noreturn)
#      define __noreturn _Noreturn
#    endif
#  elif defined(__GNUC__)
#    include "__has_gnuc.h"
#    if __has_gnuc(4, 7)
#      define __noreturn _Noreturn
#    endif
#  endif
#endif

#if !defined(__noreturn) && defined(__GNUC__)
#  include "__has_gnuc.h"
#  if __has_gnuc(2, 5)
#    define __noreturn __attribute__((__noreturn__))
#  endif
#endif

#if !defined(__noreturn)
#  define __noreturn
#endif

#pragma clang diagnostic pop
