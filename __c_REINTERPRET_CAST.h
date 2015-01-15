#ifndef __c_REINTERPRET_CAST
#  ifdef __cplusplus
#    define __c_REINTERPRET_CAST(type, value) reinterpret_cast<type>(value)
#  else
#    define __c_REINTERPRET_CAST(type, value) ((type)(value))
#  endif
#endif
