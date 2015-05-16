#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  include "feature/__has_cxx_alignof.h"
#  if __has_cxx_alignof
#    define __alignof alignof
#  else
#    error
#  endif
#else
#  include "feature/__has_c_alignof.h"
#  if __has_c_alignof
#    define __alignof _Alignof
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop
