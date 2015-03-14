#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
typedef unsigned char cc_t;
#else
#  error
#endif
