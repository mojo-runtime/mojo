#ifndef __alignas_is_defined
#  if defined __cplusplus
#    include "compiler/has/cxx/alignas.h"
#    if !compiler_has_cxx_alignas
#      error
#    endif
#  else
#    include "compiler/has/c/alignas.h"
#    if compiler_has_c_alignas
#      define alignas _Alignas
#    else
#      error
#    endif
#  endif
#  define __alignas_is_defined
#endif
