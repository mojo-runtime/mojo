#ifndef _STATIC_CAST
#  ifdef __cplusplus
#    define _STATIC_CAST(type, value) static_cast<type>(value)
#  else
#    define _STATIC_CAST(type, value) ((type)(value))
#  endif
#endif
