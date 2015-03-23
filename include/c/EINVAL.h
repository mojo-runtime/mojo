#pragma once

#if defined(__linux__) || defined(__FreeBSD__)
#  define EINVAL 22
#else
#  error
#endif
