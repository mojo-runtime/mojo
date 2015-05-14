#pragma once

#if defined(__linux__)
#  define IN_EXCL_UNLINK 0x4000000
#else
#  error
#endif
