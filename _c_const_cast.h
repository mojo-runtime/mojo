#ifndef _c_const_cast
#  ifdef __cplusplus
#    define _c_const_cast(t, v) const_cast<t>(v)
#  else
#    define _c_const_cast(t, v) ((t)(v))
#  endif
#endif
