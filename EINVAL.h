#ifndef EINVAL
#  ifdef __linux__
#    define EINVAL 22
#  else
#    error
#  endif
#endif
