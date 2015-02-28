#if !defined(x_reinterpret_cast)
#  if defined(__cplusplus)
#    define x_reinterpret_cast(T, x) reinterpret_cast<T>(x)
#  else
#    define x_reinterpret_cast(T, x) ((T)(x))
#  endif
#endif
