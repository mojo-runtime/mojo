#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ETXTBSY 26
#else
#  error
#endif
