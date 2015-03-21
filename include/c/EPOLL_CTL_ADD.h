// -*- C -*-

#pragma once

#if defined(__linux__)
#  define EPOLL_CTL_ADD 1
#else
#  error
#endif
