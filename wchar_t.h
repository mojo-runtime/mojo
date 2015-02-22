#ifndef c_wchar_t_h_
#define c_wchar_t_h_

#ifdef __cplusplus
// No need
#else
#  include "builtin/__WCHAR_TYPE__.h"
#  include "_internal/_c_namespace.h"

_c_namespace

typedef __WCHAR_TYPE__ wchar_t;

_c_namespace_end

#endif // __cplusplus

#endif
