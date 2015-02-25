#ifndef PATH_MAX
#  ifdef __linux__
#    define PATH_MAX 4096
#  else
#    error
#  endif
#endif
