#ifndef has_cpp_attribute_noreturn

#if defined(__has_cpp_attribute)
#  define has_cpp_attribute_noreturn __has_cpp_attribute(__noreturn__)
#elif defined(__clang__) // < 3.7
#  include "_clang/has_version!.h"
#  define has_cpp_attribute_noreturn _clang_has_version(3, 3)
#elif defined(__GNUC__)
#  include "_gnuc/has_version!.h"
#  define has_cpp_attribute_noreturn _gnuc_has_version(4, 8)
#else
#  error
#endif

#endif
