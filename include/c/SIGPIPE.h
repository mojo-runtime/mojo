#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define SIGPIPE 13
#else
#  error
#endif
