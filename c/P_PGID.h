#ifndef P_PGID
#  ifdef __linux__
#    define P_PGID 2
#  else
#    error
#  endif
#endif
