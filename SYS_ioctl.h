#ifndef SYS_ioctl
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_ioctl 16
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
