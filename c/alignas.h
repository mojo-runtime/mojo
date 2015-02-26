#ifndef alignas
#  if defined __cplusplus
#    include "has/cxx/alignas.h"
#    if !has_cxx_alignas
#      error
#    endif
#  else
#    include "has/c/alignas.h"
#    if has_c_alignas
#      define alignas _Alignas
#    else
#      error
#    endif
#  endif
#endif
