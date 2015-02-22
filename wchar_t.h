#ifndef c_wchar_t_h_
#define c_wchar_t_h_

#ifndef __cplusplus

typedef
#ifdef __WCHAR_TYPE__
__WCHAR_TYPE__
#else
#  error
#endif
wchar_t;

#endif // __cplusplus

#endif
