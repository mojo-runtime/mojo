#ifndef F_GETLK
#  ifdef __linux__
#    if defined(__alpha__) || defined(__sparc__)
#      define F_GETLK 7
#    elif defined(__mips__)
#      define F_GETLK 14
#    else
#      define F_GETLK 5
#    endif
#  else
#    error
#  endif
#endif
