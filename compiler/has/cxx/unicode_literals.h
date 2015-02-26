#ifndef compiler_has_cxx_unicode_literals
#  ifdef __has_feature
#    define compiler_has_cxx_unicode_literals __has_feature(cxx_unicode_literals)
#  elif defined __GNUC__
#    include "compiler/has/gnuc/minor.h"
#    define compiler_has_cxx_unicode_literals compiler_has_gnuc_minor(4, 5)
#  else
#    error todo
#  endif
#endif