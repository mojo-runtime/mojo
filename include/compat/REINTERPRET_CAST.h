#ifndef REINTERPRET_CAST

#if defined(__cplusplus)
#  define REINTERPRET_CAST(T, x) reinterpret_cast<T>(x)
#else
#  define REINTERPRET_CAST(T, x) ((T)(x))
#endif

#endif
