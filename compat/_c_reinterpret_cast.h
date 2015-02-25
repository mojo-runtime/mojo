#ifndef _c_reinterpret_cast
#  ifdef __cplusplus
#    define _c_reinterpret_cast(t, v) reinterpret_cast<t>(v)
#  else
#    define _c_reinterpret_cast(t, v) ((t)(v))
#  endif
#endif
