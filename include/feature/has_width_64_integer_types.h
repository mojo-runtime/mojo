#ifndef has_width_64_integer_types

#include "platform/WORD.h"

#if (WORD == WORD_64)
#  define has_width_64_integers 1
#else
#  error
#endif

#endif
