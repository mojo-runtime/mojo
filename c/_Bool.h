#pragma once

#if defined(__cplusplus)
typedef bool _Bool;
#elif defined(__GNUC__)
#  if (__GNUC__ < 3)
#    error
#  endif
#else
#  error
#endif
