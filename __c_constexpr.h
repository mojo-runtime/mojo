#ifndef __c_constexpr
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#  ifdef __cplusplus
#    define __c_constexpr constexpr
#  else
#    define __c_constexpr __attribute__((__const__))
#  endif
#  pragma clang diagnostic pop
#endif
