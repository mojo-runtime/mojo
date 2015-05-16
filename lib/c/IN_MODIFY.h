#pragma once

#if defined(__linux__)
#  define IN_MODIFY 0x2
#else
#  error
#endif
