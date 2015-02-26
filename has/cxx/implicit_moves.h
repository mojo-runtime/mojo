#ifndef has_cxx_implicit_moves
#  ifdef __has_feature
#    define has_cxx_implicit_moves __has_feature(cxx_implicit_moves)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_implicit_moves _has_gnuc_minor(4, 6)
#  else
#    error todo
#  endif
#endif
