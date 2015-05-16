#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define ICRNL 0x100
#else
#  error
#endif
