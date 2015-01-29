#ifndef _c__wchar_t_h
#define _c__wchar_t_h

#ifdef __cplusplus
// No need
#else
typedef
#  ifdef __WCHAR_TYPE__
__WCHAR_TYPE__
#  else
#    error
#  endif
wchar_t;
#endif

#endif
