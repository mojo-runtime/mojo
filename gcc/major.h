#ifndef has_gcc_major
#  ifdef __GNUC__
#    define has_gcc_major(x) (__GNUC__ >= (x))
#  else
#    define has_gcc_major(x) 0
#  endif
#endif
