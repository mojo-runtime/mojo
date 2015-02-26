#ifndef compiler_has_clang_minor
#  if defined(__clang__)
#    define compiler_has_clang_minor(x, y) (__clang_major__ >= (x) && __clang_minor__ >= (y))
#  else
#    define compiler_has_clang_minor(x, y) 0
#  endif
#endif
