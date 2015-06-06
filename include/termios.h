#if defined(__FreeBSD__)
#  include <os/freebsd/c/_termios.h>
#elif defined(__linux__)
#  include <os/linux/c/_termios.h>
#else
#  error
#endif
