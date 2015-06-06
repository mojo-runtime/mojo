#if defined(__FreeBSD__)
#  include <os/freebsd/c/_fcntl.h>
#elif defined(__linux__)
#  include <os/linux/c/_fcntl.h>
#else
#  error
#endif
