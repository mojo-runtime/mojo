#ifndef x_static_cast
#  ifdef __cplusplus
#    define x_static_cast(t, v) static_cast<t>(v)
#  else
#    define x_static_cast(t, v) ((t)(v))
#  endif
#endif
