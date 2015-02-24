#ifndef has_gcc_minor
#  if defined __GNUC__ && defined __GNUC_MINOR__
#    define has_gcc_minor(x, y) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((x) << 16) + (y))
#  else
#    define has_gcc_minor(x, y) 0
#  endif
#endif
