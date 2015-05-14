#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_epoll_ctl 233
#  elif defined(__arm__)
#    define SYS_epoll_ctl 251
#  else
#    error
#  endif
#else
#  error
#endif
