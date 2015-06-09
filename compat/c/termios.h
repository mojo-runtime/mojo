#if defined(__FreeBSD__)
#  include <freebsd/termios/__all__.h>
#elif defined(__linux__)
#  include <linux/termios/__all__.h>
#else
#  error
#endif
