#ifndef ENOSPC
#  ifdef __linux__
#    define ENOSPC 28
#  else
#    error
#  endif
#endif
