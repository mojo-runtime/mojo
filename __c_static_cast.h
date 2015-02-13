#ifndef __c_static_cast
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#  ifdef __cplusplus
#    define __c_static_cast(t, v) static_cast<t>(v)
#  else
#    define __c_static_cast(t, v) ((t)(v))
#  endif
#  pragma clang diagnostic pop
#endif
