#pragma once

#if defined(__linux__)
#  define IN_CREATE 0x100
#else
#  error
#endif
