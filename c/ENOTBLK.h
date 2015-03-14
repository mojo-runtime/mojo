#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ENOTBLK 15
#else
#  error
#endif
