#ifndef F_SETFL
#  ifdef __linux__
#    define F_SETFL 4
#  else
#    error
#  endif
#endif
