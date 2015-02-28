#if !defined(has_c_noreturn)
// XXX: __has_feature(c_noreturn) returns a false negative (3.6.0)
#  if defined(__clang__)
#    include "_has_clang_minor.h"
#    if _has_clang_minor(3, 6)
#      define has_c_noreturn 1
#    else
#      error - not sure when they added support
#    endif
#  elif defined(__GNUC__)
#    include "_has_gnuc_minor.h"
#    define has_c_noreturn _has_gnuc_minor(4, 7)
#  else
#    error
#  endif
#endif
