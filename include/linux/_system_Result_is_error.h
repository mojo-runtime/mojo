#include "platform/WORD_WIDTH.h"

#if WORD_WIDTH == 64
#  include "generic64/_system_Result_is_error.h"
#else
#  error
#endif
