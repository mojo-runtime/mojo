#ifndef x_constexpr // Note that we use this to mean the C++14 'relaxed' constexpr
#  if defined(__cplusplus) && __cplusplus >= 201402L
#    define x_constexpr constexpr
#  elif defined(__GNUC__)
#    define x_constexpr __attribute__((__const__))
#  else
#    error
#  endif
#endif
