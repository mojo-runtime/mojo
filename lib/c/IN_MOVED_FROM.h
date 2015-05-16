#pragma once

#if defined(__linux__)
#  define IN_MOVED_FROM 0x40
#else
#  error
#endif
