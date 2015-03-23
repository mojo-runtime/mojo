// -*- C -*-

#pragma once

#if defined(__linux__)
#  if defined(__x86_64__)
#    define SYS_epoll_create1 291
#  elif defined(__arm__)
#    define SYS_epoll_create1 357
#  else
#    error
#  endif
#else
#  error
#endif
