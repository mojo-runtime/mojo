#ifndef __c_alignof
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#  ifdef __cplusplus
#    define __c_alignof(x) alignof(x)
#  else
#    define __c_alignof(x) _Alignof(x)
#  endif
#  pragma clang diagnostic pop
#endif
