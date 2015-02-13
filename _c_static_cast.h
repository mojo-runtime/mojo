#ifndef _c_static_cast
#  ifdef __cplusplus
#    define _c_static_cast(t, v) static_cast<t>(v)
#  else
#    define _c_static_cast(t, v) ((t)(v))
#  endif
#endif
