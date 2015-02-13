#ifndef __c_noreturn
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#  ifdef __cplusplus
#    define __c_noreturn [[noreturn]]
#  elif defined(__STDC_VERSION__) && __STDC_VERSION__ >= 20112L
#    define __c_noreturn _Noreturn
#  else
#    error
#  endif
#  pragma clang diagnostic pop
#endif
