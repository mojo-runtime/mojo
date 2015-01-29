#ifndef _c__char32_t_h
#define _c__char32_t_h

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
