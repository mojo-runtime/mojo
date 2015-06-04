#if defined(__FreeBSD__)
#  include <os/freebsd/c/__time.h>
#elif defined(__linux__)
#  include <os/linux/c/__time.h>
#else
#  error
#endif
