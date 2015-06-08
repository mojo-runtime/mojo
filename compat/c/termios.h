#if defined(__FreeBSD__)
#  include <freebsd/_termios.h>
#elif defined(__linux__)
#  include <linux/_termios.h>
#else
#  error
#endif
