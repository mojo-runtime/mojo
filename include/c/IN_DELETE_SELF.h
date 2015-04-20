#pragma once

#if defined(__linux__)
#  define IN_DELETE_SELF 0x400
#else
#  error
#endif
