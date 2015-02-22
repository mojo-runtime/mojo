#ifndef x_const_cast
#  ifdef __cplusplus
#    define x_const_cast(t, v) const_cast<t>(v)
#  else
#    define x_const_cast(t, v) ((t)(v))
#  endif
#endif
