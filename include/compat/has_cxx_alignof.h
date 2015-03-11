#ifndef has_cxx_alignof

#if defined(__clang__)
// Workaround: __has_feature(cxx_alignof) → false negative (3.6.0)
#  include "_has_clang_minor.h"
#  define has_cxx_alignof _has_clang_minor(3, 3)
#elif defined(__GNUC__)
#  include "_has_gnuc_minor.h"
#  define has_cxx_alignof _has_gnuc_minor(4, 8)
#else
#  error
#endif

#endif
