#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define CLD_EXITED 1
#else
#  error
#endif
