#if defined(__FreeBSD__)
#  include <os/freebsd/c/_types.h>
#elif defined(__linux__)
#  include <os/linux/c/_types.h>
#else
#  error
#endif
