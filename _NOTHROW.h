#ifndef _NOTHROW
#  ifdef __GNUC__
#    define _NOTHROW __attribute__((nothrow))
#  else
#    error
#  endif
#endif
