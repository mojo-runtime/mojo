#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define CLOCK_REALTIME 0
#else
#  error
#endif
