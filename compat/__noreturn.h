#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__noreturn)
#  include "__has_cpp_attribute.h"
#  if __has_cpp_attribute(noreturn)
#    define __noreturn [[noreturn]]
#  endif
#endif

#if !defined(__noreturn)
#  include "__has_feature.h"
#  if __has_feature(c_noreturn)
#    define __noreturn _Noreturn
#  endif
#endif

#if !defined(__noreturn)
#  include "__has_attribute.h"
#  if __has_attribute(noreturn)
#    define __noreturn __attribute__((__noreturn__))
#  endif
#endif

#if !defined(__noreturn)
#  define __noreturn
#endif

#pragma clang diagnostic pop
