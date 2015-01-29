#ifndef _INTERNAL
#  ifdef __GNUC__
#    define _INTERNAL __attribute__((visibility("internal")))
#  else
#    error todo
#  endif
#endif
