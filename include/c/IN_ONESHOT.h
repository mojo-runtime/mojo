#pragma once

#if defined(__linux__)
#  define IN_ONESHOT 0x80000000
#else
#  error
#endif
