#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define PROT_WRITE 0x2
#else
#  error
#endif
