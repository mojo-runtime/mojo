#ifndef __has_cpp_attribute

#if defined(__GNUC__)
#  include "_gnuc/has_cpp_attribute!.h"
#  define __has_cpp_attribute(x) _gnuc_has_cpp_attribute(x)
#else
#  error
#endif

#endif
