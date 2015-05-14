#pragma once

#if defined(__linux__)
#  include "POLLWRNORM.h"
#  define EPOLLWRNORM POLLWRNORM
#else
#  error
#endif
