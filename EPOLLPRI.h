#ifndef c_EPOLLPRI_h_
#define c_EPOLLPRI_h_

#include "_define/EPOLL.h"

#ifdef __linux__
#  include "POLLPRI.h"
_c_define_EPOLL(PRI, POLLPRI);
#else
#  error
#endif

#endif
