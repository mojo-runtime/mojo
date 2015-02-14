#ifndef _c_assume
#  if defined(__has_builtin) && __has_builtin(__builtin_assume)
#    define _c_assume(x) __builtin_assume(x)
#  else
#    define _c_assume(x)
#  endif
#endif
