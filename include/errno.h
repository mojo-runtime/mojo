#if defined(__FreeBSD__)
#  include <os/freebsd/c/__errno.h>
#elif defined(__linux__)
#  include <os/linux/c/__errno.h>
#else
#  error
#endif
