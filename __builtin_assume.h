#ifndef __builtin_assume
#  if !(defined(__has_builtin) && __has_builtin(__builtin_assume))
#    define __builtin_assume(x) ()
#  endif
#endif
