#ifndef __alignof_is_defined
#  if defined __cplusplus
#    include "compiler/has/cxx/alignof.h"
#    if compiler_has_cxx_alignof
#      error
#    endif
#  else
#    include "compiler/has/c/alignof.h"
#    if compiler_has_c_alignof
#      define alignof _Alignof
#    else
#      error
#    endif
#  endif
#  define __alignof_is_defined
#endif
