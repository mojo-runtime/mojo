#if defined(__FreeBSD__)
#  include <os/freebsd/c/_wait.h>
#elif defined(__linux__)
#  include <os/linux/c/_wait.h>
#else
#  error
#endif
