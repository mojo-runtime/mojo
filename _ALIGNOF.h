#ifndef _ALIGNOF
#  ifdef __cplusplus
#    define _ALIGNOF(x) alignof(x)
#  else
#    define _ALIGNOF(x) _Alignof(x)
#  endif
#endif
