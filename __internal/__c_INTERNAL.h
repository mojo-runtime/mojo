#ifndef __c_INTERNAL
#  ifdef __GNUC__
#    define __c_INTERNAL __attribute__((visibility("internal")))
#  else
#    error todo
#  endif
#endif
