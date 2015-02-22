#ifndef F_GETFD
#  ifdef __linux__
#    define F_GETFD 1
#  else
#    error
#  endif
#endif
