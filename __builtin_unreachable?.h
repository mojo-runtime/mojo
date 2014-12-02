#ifndef __builtin_unreachable
#  ifndef __GNUC__ // XXX: better way?
#    define __builtin_unreachable() ()
#  endif
#endif
