#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGFPE 8
#else
#  error
#endif
