#ifndef __c_namespace
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#  ifdef __cplusplus
#    define __c_namespace_open                              \
    _Pragma("clang diagnostic push")                        \
    _Pragma("clang diagnostic ignored \"-Wc++98-compat\"")  \
    inline namespace c {                                    \
    _Pragma("clang diagnostic pop")
#    define __c_namespace_close }
#  else
#    define __c_namespace_open
#    define __c_namespace_close
#  endif
#  pragma clang diagnostic pop
#endif
