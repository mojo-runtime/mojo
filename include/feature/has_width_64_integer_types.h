#ifndef has_width_64_integer_types

#include "platform/WORD_WIDTH.h"

#if WORD_WIDTH == 64
#  define has_width_64_integers 1
#else
#  error
#endif

#endif
