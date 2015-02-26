#ifndef has_cxx_unicode_literals
#  ifdef __has_feature
#    define has_cxx_unicode_literals __has_feature(cxx_unicode_literals)
#  elif defined __GNUC__
#    include "has/_gnuc/minor.h"
#    define has_cxx_unicode_literals _has_gnuc_minor(4, 5)
#  else
#    error todo
#  endif
#endif
