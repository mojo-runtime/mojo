#if defined(__FreeBSD__)
#  include <os/freebsd/c/__mman.h>
#elif defined(__linux__)
#  include <os/linux/c/__mman.h>
#else
#  error
#endif
