#ifndef F_SETLKW
#  ifdef __linux__
#    if defined(__alpha__) || defined(__sparc__)
#      define F_SETLKW 9
#    else
#      define F_SETLKW 7
#    endif
#  else
#    error
#  endif
#endif
