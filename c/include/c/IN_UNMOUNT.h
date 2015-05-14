#pragma once

#if defined(__linux__)
#  define IN_UNMOUNT 0x2000
#else
#  error
#endif
