#ifndef _c_unreachable
#  ifdef __GNUC__
#    define _c_unreachable() __builtin_unreachable()
#  else
#    error todo
#  endif
#endif
