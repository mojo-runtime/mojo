#ifndef STATIC_CAST

#if defined(__cplusplus)
#  define STATIC_CAST(T, x) static_cast<T>(x)
#else
#  define STATIC_CAST(T, x) ((T)(x))
#endif

#endif
