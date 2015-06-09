#if defined(__FreeBSD__)
#  include <freebsd/termios/@all.h>
#elif defined(__linux__)
#  include <linux/termios/@all.h>
#else
#  error
#endif
