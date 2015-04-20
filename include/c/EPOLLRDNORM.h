#pragma once

#if defined(__linux__)
#  include "POLLRDNORM.h"
#  define EPOLLRDNORM POLLRDNORM
#else
#  error
#endif
