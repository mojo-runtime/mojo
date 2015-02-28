#ifndef _c_reinterpret_cast
#  ifdef __cplusplus
#    define _c_reinterpret_cast(T, x) reinterpret_cast<T>(x)
#  else
#    define _c_reinterpret_cast(T, x) ((T)(x))
#  endif
#endif
