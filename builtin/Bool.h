#ifndef builtin_Bool_h_
#define builtin_Bool_h_

typedef
#ifdef __cplusplus
bool
#else
#  include "compiler/has/c/boolean_type.h"
#  if compiler_has_c_boolean_type
_Bool
#  else
#    error
#  endif
#endif
Bool;

#endif
