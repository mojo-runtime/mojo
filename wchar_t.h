#ifndef c_wchar_t_h_
#define c_wchar_t_h_

#ifdef __cplusplus
// No need
#else
#  include "builtin/__WCHAR_TYPE__.h"
#  include "c/__c_namespace.h"

__c_namespace_open

typedef __WCHAR_TYPE__ wchar_t;

__c_namespace_close

#endif // __cplusplus

#endif
