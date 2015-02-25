#ifndef O_DIRECTORY
#  ifdef __linux__
#    if defined(__alpha__)
#      define O_DIRECTORY 0100000
#    elif defined(__arm__) || defined(__arm64__) || defined(__blackfin__) || defined(__m68k__) || defined(__powerpc__)
#      define O_DIRECTORY 040000
#    elif defined(__parisc__)
#      define O_DIRECTORY 010000
#    else
#      define O_DIRECTORY 0200000
#    endif
#  else
#    error
#  endif
#endif
