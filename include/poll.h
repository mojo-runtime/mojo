#if defined(__FreeBSD__)
#  include <os/freebsd/c/_poll.h>
#elif defined(__linux__)
#  include <os/linux/c/_poll.h>
#else
#  error
#endif
