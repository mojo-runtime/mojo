#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__alignas) && defined(__cplusplus)
#  include "config/__has_cxx_alignas.h"
#  if __has_cxx_alignas
#    define __alignas alignas
#  endif
#endif

#if !defined(__alignas) && !defined(__cplusplus)
#  include "config/__has_c_alignas.h"
#  if __has_c_alignas
#    define __alignas _Alignas
#  endif
#endif

#if !defined(__alignas)
#  error
#endif

#pragma clang diagnostic pop
