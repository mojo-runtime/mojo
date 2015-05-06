#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if defined(__cplusplus)
#  include "feature/__has_cxx_alignas.h"
#  if __has_cxx_alignas
#    define __alignas alignas
#  else
#    error
#  endif
#else
#  include "feature/__has_c_alignas.h"
#  if __has_c_alignas
#    define __alignas _Alignas
#  else
#    error
#  endif
#endif

#pragma clang diagnostic pop
