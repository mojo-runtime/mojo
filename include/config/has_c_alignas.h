#if !defined(has_c_alignas)
#  if defined(__has_feature)
#    define has_c_alignas __has_feature(c_alignas)
#  elif defined(__GNUC__)
#    include "_has_gnuc_minor.h"
#    define has_c_alignas _has_gnuc_minor(4, 7)
#  else
#    error
#  endif
#endif
