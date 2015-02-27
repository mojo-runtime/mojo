#ifndef has_cxx_implicit_moves
#  ifdef __has_feature
#    define has_cxx_implicit_moves __has_feature(cxx_implicit_moves)
#  elif defined __GNUC__
#    include "has/gnuc/minor.h"
#    define has_cxx_implicit_moves has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
