#ifndef __alignof_is_defined
#  if defined __cplusplus
#    include "has/cxx/alignof.h"
#    if has_cxx_alignof
#      error
#    endif
#  else
#    include "has/c/alignof.h"
#    if has_c_alignof
#      define alignof _Alignof
#    else
#      error
#    endif
#  endif
#  define __alignof_is_defined
#endif
