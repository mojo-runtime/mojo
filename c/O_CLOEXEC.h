#ifndef O_CLOEXEC
#  ifdef __linux__
#    if defined(__alpha__) || defined(__parisc__)
#      define O_CLOEXEC 010000000
#    elif defined(__sparc__)
#      define O_CLOEXEC 0x400000
#    else
#      define O_CLOEXEC 02000000
#    endif
#  else
#    error
#  endif
#endif
