#if defined(__FreeBSD__)
#  include <os/freebsd/c/_time.h>
#elif defined(__linux__)
#  include <os/linux/c/_time.h>
#else
#  error
#endif
