#ifndef F_GETFL
#  ifdef __linux__
#    define F_GETFL 3
#  else
#    error
#  endif
#endif
