#ifndef F_DUPFD
#  ifdef __linux__
#    define F_DUPFD 0
#  else
#    error
#  endif
#endif
