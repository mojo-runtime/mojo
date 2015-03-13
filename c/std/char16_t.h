#ifndef _c_char16_t_h_
#define _c_char16_t_h_

#ifdef __cplusplus
// Assuming C++11
#else
typedef
#  ifdef __CHAR16_TYPE__
__CHAR16_TYPE__
#  else
#    error
#  endif
char16_t;
#endif

#endif
