#ifndef has_cxx_nullptr

#if defined(__has_feature)
#  define has_cxx_nullptr __has_feature(cxx_nullptr)
#elif defined(__GNUC__)
#  include "_has_gnuc_minor.h"
#  define has_cxx_nullptr _has_gnuc_minor(4, 6)
#else
#  error
#endif

#endif
