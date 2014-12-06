#ifndef __c_ALIGNAS
#  ifdef __cplusplus
#    define __c_ALIGNAS(x) alignas(x)
#  else
#    define __c_ALIGNAS(x) _Alignas(x)
#  endif
#endif
