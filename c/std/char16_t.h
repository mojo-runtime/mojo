#pragma once

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
