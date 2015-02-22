#ifndef WEXITED
#  ifdef __linux__
#    define WEXITED 4
#  else
#    error
#  endif
#endif
