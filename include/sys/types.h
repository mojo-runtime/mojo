#if defined(__FreeBSD__)
#  include <os/freebsd/c/__types.h>
#elif defined(__linux__)
#  include <os/linux/c/__types.h>
#else
#  error
#endif
