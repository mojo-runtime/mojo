#pragma once

#if defined(__linux__)
#  define IN_MOVE_SELF 0x800
#else
#  error
#endif
