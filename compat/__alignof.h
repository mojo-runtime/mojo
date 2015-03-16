#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__alignof) && defined(__cplusplus)
#  include "config/__has_cxx_alignof.h"
#  if __has_cxx_alignof
#    define __alignof alignof
#  endif
#endif

#if !defined(__alignof) && !defined(__cplusplus)
#  include "config/__has_c_alignof.h"
#  if __has_c_alignof
#    define __alignof _Alignof
#  endif
#endif

#if !defined(__alignof)
#  error
#endif

#pragma clang diagnostic pop
