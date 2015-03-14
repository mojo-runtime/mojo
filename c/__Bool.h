#pragma once

#if defined(__cplusplus)
typedef bool __Bool;
#elif defined(__GNUC__)
#  if (__GNUC__ >= 3)
typedef _Bool __Bool;
#  else
#    error
#  endif
#else
#  error
#endif
