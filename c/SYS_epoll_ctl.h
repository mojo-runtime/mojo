#ifndef SYS_epoll_ctl
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_epoll_ctl 233
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
