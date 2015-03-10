#ifndef _c_char32_t_h_
#define _c_char32_t_h_

#ifdef __cplusplus
// Assuming C++11
#else
typedef
#  ifdef __CHAR32_TYPE__
__CHAR32_TYPE__
#  else
#    error
#  endif
char32_t;
#endif

#endif
