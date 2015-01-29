#ifndef _CONSTEXPR
#  ifdef __cplusplus
#    define _CONSTEXPR constexpr
#  else
#    define _CONSTEXPR __attribute__((__const__))
#  endif
#endif
