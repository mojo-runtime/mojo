#pragma once

#if defined(__linux__)
#  include "POLLRDBAND.h"
#  define EPOLLRDBAND POLLRDBAND
#else
#  error
#endif
