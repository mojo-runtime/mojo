#pragma once

#if defined(__cplusplus)
typedef bool __Bool;
#elif defined(__STDC_VERSION__)
#  if __STDC_VERSION__ >= 199901L
typedef _Bool __Bool;
#  else
#    error
#  endif
#else
#  error
#endif
