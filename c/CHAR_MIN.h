#ifndef CHAR_MIN
#  ifdef __CHAR_UNSIGNED__
#    define CHAR_MIN 0
#  else
#    include "SCHAR_MIN.h"
#    define CHAR_MIN SCHAR_MIN
#  endif
#endif
