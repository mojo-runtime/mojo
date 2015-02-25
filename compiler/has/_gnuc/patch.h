#ifndef _compiler_has_gnuc_patch
#  if defined __GNUC__ && defined __GNUC_MINOR__ && defined __GNUC_PATCHLEVEL__
#    define compiler_has_gnuc_patch(x, y, z)                            \
    ((__GNUC__ << 32) + (__GNUC_MINOR__ << 16) + __GNUC_PATCHLEVEL__ >= ((x) << 32) + (y << 16) + z)
#  else
#    define compiler_has_gnuc_patch(x, y, z) 0
#  endif
#endif
