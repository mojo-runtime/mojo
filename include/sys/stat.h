#if defined(__FreeBSD__)
#  include <os/freebsd/c/_stat.h>
#elif defined(__linux__)
#  include <os/linux/c/_stat.h>
#else
#  error
#endif
