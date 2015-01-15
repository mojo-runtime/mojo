#ifndef __c_STATIC_CAST
#  ifdef __cplusplus
#    define __c_STATIC_CAST(type, value) static_cast<type>(value)
#  else
#    define __c_STATIC_CAST(type, value) ((type)(value))
#  endif
#endif
