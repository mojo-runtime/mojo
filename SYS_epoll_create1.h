#ifndef SYS_epoll_create1
#  ifdef __linux__
#    ifdef __x86_64__
#      define SYS_epoll_create1 291
#    else
#      error
#    endif
#  else
#    error
#  endif
#endif
