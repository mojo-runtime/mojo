#ifndef compiler_has_cxx_implicit_moves
#  ifdef __has_feature
#    define compiler_has_cxx_implicit_moves __has_feature(cxx_implicit_moves)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_implicit_moves compiler_has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
