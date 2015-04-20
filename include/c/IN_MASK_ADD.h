#pragma once

#if defined(__linux__)
#  define IN_MASK_ADD 0x20000000
#else
#  error
#endif
