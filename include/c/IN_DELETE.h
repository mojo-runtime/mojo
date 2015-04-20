#pragma once

#if defined(__linux__)
#  define IN_DELETE 0x200
#else
#  error
#endif
