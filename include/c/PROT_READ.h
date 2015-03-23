#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define PROT_READ 0x1
#else
#  error
#endif
