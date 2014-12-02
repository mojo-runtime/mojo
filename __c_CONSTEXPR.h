#ifndef __c_CONSTEXPR
#  ifdef __cplusplus
#    define __c_CONSTEXPR constexpr
#  else
#    define __c_CONSTEXPR __attribute__((__const__))
#  endif
#endif
