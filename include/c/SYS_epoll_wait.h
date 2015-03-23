// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_epoll_wait 232
#  elif defined(__arm__)
#    define SYS_epoll_wait 252
#  else
#    error
#  endif
#else
#  error
#endif
