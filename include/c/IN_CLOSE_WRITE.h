#pragma once

#if defined(__linux__)
#  define IN_CLOSE_WRITE 0x8
#else
#  error
#endif
