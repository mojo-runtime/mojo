#if defined(__FreeBSD__)
#  include <os/freebsd/c/_mman.h>
#elif defined(__linux__)
#  include <os/linux/c/_mman.h>
#else
#  error
#endif
