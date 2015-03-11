#ifndef has_cpp_attribute_noreturn

#if defined(__clang__)
// Workaround: __has_cpp_attribute(__noreturn__) → false negative (3.6.0)
#  define has_cpp_attribute_noreturn 1
#elif defined(__GNUC__)
#  include "_has_gnuc_minor.h"
#  define has_cpp_attribute_noreturn _has_gnuc_minor(4, 8)
#else
#  error
#endif

#endif
