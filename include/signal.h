#if defined(__FreeBSD__)
#  include <os/freebsd/c/_signal.h>
#elif defined(__linux__)
#  include <os/linux/c/_signal.h>
#else
#  error
#endif
