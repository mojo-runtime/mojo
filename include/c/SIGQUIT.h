#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGQUIT 3
#else
#  error
#endif
