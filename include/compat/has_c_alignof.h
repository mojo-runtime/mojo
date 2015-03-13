#ifndef has_c_alignof

#if defined(__clang__)
// Workaround: __has_feature(c_alignof) → false negative (3.6.0)
#  include "_has_clang_minor.h"
#  define has_c_alignof _has_clang_minor(3, 3)
#elif defined(__GNUC__)
#  include "_gnuc/has_version!.h"
#  define has_c_alignof _gnuc_has_version(4, 7)
#else
#  error
#endif

#endif
