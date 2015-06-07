#if defined(__FreeBSD__)
#  include <freebsd/c/_termios.h>
#elif defined(__linux__)
#  include <linux/c/_termios.h>
#else
#  error
#endif
