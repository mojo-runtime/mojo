#ifndef _has_clang_minor
#  if defined(__clang__)
#    define _has_clang_minor(x, y) ((__clang_major__ << 16) + __clang_minor__ >= ((x) << 16) + (y))
#  else
#    define _has_clang_minor(x, y) 0
#  endif
#endif
