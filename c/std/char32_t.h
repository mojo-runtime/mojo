#pragma once

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
