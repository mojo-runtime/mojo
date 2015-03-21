// -*- C -*-

#pragma once

#if defined(__GNUC__)
#  if defined(__CHAR_UNSIGNED__)
#    include "UCHAR_MIN.h"
#    define CHAR_MIN UCHAR_MIN
#  else
#    include "SCHAR_MIN.h"
#    define CHAR_MIN SCHAR_MIN
#  endif
#else
#  error
#endif
