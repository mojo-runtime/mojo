#ifndef __c_aligned
#  pragma clang diagnostic push
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#  ifdef __GNUC__
#    define __c_aligned(x) __attribute__((__aligned__(x)))
#  else
#    error
#  endif
#  pragma clang diagnostic pop
#endif
