#ifndef __c_ALIGNOF
#  ifdef __cplusplus
#    define __c_ALIGNOF(x) alignof(x)
#  else
#    define __c_ALIGNOF(x) _Alignof(x)
#  endif
#endif
