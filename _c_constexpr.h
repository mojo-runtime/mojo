#ifndef _c_constexpr // Note that we use this to mean the C++14 'relaxed' constexpr
#  if defined(__cplusplus) && __cplusplus >= 201402L
#    define _c_constexpr constexpr
#  elif defined(__GNUC__)
#    define _c_constexpr __attribute__((__const__))
#  else
#    error
#  endif
#endif
