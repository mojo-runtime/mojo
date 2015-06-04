#if defined(__FreeBSD__)
#  include <os/freebsd/c/__termios.h>
#elif defined(__linux__)
#  include <os/linux/c/__termios.h>
#else
#  error
#endif
