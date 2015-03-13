#ifndef _Noreturn

#if defined(__cplusplus)
#  include "__has_cpp_attribute.h"
#  if __has_cpp_attribute(noreturn)
#    pragma clang diagnostic push
#    pragma clang diagnostic ignored "-Wreserved-id-macro"
#    define _Noreturn [[noreturn]]
#    pragma clang diagnostic pop
#  else
#    error
#  endif
#else
#  include "__has_feature.h"
#  if !__has_feature(c_noreturn)
#    error
#  endif
#endif

#endif
