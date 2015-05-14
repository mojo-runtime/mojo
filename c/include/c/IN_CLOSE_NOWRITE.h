#pragma once

#if defined(__linux__)
#  define IN_CLOSE_NOWRITE 0x10
#else
#  error
#endif
