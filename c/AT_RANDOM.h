#pragma once

#if defined(__linux__)
#  define AT_RANDOM 25
#else
#  error
#endif
