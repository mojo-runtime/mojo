#pragma once

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-id-macro"

#if !defined(__auto_return)
#  include "config/__has_cxx_return_type_deduction.h"
#  if __has_cxx_return_type_deduction
#    define __auto_return auto
#  endif
#endif

#if !defined(__auto_return)
#  error
#endif

#pragma clang diagnostic pop
