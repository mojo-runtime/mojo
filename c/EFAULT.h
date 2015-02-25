#ifndef EFAULT
#  ifdef __linux__
#    define EFAULT 14
#  else
#    error
#  endif
#endif
