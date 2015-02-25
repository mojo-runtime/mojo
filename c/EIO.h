#ifndef EIO
#  ifdef __linux__
#    define EIO 5
#  else
#    error
#  endif
#endif
