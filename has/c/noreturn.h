#ifndef has_c_noreturn
// XXX: __has_feature(c_noreturn) returns a false negative (3.6.0)
#  ifdef __clang__
#    include "has/clang/minor.h"
#    if has_clang_minor(3, 6)
#      define has_c_noreturn 1
#    else
#      error todo - not sure when they added support
#    endif
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_c_noreturn has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
