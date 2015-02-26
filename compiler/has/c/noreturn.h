#ifndef compiler_has_c_noreturn
// XXX: __has_feature(c_noreturn) returns a false negative (3.6.0)
#  ifdef __clang__
#    include "compiler/has/clang/minor.h"
#    if compiler_has_clang_minor(3, 6)
#      define compiler_has_c_noreturn 1
#    else
#      error todo - not sure when they added support
#    endif
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_c_noreturn compiler_has_gnuc_minor(4, 7)
#  else
#    error todo
#  endif
#endif
