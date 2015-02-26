#ifndef compiler_has_c_alignof
// XXX: __has_feature(c_alignof) returns a false negative (3.6.0)
#  ifdef __clang__
#    include "compiler/has/clang/minor.h"
#    define compiler_has_c_alignof compiler_has_clang_minor(3, 3)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_c_alignof compiler_has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
