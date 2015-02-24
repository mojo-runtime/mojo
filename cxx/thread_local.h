#ifndef has_cxx_thread_local
#  ifdef __has_extension
#    define has_cxx_thread_local __has_extension(cxx_thread_local)
#  elif defined __GNUC__
#    include "has/gcc/minor.h"
#    define has_cxx_thread_local has_gcc_minor(4, 8)
#  else
#    error todo
#  endif
#endif
