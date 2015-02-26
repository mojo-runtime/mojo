#ifndef noreturn
#  ifndef __cplusplus
#    include "compiler/has/c/noreturn.h"
#    if compiler_has_c_noreturn
#      define noreturn _Noreturn
#    else
#      error todo
#    endif
#  endif
#endif
