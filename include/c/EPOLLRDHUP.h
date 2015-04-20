#pragma once

#if defined(__linux__)
#  include "POLLRDHUP.h"
#  define EPOLLRDHUP POLLRDHUP
#else
#  error
#endif
