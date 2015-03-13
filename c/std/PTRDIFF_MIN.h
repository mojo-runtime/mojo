#ifndef PTRDIFF_MIN

#if defined(__SIZEOF_PTRDIFF_T__)
#  if __SIZEOF_PTRDIFF_T__ == 8
#    include "INT64_MIN.h"
#    define PTRDIFF_MIN INT64_MIN
#  elif __SIZEOF_PTRDIFF_T__ == 4
#    include "INT32_MIN.h"
#    define PTRDIFF_MIN INT32_MIN
#  else
#    error
#  endif
#else
#  error
#endif

#endif
