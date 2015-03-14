#ifndef CHAR_MAX

#if defined(__GNUC__)
#  if defined(__CHAR_UNSIGNED__)
#    include "UCHAR_MAX.h"
#    define CHAR_MAX UCHAR_MAX
#  else
#    include "SCHAR_MAX.h"
#    define CHAR_MAX SCHAR_MAX
#  endif
#else
#  error
#endif

#endif
