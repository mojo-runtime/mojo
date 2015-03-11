#ifndef _Noreturn

#if defined(__cplusplus)
#  include "has_cpp_attribute_noreturn.h"
#  if has_cpp_attribute_noreturn
#    pragma clang diagnostic push
#    pragma clang diagnostic ignored "-Wreserved-id-macro"
#    define _Noreturn [[noreturn]]
#    pragma clang diagnostic pop
#  else
#    error
#  endif
#else
#  include "has_c_noreturn.h"
#  if !has_c_noreturn
#    error
#  endif
#endif

#endif
