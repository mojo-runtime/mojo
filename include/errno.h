#if defined(__FreeBSD__)
#  include <os/freebsd/c/_errno.h>
#elif defined(__linux__)
#  include <os/linux/c/_errno.h>
#else
#  error
#endif
