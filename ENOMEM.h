#ifndef ENOMEM
#  ifdef __linux__
#    define ENOMEM 12
#  else
#    error
#  endif
#endif
