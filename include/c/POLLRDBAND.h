#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define POLLRDBAND 0x80
#else
#  error
#endif
