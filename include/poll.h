#if defined(__FreeBSD__)
#  include <os/freebsd/c/__poll.h>
#elif defined(__linux__)
#  include <os/linux/c/__poll.h>
#else
#  error
#endif
