#ifndef c_wchar_t_h_
#define c_wchar_t_h_

#include "_internal/_c_namespace.h"

#ifndef __cplusplus

_c_namespace

typedef
#ifdef __WCHAR_TYPE__
__WCHAR_TYPE__
#else
#  error
#endif
wchar_t;

_c_namespace_end

#endif // __cplusplus

#endif
