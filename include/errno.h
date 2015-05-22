#if defined(__FreeBSD__)
#  include <os/freebsd/errno/_all.h>
#elif defined(__linux__)
#  include <os/linux/errno/_all.h>
#else
#  error
#endif
