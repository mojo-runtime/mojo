#pragma once

#if defined(__linux__)
#  include "O_NONBLOCK.h"
#  define IN_NONBLOCK O_NONBLOCK
#else
#  error
#endif
