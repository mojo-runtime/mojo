#ifndef compiler_has_gnuc_minor
#  if defined __GNUC__ && defined __GNUC_MINOR__
#    define compiler_has_gnuc_minor(x, y) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((x) << 16) + (y))
#  else
#    define compiler_has_gnuc_minor(x, y) 0
#  endif
#endif
