#if defined(__FreeBSD__)
#  include <os/freebsd/c/__wait.h>
#elif defined(__linux__)
#  include <os/linux/c/__wait.h>
#else
#  error
#endif
