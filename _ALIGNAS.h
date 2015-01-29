#ifndef _ALIGNAS
#  ifdef __cplusplus
#    define _ALIGNAS(x) alignas(x)
#  else
#    define _ALIGNAS(x) _Alignas(x)
#  endif
#endif
