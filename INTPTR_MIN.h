#ifndef INTPTR_MIN
#  ifdef __INTPTR_WIDTH__
#    if __INTPTR_WIDTH__ == 64
#      define INTPTR_MIN (-9223372036854775807L - 1)
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
