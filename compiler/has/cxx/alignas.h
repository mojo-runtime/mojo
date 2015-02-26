#ifndef compiler_has_cxx_alignas
#  ifdef __has_feature
#    define compiler_has_cxx_alignas __has_feature(cxx_alignas)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_alignas compiler_has_gnuc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
