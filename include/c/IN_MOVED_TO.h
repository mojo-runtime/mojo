#pragma once

#if defined(__linux__)
#  define IN_MOVED_TO 0x80
#else
#  error
#endif
