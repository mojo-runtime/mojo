#ifndef __c_noexcept
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#  ifdef __cplusplus
#    define __c_noexcept noexcept
#  else
#    define __c_noexcept
#  endif
#  pragma clang diagnostic pop
#endif
