#if !defined(x_static_cast)
#  if defined(__cplusplus)
#    define x_static_cast(T, x) static_cast<T>(x)
#  else
#    define x_static_cast(T, x) ((T)(x))
#  endif
#endif
