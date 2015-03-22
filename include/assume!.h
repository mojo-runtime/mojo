#pragma once

#if defined(__has_builtin)
#  if __has_builtin(__builtin_assume)
#    define assume(x) __builtin_assume(x)
#  endif
#endif

#if !defined(assume)
#  define assume(x)
#endif
