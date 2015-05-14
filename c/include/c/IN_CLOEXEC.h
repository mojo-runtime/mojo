#pragma once

#if defined(__linux__)
#  include "O_CLOEXEC.h"
#  define IN_CLOEXEC O_CLOEXEC
#else
#  error
#endif
