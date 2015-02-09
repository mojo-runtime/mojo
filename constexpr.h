#ifndef constexpr
#  ifdef __cplusplus // assuming C++11
#  elif defined(__GNUC__)
#    define constexpr __attribute__((__const__))
#  else
#    error
#  endif
#endif
