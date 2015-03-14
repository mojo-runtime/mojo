#pragma once

#if defined(__linux__)
#  define EPOLLWAKEUP (1 << 29)
#else
#  error
#endif
