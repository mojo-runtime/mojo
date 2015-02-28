#if !defined(has_c_alignof)
// XXX: __has_feature(c_alignof) returns a false negative (3.6.0)
#  if defined(__clang__)
#    include "_has_clang_minor.h"
#    define has_c_alignof _has_clang_minor(3, 3)
#  elif defined(__GNUC__)
#    include "_has_gnuc_minor.h"
#    define has_c_alignof _has_gnuc_minor(4, 7)
#  else
#    error
#  endif
#endif
