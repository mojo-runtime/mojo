#ifndef _c_static_cast

#if defined(__cplusplus)
#  define _c_static_cast(T, x) static_cast<T>(x)
#else
#  define _c_static_cast(T, x) ((T)(x))
#endif

#endif
