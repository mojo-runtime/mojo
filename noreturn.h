#ifndef noreturn
#  ifndef __cplusplus
#    include "has/c/noreturn.h"
#    if has_c_noreturn
#      define noreturn _Noreturn
#    else
#      error todo
#    endif
#  endif
#endif
