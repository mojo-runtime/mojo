#ifndef has_cpp_attribute_noreturn

#if defined(__has_cpp_attribute)
#  define has_cpp_attribute_noreturn __has_cpp_attribute(__noreturn__)
#elif defined(__clang__) // < 3.7
#  include "_has_clang_minor.h"
#  define has_cpp_attribute_noreturn _has_clang_minor(3, 3)
#elif defined(__GNUC__)
#  include "_has_gnuc_minor.h"
#  define has_cpp_attribute_noreturn _has_gnuc_minor(4, 8)
#else
#  error
#endif

#endif
