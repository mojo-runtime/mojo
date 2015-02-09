#ifndef STATIC_CAST
#  ifdef __cplusplus
#    define STATIC_CAST(type, value) static_cast<type>(value)
#  else
#    define STATIC_CAST(type, value) ((type)(value))
#  endif
#endif
