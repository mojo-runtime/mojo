#ifndef _gnuc_has_version
#  if defined(__GNUC__) && defined (__GNUC_MINOR__)
#    define _gnuc_has_version(x, y) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((x) << 16) + (y))
#  else
#    define _gnuc_has_version(x, y) 0
#  endif
#endif
