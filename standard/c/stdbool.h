#pragma once

#if !defined(__cplusplus)
#  if defined(__STDC_VERSION__)
#    if ((__STDC_VERSION__) >= 199901L)
#      define bool _Bool
#    else
#      error
#    endif
#  else
#    error
#  endif
#  define false 0
#  define true 1
#endif

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#define __bool_true_false_are_defined 1
#pragma clang diagnostic pop
