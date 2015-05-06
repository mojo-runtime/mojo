#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  include "feature/__has_cpp_attribute_noreturn.h"
#  if __has_cpp_attribute_noreturn
#    define __noreturn [[noreturn]]
#  else
#    error
#  endif
#else
#  include "feature/__has_c_noreturn.h"
#  if __has_c_noreturn
#    define __noreturn _Noreturn
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop
