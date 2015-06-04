#if defined(__FreeBSD__)
#  include <os/freebsd/c/__fcntl.h>
#elif defined(__linux__)
#  include <os/linux/c/__fcntl.h>
#else
#  error
#endif
