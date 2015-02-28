#include "platform/WORD.h"

#if (WORD == WORD_64)
#  include "generic64/_system_Result_is_error.h"
#else
#  error
#endif
