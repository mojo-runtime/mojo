#ifndef has_c_alignof
// XXX: __has_feature(c_alignof) returns a false negative (3.6.0)
#  ifdef __clang__
#    include "has/clang/minor.h"
#    define has_c_alignof has_clang_minor(3, 3)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_c_alignof has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
