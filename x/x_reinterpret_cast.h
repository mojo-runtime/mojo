#ifndef x_reinterpret_cast
#  ifdef __cplusplus
#    define x_reinterpret_cast(t, v) reinterpret_cast<t>(v)
#  else
#    define x_reinterpret_cast(t, v) ((t)(v))
#  endif
#endif
