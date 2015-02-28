#include "compat/__POINTER_WIDTH__.h"

#if (__POINTER_WIDTH__ == 64)
#  include "generic64/_system_Result_is_error.h"
#else
#  error
#endif
