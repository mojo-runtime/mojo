#if defined(__FreeBSD__)
#  include <os/freebsd/c/__signal.h>
#elif defined(__linux__)
#  include <os/linux/c/__signal.h>
#else
#  error
#endif
