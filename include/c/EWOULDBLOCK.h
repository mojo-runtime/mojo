#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  include "EAGAIN.h"
#  define EWOULDBLOCK EAGAIN
#else
#  error
#endif
