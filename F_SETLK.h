#ifndef F_SETLK
#  ifdef __linux__
#    if defined(__alpha__) || defined(__sparc__)
#      define F_SETLK 8
#    else
#      define F_SETLK 6
#    endif
#  else
#    error
#  endif
#endif
