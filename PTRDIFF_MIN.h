#ifndef PTRDIFF_MIN
#  ifdef __PTRDIFF_WIDTH__
#    if __PTRDIFF_WIDTH__ == 64
#      include "INT64_MIN.h"
#      define PTRDIFF_MIN INT64_MIN
#    elif __PTRDIFF_WIDTH__ == 32
#      include "INT32_MIN.h"
#      define PTRDIFF_MIN INT32_MIN
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
