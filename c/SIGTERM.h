#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGTERM 15
#else
#  error
#endif
