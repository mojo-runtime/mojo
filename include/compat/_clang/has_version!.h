#ifndef _clang_has_version
#  if defined(__clang__)
#    define _clang_has_version(x, y) ((__clang_major__ << 16) + __clang_minor__ >= ((x) << 16) + (y))
#  else
#    define _clang_has_version(x, y) 0
#  endif
#endif
