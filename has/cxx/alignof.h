#ifndef has_cxx_alignof
// XXX: false negative
#  ifdef __clang__
#    include "has/clang/minor.h"
#    define has_cxx_alignof has_clang_minor(3, 3)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_alignof has_gnuc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
