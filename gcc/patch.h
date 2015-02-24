#ifndef has_gcc_patch
#  if defined __GNUC__ && defined __GNUC_MINOR__ && defined __GNUC_PATCHLEVEL__
#    define has_gcc_patch(x, y, z) TODO
#  else
#    define has_gcc_patch(x, y, z) 0
#  endif
#endif
