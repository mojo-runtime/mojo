#ifndef INTPTR_MIN
#  ifdef __INTPTR_WIDTH__
#    if __INTPTR_WIDTH__ == 64
#      include "INT64_MIN.h"
#      define INTPTR_MIN INT64_MIN
#    elif __INTPTR_WIDTH__ == 32
#      include "INT32_MIN.h"
#      define INTPTR_MIN INT32_MIN
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
