#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define POLLRDNORM 0x40
#else
#  error
#endif
