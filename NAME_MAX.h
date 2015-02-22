#ifndef NAME_MAX
#  ifdef __linux__
#    define NAME_MAX 255
#  else
#    error
#  endif
#endif
