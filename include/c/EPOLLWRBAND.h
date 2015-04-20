#pragma once

#if defined(__linux__)
#  include "POLLWRBAND.h"
#  define EPOLLWRBAND POLLWRBAND
#else
#  error
#endif
