#if defined(__FreeBSD__)
#  include <os/freebsd/c/__stat.h>
#elif defined(__linux__)
#  include <os/linux/c/__stat.h>
#else
#  error
#endif
