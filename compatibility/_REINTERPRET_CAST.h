#ifndef _REINTERPRET_CAST
#  ifdef __cplusplus
#    define _REINTERPRET_CAST(type, value) reinterpret_cast<type>(value)
#  else
#    define _REINTERPRET_CAST(type, value) ((type)(value))
#  endif
#endif
