#ifndef REINTERPRET_CAST
#  ifdef __cplusplus
#    define REINTERPRET_CAST(type, value) reinterpret_cast<type>(value)
#  else
#    define REINTERPRET_CAST(type, value) ((type)(value))
#  endif
#endif
