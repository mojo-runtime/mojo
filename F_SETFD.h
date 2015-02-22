#ifndef F_SETFD
#  ifdef __linux__
#    define F_SETFD 2
#  else
#    error
#  endif
#endif
